package com.rho.barcodechainway;

import java.io.File;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Iterator;
import java.util.Map;

import android.annotation.SuppressLint;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.Camera;
import android.os.BatteryManager;
import android.view.KeyEvent;
import com.rhomobile.rhodes.Logger;
import com.rhomobile.rhodes.RhodesActivity;
import com.rhomobile.rhodes.api.RhoApiFactory;
import com.rhomobile.rhodes.util.ContextFactory;
import com.rhomobile.rhodes.RhoConf;

public class BarcodeFactory extends RhoApiFactory<Barcode, BarcodeSingleton> implements IBarcodeChainwayFactory
{
	private static String TAG = "BarcodeChainway";

	private static final String CHAINWAY_DEFAULT_SCANNER_ID = "chainway_laser_scanner";
	
	private static BarcodeFactory factoryInstance;

	private HashMap<String, Barcode> barcodeObjects;

	private static String enabledScanner;

	protected final int KEYCODE_TRIGGER = 139;
	
	private int lastKeyAction;
	private StartScannerTask startTask;
	private StopScannerTask stopTask;
	private boolean isPaused;	
	
	public BarcodeFactory()
	{
		super();
		Logger.D(TAG, "BarcodeFactory constructor");
		
		BarcodeFactory.factoryInstance = this;
		barcodeObjects = new HashMap<String, Barcode>();
		
		startTask = new StartScannerTask();
		stopTask = new StopScannerTask();
		lastKeyAction = -1;
		setPaused(false);
	}
		
	
	@Override
	protected BarcodeSingleton createSingleton()
	{
		Logger.D(TAG, "createSingleton");
		return new BarcodeSingleton(this);
	}

	@Override
	protected Barcode createApiObject(String id)
	{
		Logger.D(TAG, "createApiObject+ " + id);
		
		Barcode requestedBarcode = barcodeObjects.get(id);
		if(requestedBarcode == null)
		{
			requestedBarcode = new ChainwayScanner(id);
			barcodeObjects.put(id, requestedBarcode);
		}

		Logger.D(TAG, "createApiObject-");

		return requestedBarcode;
	}	

	public List<String> getIds()
	{
		Logger.D(TAG, "getIds");
		return enumerate();
	}
	

	public Barcode getScanner(String scannerId)
	{
		Logger.D(TAG, "getScanner");
		return barcodeObjects.get(scannerId);
	}
	
	public List<String> enumerate()
	{
		Logger.D(TAG, "enumerate");
		
		List<String> barcodeIdStrings = new ArrayList<String>();

		barcodeIdStrings.add( CHAINWAY_DEFAULT_SCANNER_ID );

		return barcodeIdStrings;
	}
	
	/**
	 * As we have the limitation that only one scanner can be active at any one time, this method registers the
	 * last enabled call with the singleton. If a different object calls enabled then the previously enabled
	 * scanner will be disabled.
	 * @param scanner the scanner that is being enabled;
	 * @author Ben Kennedy (NCVT73)
	 */
	public static void setEnabledState(String scannerId)
	{
		Logger.D(TAG, "setEnabledState");
		//If there is a different scanner enabled, disable it.
		if(enabledScanner != null && !enabledScanner.equals(scannerId))
		{
			Barcode scanner = factoryInstance.getScanner(enabledScanner);
			if(scanner != null) scanner.disable(null);
			else Logger.E(TAG, "Scanner could not be disabled as the object could not be found");
		}
		enabledScanner = scannerId;
	}

	private String getEnabledScanner()
	{
		return enabledScanner;
	}
	
	/**
	 * As we have the limitation that only one scanner can be active at any one time, this method deregisters the
	 * enabled scanner, as long as it is the enabled scanner calling the method. If this is the case then no scanner
	 * will be enabled.
	 * @param scanner the scanner that is being disabled;
	 * @author Ben Kennedy (NCVT73)
	 */
	public static void setDisabledState(String scannerId)
	{
		Logger.D(TAG, "setDisabledState");
		if(scannerId.equals(enabledScanner))
		{
			//factoryInstance.getScanner(scannerId).disable(null);
			enabledScanner = null;
			factoryInstance.setLastKeyAction(KeyEvent.ACTION_UP);
		}
		else
		{
			//Ignore, nothing needs doing as it was disabled before
		}
	}
	
