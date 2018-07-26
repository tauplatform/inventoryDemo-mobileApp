package com.rho.barcodechainway;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.HashMap;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

import android.annotation.SuppressLint;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncTask;
import android.os.BatteryManager;
import android.util.Pair;

import com.rho.barcodechainway.Barcode;
import com.rho.barcodechainway.BarcodeFactory;

import com.rho.barcodechainway.RhoScannerInfo;
import com.rho.barcodechainway.RhoScannerInfo.RhoScannerClass;

import com.rhomobile.rhodes.Logger;
import com.rhomobile.rhodes.RhodesActivity;
import com.rhomobile.rhodes.api.IMethodResult;
import com.rhomobile.rhodes.api.MethodResult;
import com.rhomobile.rhodes.extmanager.IRhoConfig;
import com.rhomobile.rhodes.extmanager.IRhoWebView;
import com.rhomobile.rhodes.webview.GoogleWebView;
import com.rhomobile.rhodes.webview.WebViewConfig;

import com.zebra.adc.decoder.Barcode2DWithSoft;

public class ChainwayScanner extends Barcode implements Barcode2DWithSoft.ScanCallback
{
	public enum ENABLE_TYPE
	{
		ENABLE, TAKE
	}

	private static final String TAG = "ChainwayScanner";

	private boolean isMinimized = false;
	private boolean isEnabled = false;
	private boolean isScanning = false;
	private boolean didTakeEnableTheScanner = false;
	private boolean hasQueuedEnableTask = false;
	private boolean isInitialising = false;
	
	private int setupRetryCount = 0;
	
	Barcode2DWithSoft scanner = null;
	
	private ENABLE_TYPE enableType;
	private IMethodResult enableCallback;
	private IMethodResult takeCallback;
	
	private RhoScannerInfo scannerInfo;

	private ArrayList<String> supportedProperties;
	private ArrayList<Pair<String,String>> propertyQueue;
	
	private BarcodeFactory factory;

	private static ArrayList<String> allProperties = new ArrayList<String>();


	public class InitTask extends AsyncTask<String, Integer, Boolean> {
        @Override
        protected Boolean doInBackground(String... params) {
            // TODO Auto-generated method stub

            Logger.D( TAG, "InitTask.doInBackground() +" );

            if(scanner==null){
                scanner=Barcode2DWithSoft.getInstance();
            }
            boolean result=false;
            if(scanner!=null) {
                result = scanner.open(RhodesActivity.getContext());
                Logger.I(TAG,"open="+result);

            }

			Logger.D( TAG, "InitTask.doInBackground() -" );

            return result;
        }

        @Override
        protected void onPostExecute(Boolean result) {

            synchronized(ChainwayScanner.this) {
	            if(result){            	
	                scanner.setParameter(324, 1);
	                scanner.setParameter(300, 0); // Snapshot Aiming
	                scanner.setParameter(361, 0); // Image Capture Illumination

	                // interleaved 2 of 5
	                scanner.setParameter(6, 1);
	                scanner.setParameter(22, 0);
	                scanner.setParameter(23, 55);

	                isEnabled = true;
	                isInitialising = false;
	            }
	        }

	        super.onPostExecute(result);
        }

        @Override
        protected void onPreExecute() {
        	super.onPreExecute();

        	synchronized(ChainwayScanner.this) {            
            	isInitialising = true;
        	}
        }

    }

    class ChainwayScannerInfo extends RhoScannerInfo
    {
    	ChainwayScannerInfo()
    	{
    		defaultScanner = true;
			friendlyName = "Laser Scanner";
			scannerClass = RhoScannerClass.SCANNER_CLASS_LASER;
			isBluetooth = false;
    	}    	
    }

	@SuppressLint("DefaultLocale")
	public ChainwayScanner(String id)
	{
		super(id);	
		Logger.D(TAG, "ChainwayScanner created: " + id);
		this.scannerId = id;
		
		scannerInfo = new ChainwayScannerInfo();

		setProperty( "friendlyName", scannerInfo.getFriendlyName(), null );
		setProperty( "scannerType", "Laser", null );
		
		propertyQueue = new ArrayList<Pair<String,String>>();
	}	
	
