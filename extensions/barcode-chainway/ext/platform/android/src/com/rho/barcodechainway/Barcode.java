package com.rho.barcodechainway;

import com.rho.barcodechainway.BarcodeChainwayBase;
import com.rho.barcodechainway.IBarcodeChainway;
import com.rhomobile.rhodes.Logger;
import com.rhomobile.rhodes.api.IMethodResult;
import com.rhomobile.rhodes.api.MethodResult;

public abstract class Barcode extends BarcodeChainwayBase implements IBarcodeChainway
{
	protected static String LOGTAG = "BarcodeChaiway";
	protected String scannerId;

	public Barcode(String id)
	{
		super(id);
		this.scannerId = id;
	}

	@Override
	public void barcode_recognize(String imageFilePath, IMethodResult result)
	{
		Logger.D(LOGTAG, "Barcode recognize");
		BarcodeSingleton.barcode_recognize(imageFilePath, result);
	}
	
	@Override
	public void registerBluetoothStatus(IMethodResult result)
	{
		Logger.D(LOGTAG, "Barcode registerBluetoothStatus");
		result.setError("Bluetooth Scanners are unsupported on Android");
	}
	
	@Override
	public void commandRemoteScanner(String command, IMethodResult result)
	{
		Logger.D(LOGTAG, "Barcode commandRemoteScanner");
		result.setError("Bluetooth Scanners are not supported on Android");
	}

	public abstract void onResume();
	public abstract void onPause();
	public abstract void onStop();
	public abstract void onDestroy();

	/**
	 * Stores the following parameters in the propertyMap without causing any subclass side effects
	 * @param propertyName
	 * @param propertyValue
	 * @param result
	 */
	public void setPropertySuper(String propertyName, String propertyValue, IMethodResult result)
	{
		super.setProperty(propertyName, propertyValue, result);
	}
	
}