	/**
	 * A Mutator method for the last key action. This saves whether the last trigger was a trigger down or a trigger
	 * up message
	 * @param action whether it was a KeyEvent.ACTION_UP or KeyEvent.ACTION_DOWN event.
	 */
	private void setLastKeyAction(int action)
	{
		lastKeyAction = action;
	}
	
	public boolean onKey(int keyCode, KeyEvent event)
	{
		Logger.D(
			TAG, 
			"Caught Trigger for the Scanner: code=" + String.valueOf(keyCode) + 
			" evt=" + event.toString() + 
			" scn="+ String.valueOf(enabledScanner));

		if(enabledScanner != null)
		{
			if (keyCode == KEYCODE_TRIGGER && ( (event.getAction() == KeyEvent.ACTION_DOWN) || (event.getAction() == KeyEvent.ACTION_UP) ) )
			{
				boolean isDown = (event.getAction() == KeyEvent.ACTION_DOWN);
				Logger.D(TAG, "Caught Trigger for the Scanner: " + isDown);
				if (lastKeyAction != event.getAction())
				{
					Barcode scanner = getScanner(enabledScanner);
					if(scanner == null) {
						return false;
					} 

				    if(isDown)
				    {				    	
				    	scanner.start(null);
				    }
				    else
				    {				    	
				    	scanner.stop(null);
				    }
				}
				if (isDown)	lastKeyAction = KeyEvent.ACTION_DOWN;
				else		lastKeyAction = KeyEvent.ACTION_UP;
			}
		}
		return false;
	}
	
	/**
	 * A Runnable class that sends a start EMDK scanner command (created from trigger presses)
	 * @author Ben Kennedy (NCVT73)
	 */
	private class StartScannerTask implements Runnable
	{
		@Override
		public void run()
		{
			Barcode scanner = getScanner(enabledScanner);
			if(scanner != null) scanner.start(null);
			else Logger.E(TAG, "Scanner could not be started as the object could not be found");
		}	
	}
	
	/**
	 * A Runnable class that sends a stop EMDK scanner command (created from trigger presses)
	 * @author Ben Kennedy (NCVT73)
	 */
	private class StopScannerTask implements Runnable
	{
		@Override
		public void run()
		{
			Barcode scanner = getScanner(enabledScanner);
			if(scanner != null) scanner.stop(null);
			else Logger.E(TAG, "Scanner could not be stopped as the object could not be found");
		}	
	}	
	
	public static boolean isPaused()
	{
		return factoryInstance.isPaused;
	}

	public static void setPaused(boolean isPaused)
	{
		factoryInstance.isPaused = isPaused;
	}
	
	public void onResume()
	{
		Logger.D(TAG, "onResume+");

		setPaused(false);

		if(enabledScanner != null)
		{
			getScanner(enabledScanner).onResume();
		}

		Logger.D(TAG, "onResume-");
	}

	public void onPause()
	{
		Logger.D(TAG, "onPause+");

		setPaused(true);
		if(enabledScanner != null)
		{
			getScanner(enabledScanner).onPause();			
		}

		Logger.D(TAG, "onPause-");
	}

	public void onStop()
	{
		Logger.D(TAG, "onStop+");

		if(enabledScanner != null)
		{
			getScanner(enabledScanner).onStop();
		}

		Logger.D(TAG, "onStop-");
	}

	public void onDestroy()
	{
		Logger.D(TAG, "onDestroy+");

		if(enabledScanner != null)
		{
			getScanner(enabledScanner).onDestroy();
		}

		Logger.D(TAG, "onDestroy-");
	}
	
	public void disableScannerOnNavigate()
	{
		if(enabledScanner != null)
		{
			getScanner(enabledScanner).disable(null);
		}
	}
	
}
