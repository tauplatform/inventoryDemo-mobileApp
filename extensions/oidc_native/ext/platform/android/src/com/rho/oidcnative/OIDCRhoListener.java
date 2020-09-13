package com.rho.oidcnative;

import com.rhomobile.rhodes.extmanager.AbstractRhoListener;
import com.rhomobile.rhodes.extmanager.AbstractRhoExtension;
import com.rhomobile.rhodes.RhoRubySingleton;
import com.rhomobile.rhodes.Logger;
import com.rhomobile.rhodes.RhodesActivity;
import com.rhomobile.rhodes.extmanager.IRhoExtManager;


public class OIDCRhoListener extends AbstractRhoListener
{
    private static final String TAG = "OIDCRhoListener";

    private class Ext extends AbstractRhoExtension
    {
        private static final String TAG = "OIDCRhoListener::Ext";

        @Override
        public void onAppActivate(IRhoExtManager extManager, boolean bActivate) {
            Logger.I(TAG, "onAppActivate");

            final String token = "ifoundit";
            setRhoConnectClientOIDCToken( token );
        }

        private void setRhoConnectClientOIDCToken( final String token )
        {
            RhoRubySingleton.instance().executeInRubyThread(new RhoRubySingleton.RhoRunnable() {
                public void rhoRun() {
                    RhoRubySingleton.instance().executeRubyMethodWithJSON("Rho::RhoConnectClient", "setOIDCToken", "[\"" + token + "\"]");
                }
            });
        }
    }

    private final Ext mExt = new Ext();

    @Override
	public void onCreateApplication(IRhoExtManager extManager)
	{
		Logger.I(TAG, "OIDCRhoListener onCreateApplication");
        extManager.addRhoListener(this);
        extManager.registerExtension("OIDCExt", mExt);
	}
}