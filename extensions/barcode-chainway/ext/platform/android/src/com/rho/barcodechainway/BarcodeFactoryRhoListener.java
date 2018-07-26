package com.rho.barcodechainway;

import android.view.KeyEvent;

import com.rhomobile.rhodes.Logger;
import com.rhomobile.rhodes.RhodesActivity;
import com.rhomobile.rhodes.extmanager.AbstractRhoListener;
import com.rhomobile.rhodes.extmanager.IRhoExtManager;

import com.rhomobile.rhodes.extmanager.IRhoWebView;
import com.rhomobile.rhodes.webview.GoogleWebView;
import com.rhomobile.rhodes.extmanager.IRhoConfig;
import com.rhomobile.rhodes.webview.WebViewConfig;

public class BarcodeFactoryRhoListener extends AbstractRhoListener
{
	private static final String TAG = "BarcodeFactoryRhoListener";
	private static BarcodeFactory factory;	

	private BarcodeRhoExtension mBarcodeExt = new BarcodeRhoExtension();
	public BarcodeFactoryRhoListener() { }
	
	@Override
	public void onResume(RhodesActivity activity)
	{
		Logger.I(TAG, "BarcodeFactoryRhoListener onResume");		
		if(factory != null) factory.onResume();
		Logger.D(TAG, "BarcodeFactoryRhoListener onResume-Finish");
	}

	@Override
	public void onPause(RhodesActivity activity)
	{
		Logger.D(TAG, "onPause");
		if(factory != null) factory.onPause();
	}

	@Override
	public void onStop(RhodesActivity activity)
	{
		Logger.D(TAG, "onStop");
		if(factory != null) factory.onStop();
	}

	@Override
	public void onDestroy(RhodesActivity activity)
	{
		Logger.D(TAG, "onDestroy");
		if(factory != null) factory.onDestroy();
	}

	@Override
	public void onCreateApplication(IRhoExtManager extManager)
	{
		Logger.I(TAG, "BarcodeFactoryRhoListener onCreateApplication");
		extManager.startKeyEventUpdates(this);
		extManager.addRhoListener(this);
		extManager.registerExtension("BarcodeRhoExtension", mBarcodeExt);

		factory = new BarcodeFactory();
		BarcodeChainwayFactorySingleton.setInstance(factory);
	}

	@Override
	public boolean onKey(int keyCode, KeyEvent event)
	{
		if(factory != null) return factory.onKey(keyCode, event);
		return false;
	}
}