	@Override
	synchronized public void enable(Map<String, String> propertyMap, IMethodResult result)
	{
		Logger.D(TAG, "enable+");

		if ( isInitialising ) {
			return;
		}

		BarcodeFactory.setEnabledState(scannerId);

		enableType = ENABLE_TYPE.ENABLE;
		
		if (result == null || !result.hasCallback()) // No callback is set
		{
			Logger.D(LOGTAG, "Callbackless enable. Will output as keystrokes");
			enableCallback = null;
		}
		else
		{
			enableCallback = result;
			result.keepAlive();
		}
		
		setProperties(propertyMap, new MethodResult(false));
		
		enable();

		didTakeEnableTheScanner = false;
		Logger.D(TAG, "enable-");
	}

	private void enable()
	{
		Logger.D(TAG, "enable()+");
		
		if(isMinimized)
		{
			hasQueuedEnableTask = true;
		}
		else
		{
			if ( scanner == null ) {
				new InitTask().execute();
			}
		}

		Logger.D(TAG, "enable()-");
	}

	@Override
	public void start(IMethodResult result)
	{
		Logger.D(TAG, "start+");
		startScanning();
		Logger.D(TAG, "start-");
	}

	@Override
	public void stop(IMethodResult result)
	{
		Logger.D(TAG, "stop+");
		stopScanning();
		Logger.D(TAG, "stop-");
	}

	@Override
	synchronized public void disable(IMethodResult result)
	{
		Logger.D(TAG, "disable+");

		if ( isInitialising ) {
			return;
		}

		BarcodeFactory.setDisabledState(scannerId);
		if(enableCallback != null)
		{
			enableCallback.release();
			enableCallback = null;
		}
		disable(false);
		Logger.D(TAG, "disable-");
	}

	private void disable(boolean isMinimizing)
	{
		Logger.D(TAG, "disable()+");
		if(scanner != null)
		{
			try
			{
				if(isMinimizing && isEnabled)
				{
					hasQueuedEnableTask = true;
				}

				if(!isMinimized)
				{
					if(isEnabled) {
						scanner.stopScan();
            			scanner.close();
            			scanner = null;
					}
					
					if(isMinimizing) {
						isMinimized = true;
					}
				}
			}
			catch (Exception e)
			{
				Logger.E(TAG, "disable Scanner ERROR, cannot disable scanner: " + e.getMessage());
				e.printStackTrace();
			}
			finally
			{
				if(!isMinimizing)
				{
					propertyQueue.clear();
					hasQueuedEnableTask = false;
				}				
			}
		}
		isEnabled = false;
		Logger.D(TAG, "disable()-");
	}

	@Override
	public void getAllProperties(IMethodResult result)
	{
		Logger.D(TAG, "getProperties+");
		getProperties(allProperties, result);
		Logger.D(TAG, "getProperties-");
	}

	@Override
	public void getProperties(List<String> arrayofNames, IMethodResult result)
	{
		Logger.D(TAG, "getProperties length: " + arrayofNames.size());
		for(String name: arrayofNames)
        {
            MethodResult propResult = new MethodResult(false);
            getProperty(name, propResult);
            propResult.collectSelf(name, result);
        }
        result.set();
        Logger.D(TAG, "getProperties-");
	}

	@SuppressLint("DefaultLocale")
	@Override
	public void getProperty(String propertyName, IMethodResult result)
	{
		Logger.D(TAG, "getProperty: " + propertyName);

		super.getProperty( propertyName, result );
/*
		String pn = propertyName.toLowerCase();

		if ( pn.equals( "friendlyName" ) ) {
			result.set( scannerInfo.getFriendlyName() );
		} else if ( pn.equals( "scannerType" ) ) {
			result.set( "Laser" );
		} else {
			Logger.I(TAG, propertyName + " is not supported on Android");
			result.set();
		}
*/		
	}

