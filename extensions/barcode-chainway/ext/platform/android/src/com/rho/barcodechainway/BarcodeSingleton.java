package com.rho.barcodechainway;

import java.io.InputStream;
import java.util.Hashtable;
import java.util.List;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;

import com.rho.barcodechainway.BarcodeChainwaySingletonBase;
import com.rho.barcodechainway.IBarcodeChainwaySingleton;
import com.rhomobile.rhodes.Logger;
import com.rhomobile.rhodes.api.IMethodResult;
import com.rhomobile.rhodes.file.RhoFileApi;

public class BarcodeSingleton extends BarcodeChainwaySingletonBase implements IBarcodeChainwaySingleton
{
	private static String LOGTAG = "BarcodeSingleton";

	private static BarcodeFactory factory;
	
	public BarcodeSingleton(BarcodeFactory factory)
	{
		super(factory);
		BarcodeSingleton.factory = factory; 
		Logger.D(LOGTAG, "BarcodeSingleton Constructor");
	}

	public List<String> getIDs()
	{
		Logger.D(LOGTAG, "BarcodeSingleton getIDs");
		return factory.getIds();
	}

	@Override
	protected String getInitialDefaultID()
	{
		return getIDs().get(0);
	}

	@SuppressWarnings("unchecked")
	@Override
	public void enumerate(IMethodResult res)
	{
		Logger.D(LOGTAG, "BarcodeSingleton enumerate");
		List<String> barcodes = factory.enumerate();
		res.set((List<Object>)(List<?>) barcodes);
	}

	public static void barcode_recognize(String imageFilePath, IMethodResult result)
	{
		throw new java.lang.UnsupportedOperationException();
	}
}