	@SuppressWarnings("unchecked")
	@Override
	public void getSupportedProperties(IMethodResult result)
	{
		Logger.D(TAG, "getSupportedProperties");
		if(supportedProperties == null)
		{
			result.setError("Cannot detect supported properties if the scanner has not been enabled in this app");
			Logger.W(TAG, "Cannot detect supported properties if the scanner has not been enabled in this app");
			return;
		}
		result.set((List<Object>)(List<?>) supportedProperties);
	}

	@Override
	public void setProperties(Map<String, String> propertyMap, IMethodResult result)
	{
		if(propertyMap == null) return;
		Logger.D(TAG, "setProperties. Length: " + propertyMap.size());

		Logger.D(TAG, "setProperties-");
	}

	@SuppressLint("DefaultLocale")
	@Override
	public void setProperty(String propertyName, String propertyValue, IMethodResult result)
	{
		Logger.D(TAG, "setProperty: " + propertyName + ", propertyValue: " + propertyValue);
		
		super.setProperty(propertyName, propertyValue, result);
	}

	@Override
	public void take(Map<String, String> propertyMap, IMethodResult result)
	{
		setProperties(propertyMap, new MethodResult(false));
		enableType = ENABLE_TYPE.TAKE;
		
		takeCallback = result;
		result.keepAlive();
		
		if(isEnabled) {
			didTakeEnableTheScanner = true;		
			setProperties(propertyMap, new MethodResult(false));
			startScanning();
		} else {
			result.setError( "Enable scanner first!" );
		}		
		
	}

	@Override
	public void take_barcode(String rubyCallbackURL, Map<String, String> propertyMap, IMethodResult result)
	{
		Logger.D(LOGTAG, "take_barcode");
		result.setError("take_barcode is not supported. Use 'take' or 'enable' instead.");
	}

	@Override
	public void onResume()
	{
		Logger.D(TAG, "onResume");
		
		isMinimized = false;
		if(hasQueuedEnableTask)
		{
			hasQueuedEnableTask = false;
			//enable(null, enableCallback);
		}
	}

	@Override
	public void onPause()
	{
		Logger.D(TAG, "onPause+");
		relinquishScanner();
		isMinimized = true;
		Logger.D(TAG, "onPause-");
	}


	@Override
	public void onStop()
	{
		Logger.D(TAG, "onStop+");
		relinquishScanner();
		isMinimized = true;
		Logger.D(TAG, "onStop-");
	}

	/**
	 * Call this when the Activity is minimized
	 */
	private void relinquishScanner()
	{
		Logger.D(TAG, "relinquishScanner+");
		if(!isMinimized)
		{
			stopScanning();
			//disable(!isMinimized);
		}
		Logger.D(TAG, "relinquishScanner-");
	}
	
	private void stopScanning()
	{
		Logger.D(TAG, "stopScanning+");
		if(isMinimized) return;
		if(scanner != null)
		{
			scanner.stopScan();
		}
		Logger.D(TAG, "stopScanning-");
	}
	
	private void startScanning()
	{
		Logger.D(TAG, "startScanning+");
		if(isMinimized) return;
		if(scanner != null)
		{
			scanner.scan();
			scanner.setScanCallback(this);
		}
		Logger.D(TAG, "startScanning-");
	}

	@Override
	public void onDestroy()
	{
		Logger.D(TAG, "onDestroy");
		destroy();
	}

	@Override
    public void onScanComplete(int i, int length, byte[] bytes) {
    	Logger.D(TAG, "onScanComplete +");

    	if(enableCallback != null)
		{
			if (length > 0) {
				HashMap<String, Object> resultMap = new HashMap<String, Object>();
				resultMap.put("data", new String(bytes, 0, length));
				resultMap.put("length", String.valueOf(length));
				enableCallback.set(resultMap);
	        }else{
	        	if (length == -1) {
	        		Logger.T(TAG, "Scan cancel");
            	} else if (length == 0) {
            		Logger.T(TAG, "Scan TimeOut");
            	} else {
            		Logger.T(TAG, "Scan fail");
            	}
	        }
		}        

        Logger.D(TAG, "onScanComplete -");
    }
	
	public void destroy()
	{
		if(scanner != null)
		{
			scanner.stopScan();
            scanner.close();

			scanner = null;
		}
		scannerInfo = null;
		propertyQueue = null;
	}
}
