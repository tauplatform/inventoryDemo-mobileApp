package com.rho.barcodechainway;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import com.rhomobile.rhodes.api.IMethodResult;
import com.rhomobile.rhodes.api.RhoApiObject;

import com.rhomobile.rhodes.api.RhoApiPropertyBag; 

public class BarcodeChainwayBase extends RhoApiObject {

    private RhoApiPropertyBag mPropertyBag;
    public Map<String, String> getPropertiesMap() {
        return mPropertyBag.getPropertiesMap();
    }
    public BarcodeChainwayBase(String id) {
        super(id);

        mPropertyBag = new RhoApiPropertyBag(id);
    }

    public void getAutoEnter(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("autoEnter", result);
    }

    public static class getAutoEnterTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getAutoEnterTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getAutoEnter(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setAutoEnter(boolean autoEnter, IMethodResult result) {
                    
        setProperty("autoEnter", String.valueOf(autoEnter), result);
    }

    public static class setAutoEnterTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean autoEnter;
        private IMethodResult mResult;

        public setAutoEnterTask(IBarcodeChainway obj, 
                boolean autoEnter, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.autoEnter = autoEnter;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setAutoEnter(
                    autoEnter, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getAutoTab(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("autoTab", result);
    }

    public static class getAutoTabTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getAutoTabTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getAutoTab(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setAutoTab(boolean autoTab, IMethodResult result) {
                    
        setProperty("autoTab", String.valueOf(autoTab), result);
    }

    public static class setAutoTabTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean autoTab;
        private IMethodResult mResult;

        public setAutoTabTask(IBarcodeChainway obj, 
                boolean autoTab, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.autoTab = autoTab;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setAutoTab(
                    autoTab, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getHapticFeedback(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("hapticFeedback", result);
    }

    public static class getHapticFeedbackTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getHapticFeedbackTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getHapticFeedback(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setHapticFeedback(boolean hapticFeedback, IMethodResult result) {
                    
        setProperty("hapticFeedback", String.valueOf(hapticFeedback), result);
    }

    public static class setHapticFeedbackTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean hapticFeedback;
        private IMethodResult mResult;

        public setHapticFeedbackTask(IBarcodeChainway obj, 
                boolean hapticFeedback, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.hapticFeedback = hapticFeedback;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setHapticFeedback(
                    hapticFeedback, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getLinearSecurityLevel(IMethodResult result) {
                     
        getProperty("linearSecurityLevel", result);
    }

    public static class getLinearSecurityLevelTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getLinearSecurityLevelTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getLinearSecurityLevel(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setLinearSecurityLevel(String linearSecurityLevel, IMethodResult result) {
                    
        setProperty("linearSecurityLevel", String.valueOf(linearSecurityLevel), result);
    }

    public static class setLinearSecurityLevelTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String linearSecurityLevel;
        private IMethodResult mResult;

        public setLinearSecurityLevelTask(IBarcodeChainway obj, 
                String linearSecurityLevel, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.linearSecurityLevel = linearSecurityLevel;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setLinearSecurityLevel(
                    linearSecurityLevel, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getScanTimeout(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("scanTimeout", result);
    }

    public static class getScanTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getScanTimeoutTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getScanTimeout(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setScanTimeout(int scanTimeout, IMethodResult result) {
                    
        setProperty("scanTimeout", String.valueOf(scanTimeout), result);
    }

    public static class setScanTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int scanTimeout;
        private IMethodResult mResult;

        public setScanTimeoutTask(IBarcodeChainway obj, 
                int scanTimeout, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.scanTimeout = scanTimeout;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setScanTimeout(
                    scanTimeout, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRasterMode(IMethodResult result) {
                     
        getProperty("rasterMode", result);
    }

    public static class getRasterModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRasterModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRasterMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRasterMode(String rasterMode, IMethodResult result) {
                    
        setProperty("rasterMode", String.valueOf(rasterMode), result);
    }

    public static class setRasterModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rasterMode;
        private IMethodResult mResult;

        public setRasterModeTask(IBarcodeChainway obj, 
                String rasterMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rasterMode = rasterMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRasterMode(
                    rasterMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRasterHeight(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("rasterHeight", result);
    }

    public static class getRasterHeightTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRasterHeightTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRasterHeight(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRasterHeight(int rasterHeight, IMethodResult result) {
                    
        setProperty("rasterHeight", String.valueOf(rasterHeight), result);
    }

    public static class setRasterHeightTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int rasterHeight;
        private IMethodResult mResult;

        public setRasterHeightTask(IBarcodeChainway obj, 
                int rasterHeight, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rasterHeight = rasterHeight;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRasterHeight(
                    rasterHeight, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getAimType(IMethodResult result) {
                     
        getProperty("aimType", result);
    }

    public static class getAimTypeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getAimTypeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getAimType(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setAimType(String aimType, IMethodResult result) {
                    
        setProperty("aimType", String.valueOf(aimType), result);
    }

    public static class setAimTypeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String aimType;
        private IMethodResult mResult;

        public setAimTypeTask(IBarcodeChainway obj, 
                String aimType, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.aimType = aimType;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setAimType(
                    aimType, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getTimedAimDuration(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("timedAimDuration", result);
    }

    public static class getTimedAimDurationTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getTimedAimDurationTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getTimedAimDuration(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setTimedAimDuration(int timedAimDuration, IMethodResult result) {
                    
        setProperty("timedAimDuration", String.valueOf(timedAimDuration), result);
    }

    public static class setTimedAimDurationTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int timedAimDuration;
        private IMethodResult mResult;

        public setTimedAimDurationTask(IBarcodeChainway obj, 
                int timedAimDuration, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.timedAimDuration = timedAimDuration;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setTimedAimDuration(
                    timedAimDuration, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getSameSymbolTimeout(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("sameSymbolTimeout", result);
    }

    public static class getSameSymbolTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getSameSymbolTimeoutTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getSameSymbolTimeout(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setSameSymbolTimeout(int sameSymbolTimeout, IMethodResult result) {
                    
        setProperty("sameSymbolTimeout", String.valueOf(sameSymbolTimeout), result);
    }

    public static class setSameSymbolTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int sameSymbolTimeout;
        private IMethodResult mResult;

        public setSameSymbolTimeoutTask(IBarcodeChainway obj, 
                int sameSymbolTimeout, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.sameSymbolTimeout = sameSymbolTimeout;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setSameSymbolTimeout(
                    sameSymbolTimeout, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDifferentSymbolTimeout(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("differentSymbolTimeout", result);
    }

    public static class getDifferentSymbolTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDifferentSymbolTimeoutTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDifferentSymbolTimeout(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDifferentSymbolTimeout(int differentSymbolTimeout, IMethodResult result) {
                    
        setProperty("differentSymbolTimeout", String.valueOf(differentSymbolTimeout), result);
    }

    public static class setDifferentSymbolTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int differentSymbolTimeout;
        private IMethodResult mResult;

        public setDifferentSymbolTimeoutTask(IBarcodeChainway obj, 
                int differentSymbolTimeout, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.differentSymbolTimeout = differentSymbolTimeout;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDifferentSymbolTimeout(
                    differentSymbolTimeout, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getAimMode(IMethodResult result) {
                     
        getProperty("aimMode", result);
    }

    public static class getAimModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getAimModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getAimMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setAimMode(String aimMode, IMethodResult result) {
                    
        setProperty("aimMode", String.valueOf(aimMode), result);
    }

    public static class setAimModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String aimMode;
        private IMethodResult mResult;

        public setAimModeTask(IBarcodeChainway obj, 
                String aimMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.aimMode = aimMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setAimMode(
                    aimMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getPicklistMode(IMethodResult result) {
                     
        getProperty("picklistMode", result);
    }

    public static class getPicklistModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getPicklistModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getPicklistMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setPicklistMode(String picklistMode, IMethodResult result) {
                    
        setProperty("picklistMode", String.valueOf(picklistMode), result);
    }

    public static class setPicklistModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String picklistMode;
        private IMethodResult mResult;

        public setPicklistModeTask(IBarcodeChainway obj, 
                String picklistMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.picklistMode = picklistMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setPicklistMode(
                    picklistMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getViewfinderMode(IMethodResult result) {
                     
        getProperty("viewfinderMode", result);
    }

    public static class getViewfinderModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getViewfinderModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getViewfinderMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setViewfinderMode(String viewfinderMode, IMethodResult result) {
                    
        setProperty("viewfinderMode", String.valueOf(viewfinderMode), result);
    }

    public static class setViewfinderModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String viewfinderMode;
        private IMethodResult mResult;

        public setViewfinderModeTask(IBarcodeChainway obj, 
                String viewfinderMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.viewfinderMode = viewfinderMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setViewfinderMode(
                    viewfinderMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getViewfinderX(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("viewfinderX", result);
    }

    public static class getViewfinderXTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getViewfinderXTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getViewfinderX(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setViewfinderX(int viewfinderX, IMethodResult result) {
                    
        setProperty("viewfinderX", String.valueOf(viewfinderX), result);
    }

    public static class setViewfinderXTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int viewfinderX;
        private IMethodResult mResult;

        public setViewfinderXTask(IBarcodeChainway obj, 
                int viewfinderX, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.viewfinderX = viewfinderX;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setViewfinderX(
                    viewfinderX, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getViewfinderY(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("viewfinderY", result);
    }

    public static class getViewfinderYTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getViewfinderYTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getViewfinderY(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setViewfinderY(int viewfinderY, IMethodResult result) {
                    
        setProperty("viewfinderY", String.valueOf(viewfinderY), result);
    }

    public static class setViewfinderYTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int viewfinderY;
        private IMethodResult mResult;

        public setViewfinderYTask(IBarcodeChainway obj, 
                int viewfinderY, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.viewfinderY = viewfinderY;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setViewfinderY(
                    viewfinderY, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getViewfinderWidth(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("viewfinderWidth", result);
    }

    public static class getViewfinderWidthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getViewfinderWidthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getViewfinderWidth(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setViewfinderWidth(int viewfinderWidth, IMethodResult result) {
                    
        setProperty("viewfinderWidth", String.valueOf(viewfinderWidth), result);
    }

    public static class setViewfinderWidthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int viewfinderWidth;
        private IMethodResult mResult;

        public setViewfinderWidthTask(IBarcodeChainway obj, 
                int viewfinderWidth, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.viewfinderWidth = viewfinderWidth;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setViewfinderWidth(
                    viewfinderWidth, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getViewfinderHeight(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("viewfinderHeight", result);
    }

    public static class getViewfinderHeightTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getViewfinderHeightTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getViewfinderHeight(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setViewfinderHeight(int viewfinderHeight, IMethodResult result) {
                    
        setProperty("viewfinderHeight", String.valueOf(viewfinderHeight), result);
    }

    public static class setViewfinderHeightTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int viewfinderHeight;
        private IMethodResult mResult;

        public setViewfinderHeightTask(IBarcodeChainway obj, 
                int viewfinderHeight, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.viewfinderHeight = viewfinderHeight;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setViewfinderHeight(
                    viewfinderHeight, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getViewfinderFeedback(IMethodResult result) {
                     
        getProperty("viewfinderFeedback", result);
    }

    public static class getViewfinderFeedbackTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getViewfinderFeedbackTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getViewfinderFeedback(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setViewfinderFeedback(String viewfinderFeedback, IMethodResult result) {
                    
        setProperty("viewfinderFeedback", String.valueOf(viewfinderFeedback), result);
    }

    public static class setViewfinderFeedbackTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String viewfinderFeedback;
        private IMethodResult mResult;

        public setViewfinderFeedbackTask(IBarcodeChainway obj, 
                String viewfinderFeedback, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.viewfinderFeedback = viewfinderFeedback;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setViewfinderFeedback(
                    viewfinderFeedback, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getViewfinderFeedbackTime(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("viewfinderFeedbackTime", result);
    }

    public static class getViewfinderFeedbackTimeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getViewfinderFeedbackTimeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getViewfinderFeedbackTime(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setViewfinderFeedbackTime(int viewfinderFeedbackTime, IMethodResult result) {
                    
        setProperty("viewfinderFeedbackTime", String.valueOf(viewfinderFeedbackTime), result);
    }

    public static class setViewfinderFeedbackTimeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int viewfinderFeedbackTime;
        private IMethodResult mResult;

        public setViewfinderFeedbackTimeTask(IBarcodeChainway obj, 
                int viewfinderFeedbackTime, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.viewfinderFeedbackTime = viewfinderFeedbackTime;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setViewfinderFeedbackTime(
                    viewfinderFeedbackTime, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getFocusMode(IMethodResult result) {
                     
        getProperty("focusMode", result);
    }

    public static class getFocusModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getFocusModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getFocusMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setFocusMode(String focusMode, IMethodResult result) {
                    
        setProperty("focusMode", String.valueOf(focusMode), result);
    }

    public static class setFocusModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String focusMode;
        private IMethodResult mResult;

        public setFocusModeTask(IBarcodeChainway obj, 
                String focusMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.focusMode = focusMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setFocusMode(
                    focusMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getIlluminationMode(IMethodResult result) {
                     
        getProperty("illuminationMode", result);
    }

    public static class getIlluminationModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getIlluminationModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getIlluminationMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setIlluminationMode(String illuminationMode, IMethodResult result) {
                    
        setProperty("illuminationMode", String.valueOf(illuminationMode), result);
    }

    public static class setIlluminationModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String illuminationMode;
        private IMethodResult mResult;

        public setIlluminationModeTask(IBarcodeChainway obj, 
                String illuminationMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.illuminationMode = illuminationMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setIlluminationMode(
                    illuminationMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDpmMode(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("dpmMode", result);
    }

    public static class getDpmModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDpmModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDpmMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDpmMode(boolean dpmMode, IMethodResult result) {
                    
        setProperty("dpmMode", String.valueOf(dpmMode), result);
    }

    public static class setDpmModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean dpmMode;
        private IMethodResult mResult;

        public setDpmModeTask(IBarcodeChainway obj, 
                boolean dpmMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.dpmMode = dpmMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDpmMode(
                    dpmMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getInverse1dMode(IMethodResult result) {
                     
        getProperty("inverse1dMode", result);
    }

    public static class getInverse1dModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getInverse1dModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getInverse1dMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setInverse1dMode(String inverse1dMode, IMethodResult result) {
                    
        setProperty("inverse1dMode", String.valueOf(inverse1dMode), result);
    }

    public static class setInverse1dModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String inverse1dMode;
        private IMethodResult mResult;

        public setInverse1dModeTask(IBarcodeChainway obj, 
                String inverse1dMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.inverse1dMode = inverse1dMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setInverse1dMode(
                    inverse1dMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getPoorQuality1dMode(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("poorQuality1dMode", result);
    }

    public static class getPoorQuality1dModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getPoorQuality1dModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getPoorQuality1dMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setPoorQuality1dMode(boolean poorQuality1dMode, IMethodResult result) {
                    
        setProperty("poorQuality1dMode", String.valueOf(poorQuality1dMode), result);
    }

    public static class setPoorQuality1dModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean poorQuality1dMode;
        private IMethodResult mResult;

        public setPoorQuality1dModeTask(IBarcodeChainway obj, 
                boolean poorQuality1dMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.poorQuality1dMode = poorQuality1dMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setPoorQuality1dMode(
                    poorQuality1dMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getBeamWidth(IMethodResult result) {
                     
        getProperty("beamWidth", result);
    }

    public static class getBeamWidthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getBeamWidthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getBeamWidth(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setBeamWidth(String beamWidth, IMethodResult result) {
                    
        setProperty("beamWidth", String.valueOf(beamWidth), result);
    }

    public static class setBeamWidthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String beamWidth;
        private IMethodResult mResult;

        public setBeamWidthTask(IBarcodeChainway obj, 
                String beamWidth, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.beamWidth = beamWidth;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setBeamWidth(
                    beamWidth, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDbpMode(IMethodResult result) {
                     
        getProperty("dbpMode", result);
    }

    public static class getDbpModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDbpModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDbpMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDbpMode(String dbpMode, IMethodResult result) {
                    
        setProperty("dbpMode", String.valueOf(dbpMode), result);
    }

    public static class setDbpModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String dbpMode;
        private IMethodResult mResult;

        public setDbpModeTask(IBarcodeChainway obj, 
                String dbpMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.dbpMode = dbpMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDbpMode(
                    dbpMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getKlasseEins(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("klasseEins", result);
    }

    public static class getKlasseEinsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getKlasseEinsTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getKlasseEins(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setKlasseEins(boolean klasseEins, IMethodResult result) {
                    
        setProperty("klasseEins", String.valueOf(klasseEins), result);
    }

    public static class setKlasseEinsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean klasseEins;
        private IMethodResult mResult;

        public setKlasseEinsTask(IBarcodeChainway obj, 
                boolean klasseEins, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.klasseEins = klasseEins;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setKlasseEins(
                    klasseEins, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getAdaptiveScanning(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("adaptiveScanning", result);
    }

    public static class getAdaptiveScanningTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getAdaptiveScanningTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getAdaptiveScanning(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setAdaptiveScanning(boolean adaptiveScanning, IMethodResult result) {
                    
        setProperty("adaptiveScanning", String.valueOf(adaptiveScanning), result);
    }

    public static class setAdaptiveScanningTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean adaptiveScanning;
        private IMethodResult mResult;

        public setAdaptiveScanningTask(IBarcodeChainway obj, 
                boolean adaptiveScanning, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.adaptiveScanning = adaptiveScanning;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setAdaptiveScanning(
                    adaptiveScanning, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getBidirectionalRedundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("bidirectionalRedundancy", result);
    }

    public static class getBidirectionalRedundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getBidirectionalRedundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getBidirectionalRedundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setBidirectionalRedundancy(boolean bidirectionalRedundancy, IMethodResult result) {
                    
        setProperty("bidirectionalRedundancy", String.valueOf(bidirectionalRedundancy), result);
    }

    public static class setBidirectionalRedundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean bidirectionalRedundancy;
        private IMethodResult mResult;

        public setBidirectionalRedundancyTask(IBarcodeChainway obj, 
                boolean bidirectionalRedundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.bidirectionalRedundancy = bidirectionalRedundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setBidirectionalRedundancy(
                    bidirectionalRedundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getBarcodeDataFormat(IMethodResult result) {
                     
        getProperty("barcodeDataFormat", result);
    }

    public static class getBarcodeDataFormatTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getBarcodeDataFormatTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getBarcodeDataFormat(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setBarcodeDataFormat(String barcodeDataFormat, IMethodResult result) {
                    
        setProperty("barcodeDataFormat", String.valueOf(barcodeDataFormat), result);
    }

    public static class setBarcodeDataFormatTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String barcodeDataFormat;
        private IMethodResult mResult;

        public setBarcodeDataFormatTask(IBarcodeChainway obj, 
                String barcodeDataFormat, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.barcodeDataFormat = barcodeDataFormat;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setBarcodeDataFormat(
                    barcodeDataFormat, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDataBufferSize(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("dataBufferSize", result);
    }

    public static class getDataBufferSizeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDataBufferSizeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDataBufferSize(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDataBufferSize(int dataBufferSize, IMethodResult result) {
                    
        setProperty("dataBufferSize", String.valueOf(dataBufferSize), result);
    }

    public static class setDataBufferSizeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int dataBufferSize;
        private IMethodResult mResult;

        public setDataBufferSizeTask(IBarcodeChainway obj, 
                int dataBufferSize, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.dataBufferSize = dataBufferSize;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDataBufferSize(
                    dataBufferSize, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getConnectionIdleTimeout(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("connectionIdleTimeout", result);
    }

    public static class getConnectionIdleTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getConnectionIdleTimeoutTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getConnectionIdleTimeout(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setConnectionIdleTimeout(int connectionIdleTimeout, IMethodResult result) {
                    
        setProperty("connectionIdleTimeout", String.valueOf(connectionIdleTimeout), result);
    }

    public static class setConnectionIdleTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int connectionIdleTimeout;
        private IMethodResult mResult;

        public setConnectionIdleTimeoutTask(IBarcodeChainway obj, 
                int connectionIdleTimeout, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.connectionIdleTimeout = connectionIdleTimeout;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setConnectionIdleTimeout(
                    connectionIdleTimeout, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDisconnectBtOnDisable(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("disconnectBtOnDisable", result);
    }

    public static class getDisconnectBtOnDisableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDisconnectBtOnDisableTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDisconnectBtOnDisable(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDisconnectBtOnDisable(boolean disconnectBtOnDisable, IMethodResult result) {
                    
        setProperty("disconnectBtOnDisable", String.valueOf(disconnectBtOnDisable), result);
    }

    public static class setDisconnectBtOnDisableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean disconnectBtOnDisable;
        private IMethodResult mResult;

        public setDisconnectBtOnDisableTask(IBarcodeChainway obj, 
                boolean disconnectBtOnDisable, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.disconnectBtOnDisable = disconnectBtOnDisable;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDisconnectBtOnDisable(
                    disconnectBtOnDisable, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDisplayBtAddressBarcodeOnEnable(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("displayBtAddressBarcodeOnEnable", result);
    }

    public static class getDisplayBtAddressBarcodeOnEnableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDisplayBtAddressBarcodeOnEnableTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDisplayBtAddressBarcodeOnEnable(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDisplayBtAddressBarcodeOnEnable(boolean displayBtAddressBarcodeOnEnable, IMethodResult result) {
                    
        setProperty("displayBtAddressBarcodeOnEnable", String.valueOf(displayBtAddressBarcodeOnEnable), result);
    }

    public static class setDisplayBtAddressBarcodeOnEnableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean displayBtAddressBarcodeOnEnable;
        private IMethodResult mResult;

        public setDisplayBtAddressBarcodeOnEnableTask(IBarcodeChainway obj, 
                boolean displayBtAddressBarcodeOnEnable, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.displayBtAddressBarcodeOnEnable = displayBtAddressBarcodeOnEnable;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDisplayBtAddressBarcodeOnEnable(
                    displayBtAddressBarcodeOnEnable, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getEnableTimeout(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("enableTimeout", result);
    }

    public static class getEnableTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getEnableTimeoutTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getEnableTimeout(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setEnableTimeout(int enableTimeout, IMethodResult result) {
                    
        setProperty("enableTimeout", String.valueOf(enableTimeout), result);
    }

    public static class setEnableTimeoutTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int enableTimeout;
        private IMethodResult mResult;

        public setEnableTimeoutTask(IBarcodeChainway obj, 
                int enableTimeout, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.enableTimeout = enableTimeout;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setEnableTimeout(
                    enableTimeout, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getFriendlyName(IMethodResult result) {
                     
        getProperty("friendlyName", result);
    }

    public static class getFriendlyNameTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getFriendlyNameTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getFriendlyName(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getLcdMode(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("lcdMode", result);
    }

    public static class getLcdModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getLcdModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getLcdMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setLcdMode(boolean lcdMode, IMethodResult result) {
                    
        setProperty("lcdMode", String.valueOf(lcdMode), result);
    }

    public static class setLcdModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean lcdMode;
        private IMethodResult mResult;

        public setLcdModeTask(IBarcodeChainway obj, 
                boolean lcdMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.lcdMode = lcdMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setLcdMode(
                    lcdMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getLowBatteryScan(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("lowBatteryScan", result);
    }

    public static class getLowBatteryScanTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getLowBatteryScanTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getLowBatteryScan(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setLowBatteryScan(boolean lowBatteryScan, IMethodResult result) {
                    
        setProperty("lowBatteryScan", String.valueOf(lowBatteryScan), result);
    }

    public static class setLowBatteryScanTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean lowBatteryScan;
        private IMethodResult mResult;

        public setLowBatteryScanTask(IBarcodeChainway obj, 
                boolean lowBatteryScan, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.lowBatteryScan = lowBatteryScan;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setLowBatteryScan(
                    lowBatteryScan, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getTriggerConnected(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("triggerConnected", result);
    }

    public static class getTriggerConnectedTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getTriggerConnectedTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getTriggerConnected(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setTriggerConnected(boolean triggerConnected, IMethodResult result) {
                    
        setProperty("triggerConnected", String.valueOf(triggerConnected), result);
    }

    public static class setTriggerConnectedTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean triggerConnected;
        private IMethodResult mResult;

        public setTriggerConnectedTask(IBarcodeChainway obj, 
                boolean triggerConnected, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.triggerConnected = triggerConnected;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setTriggerConnected(
                    triggerConnected, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDisableScannerDuringNavigate(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("disableScannerDuringNavigate", result);
    }

    public static class getDisableScannerDuringNavigateTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDisableScannerDuringNavigateTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDisableScannerDuringNavigate(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDisableScannerDuringNavigate(boolean disableScannerDuringNavigate, IMethodResult result) {
                    
        setProperty("disableScannerDuringNavigate", String.valueOf(disableScannerDuringNavigate), result);
    }

    public static class setDisableScannerDuringNavigateTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean disableScannerDuringNavigate;
        private IMethodResult mResult;

        public setDisableScannerDuringNavigateTask(IBarcodeChainway obj, 
                boolean disableScannerDuringNavigate, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.disableScannerDuringNavigate = disableScannerDuringNavigate;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDisableScannerDuringNavigate(
                    disableScannerDuringNavigate, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDecodeVolume(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("decodeVolume", result);
    }

    public static class getDecodeVolumeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDecodeVolumeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDecodeVolume(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDecodeVolume(int decodeVolume, IMethodResult result) {
                    
        setProperty("decodeVolume", String.valueOf(decodeVolume), result);
    }

    public static class setDecodeVolumeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int decodeVolume;
        private IMethodResult mResult;

        public setDecodeVolumeTask(IBarcodeChainway obj, 
                int decodeVolume, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.decodeVolume = decodeVolume;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDecodeVolume(
                    decodeVolume, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDecodeDuration(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("decodeDuration", result);
    }

    public static class getDecodeDurationTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDecodeDurationTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDecodeDuration(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDecodeDuration(int decodeDuration, IMethodResult result) {
                    
        setProperty("decodeDuration", String.valueOf(decodeDuration), result);
    }

    public static class setDecodeDurationTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int decodeDuration;
        private IMethodResult mResult;

        public setDecodeDurationTask(IBarcodeChainway obj, 
                int decodeDuration, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.decodeDuration = decodeDuration;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDecodeDuration(
                    decodeDuration, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDecodeFrequency(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("decodeFrequency", result);
    }

    public static class getDecodeFrequencyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDecodeFrequencyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDecodeFrequency(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDecodeFrequency(int decodeFrequency, IMethodResult result) {
                    
        setProperty("decodeFrequency", String.valueOf(decodeFrequency), result);
    }

    public static class setDecodeFrequencyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int decodeFrequency;
        private IMethodResult mResult;

        public setDecodeFrequencyTask(IBarcodeChainway obj, 
                int decodeFrequency, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.decodeFrequency = decodeFrequency;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDecodeFrequency(
                    decodeFrequency, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getInvalidDecodeFrequency(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("invalidDecodeFrequency", result);
    }

    public static class getInvalidDecodeFrequencyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getInvalidDecodeFrequencyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getInvalidDecodeFrequency(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setInvalidDecodeFrequency(int invalidDecodeFrequency, IMethodResult result) {
                    
        setProperty("invalidDecodeFrequency", String.valueOf(invalidDecodeFrequency), result);
    }

    public static class setInvalidDecodeFrequencyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int invalidDecodeFrequency;
        private IMethodResult mResult;

        public setInvalidDecodeFrequencyTask(IBarcodeChainway obj, 
                int invalidDecodeFrequency, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.invalidDecodeFrequency = invalidDecodeFrequency;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setInvalidDecodeFrequency(
                    invalidDecodeFrequency, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDecodeSound(IMethodResult result) {
                     
        getProperty("decodeSound", result);
    }

    public static class getDecodeSoundTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDecodeSoundTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDecodeSound(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDecodeSound(String decodeSound, IMethodResult result) {
                    
        setProperty("decodeSound", String.valueOf(decodeSound), result);
    }

    public static class setDecodeSoundTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String decodeSound;
        private IMethodResult mResult;

        public setDecodeSoundTask(IBarcodeChainway obj, 
                String decodeSound, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.decodeSound = decodeSound;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDecodeSound(
                    decodeSound, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getInvalidDecodeSound(IMethodResult result) {
                     
        getProperty("invalidDecodeSound", result);
    }

    public static class getInvalidDecodeSoundTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getInvalidDecodeSoundTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getInvalidDecodeSound(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setInvalidDecodeSound(String invalidDecodeSound, IMethodResult result) {
                    
        setProperty("invalidDecodeSound", String.valueOf(invalidDecodeSound), result);
    }

    public static class setInvalidDecodeSoundTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String invalidDecodeSound;
        private IMethodResult mResult;

        public setInvalidDecodeSoundTask(IBarcodeChainway obj, 
                String invalidDecodeSound, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.invalidDecodeSound = invalidDecodeSound;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setInvalidDecodeSound(
                    invalidDecodeSound, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getScannerType(IMethodResult result) {
                     
        getProperty("scannerType", result);
    }

    public static class getScannerTypeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getScannerTypeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getScannerType(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getAllDecoders(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("allDecoders", result);
    }

    public static class getAllDecodersTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getAllDecodersTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getAllDecoders(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setAllDecoders(boolean allDecoders, IMethodResult result) {
                    
        setProperty("allDecoders", String.valueOf(allDecoders), result);
    }

    public static class setAllDecodersTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean allDecoders;
        private IMethodResult mResult;

        public setAllDecodersTask(IBarcodeChainway obj, 
                boolean allDecoders, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.allDecoders = allDecoders;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setAllDecoders(
                    allDecoders, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getAztec(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("aztec", result);
    }

    public static class getAztecTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getAztecTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getAztec(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setAztec(boolean aztec, IMethodResult result) {
                    
        setProperty("aztec", String.valueOf(aztec), result);
    }

    public static class setAztecTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean aztec;
        private IMethodResult mResult;

        public setAztecTask(IBarcodeChainway obj, 
                boolean aztec, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.aztec = aztec;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setAztec(
                    aztec, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getChinese2of5(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("chinese2of5", result);
    }

    public static class getChinese2of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getChinese2of5Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getChinese2of5(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setChinese2of5(boolean chinese2of5, IMethodResult result) {
                    
        setProperty("chinese2of5", String.valueOf(chinese2of5), result);
    }

    public static class setChinese2of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean chinese2of5;
        private IMethodResult mResult;

        public setChinese2of5Task(IBarcodeChainway obj, 
                boolean chinese2of5, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.chinese2of5 = chinese2of5;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setChinese2of5(
                    chinese2of5, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCodabar(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("codabar", result);
    }

    public static class getCodabarTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCodabarTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCodabar(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCodabar(boolean codabar, IMethodResult result) {
                    
        setProperty("codabar", String.valueOf(codabar), result);
    }

    public static class setCodabarTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean codabar;
        private IMethodResult mResult;

        public setCodabarTask(IBarcodeChainway obj, 
                boolean codabar, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.codabar = codabar;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCodabar(
                    codabar, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCodabarClsiEditing(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("codabarClsiEditing", result);
    }

    public static class getCodabarClsiEditingTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCodabarClsiEditingTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCodabarClsiEditing(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCodabarClsiEditing(boolean codabarClsiEditing, IMethodResult result) {
                    
        setProperty("codabarClsiEditing", String.valueOf(codabarClsiEditing), result);
    }

    public static class setCodabarClsiEditingTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean codabarClsiEditing;
        private IMethodResult mResult;

        public setCodabarClsiEditingTask(IBarcodeChainway obj, 
                boolean codabarClsiEditing, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.codabarClsiEditing = codabarClsiEditing;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCodabarClsiEditing(
                    codabarClsiEditing, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCodabarMaxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("codabarMaxLength", result);
    }

    public static class getCodabarMaxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCodabarMaxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCodabarMaxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCodabarMaxLength(int codabarMaxLength, IMethodResult result) {
                    
        setProperty("codabarMaxLength", String.valueOf(codabarMaxLength), result);
    }

    public static class setCodabarMaxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int codabarMaxLength;
        private IMethodResult mResult;

        public setCodabarMaxLengthTask(IBarcodeChainway obj, 
                int codabarMaxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.codabarMaxLength = codabarMaxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCodabarMaxLength(
                    codabarMaxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCodabarMinLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("codabarMinLength", result);
    }

    public static class getCodabarMinLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCodabarMinLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCodabarMinLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCodabarMinLength(int codabarMinLength, IMethodResult result) {
                    
        setProperty("codabarMinLength", String.valueOf(codabarMinLength), result);
    }

    public static class setCodabarMinLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int codabarMinLength;
        private IMethodResult mResult;

        public setCodabarMinLengthTask(IBarcodeChainway obj, 
                int codabarMinLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.codabarMinLength = codabarMinLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCodabarMinLength(
                    codabarMinLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCodabarNotisEditing(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("codabarNotisEditing", result);
    }

    public static class getCodabarNotisEditingTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCodabarNotisEditingTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCodabarNotisEditing(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCodabarNotisEditing(boolean codabarNotisEditing, IMethodResult result) {
                    
        setProperty("codabarNotisEditing", String.valueOf(codabarNotisEditing), result);
    }

    public static class setCodabarNotisEditingTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean codabarNotisEditing;
        private IMethodResult mResult;

        public setCodabarNotisEditingTask(IBarcodeChainway obj, 
                boolean codabarNotisEditing, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.codabarNotisEditing = codabarNotisEditing;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCodabarNotisEditing(
                    codabarNotisEditing, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCodabarRedundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("codabarRedundancy", result);
    }

    public static class getCodabarRedundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCodabarRedundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCodabarRedundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCodabarRedundancy(boolean codabarRedundancy, IMethodResult result) {
                    
        setProperty("codabarRedundancy", String.valueOf(codabarRedundancy), result);
    }

    public static class setCodabarRedundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean codabarRedundancy;
        private IMethodResult mResult;

        public setCodabarRedundancyTask(IBarcodeChainway obj, 
                boolean codabarRedundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.codabarRedundancy = codabarRedundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCodabarRedundancy(
                    codabarRedundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode11(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code11", result);
    }

    public static class getCode11Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode11Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode11(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode11(boolean code11, IMethodResult result) {
                    
        setProperty("code11", String.valueOf(code11), result);
    }

    public static class setCode11Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code11;
        private IMethodResult mResult;

        public setCode11Task(IBarcodeChainway obj, 
                boolean code11, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code11 = code11;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode11(
                    code11, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode11checkDigitCount(IMethodResult result) {
                     
        getProperty("code11checkDigitCount", result);
    }

    public static class getCode11checkDigitCountTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode11checkDigitCountTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode11checkDigitCount(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode11checkDigitCount(String code11checkDigitCount, IMethodResult result) {
                    
        setProperty("code11checkDigitCount", String.valueOf(code11checkDigitCount), result);
    }

    public static class setCode11checkDigitCountTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String code11checkDigitCount;
        private IMethodResult mResult;

        public setCode11checkDigitCountTask(IBarcodeChainway obj, 
                String code11checkDigitCount, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code11checkDigitCount = code11checkDigitCount;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode11checkDigitCount(
                    code11checkDigitCount, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode11maxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code11maxLength", result);
    }

    public static class getCode11maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode11maxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode11maxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode11maxLength(int code11maxLength, IMethodResult result) {
                    
        setProperty("code11maxLength", String.valueOf(code11maxLength), result);
    }

    public static class setCode11maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code11maxLength;
        private IMethodResult mResult;

        public setCode11maxLengthTask(IBarcodeChainway obj, 
                int code11maxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code11maxLength = code11maxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode11maxLength(
                    code11maxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode11minLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code11minLength", result);
    }

    public static class getCode11minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode11minLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode11minLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode11minLength(int code11minLength, IMethodResult result) {
                    
        setProperty("code11minLength", String.valueOf(code11minLength), result);
    }

    public static class setCode11minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code11minLength;
        private IMethodResult mResult;

        public setCode11minLengthTask(IBarcodeChainway obj, 
                int code11minLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code11minLength = code11minLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode11minLength(
                    code11minLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode11redundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code11redundancy", result);
    }

    public static class getCode11redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode11redundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode11redundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode11redundancy(boolean code11redundancy, IMethodResult result) {
                    
        setProperty("code11redundancy", String.valueOf(code11redundancy), result);
    }

    public static class setCode11redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code11redundancy;
        private IMethodResult mResult;

        public setCode11redundancyTask(IBarcodeChainway obj, 
                boolean code11redundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code11redundancy = code11redundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode11redundancy(
                    code11redundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode11reportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code11reportCheckDigit", result);
    }

    public static class getCode11reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode11reportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode11reportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode11reportCheckDigit(boolean code11reportCheckDigit, IMethodResult result) {
                    
        setProperty("code11reportCheckDigit", String.valueOf(code11reportCheckDigit), result);
    }

    public static class setCode11reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code11reportCheckDigit;
        private IMethodResult mResult;

        public setCode11reportCheckDigitTask(IBarcodeChainway obj, 
                boolean code11reportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code11reportCheckDigit = code11reportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode11reportCheckDigit(
                    code11reportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code128", result);
    }

    public static class getCode128Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128(boolean code128, IMethodResult result) {
                    
        setProperty("code128", String.valueOf(code128), result);
    }

    public static class setCode128Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code128;
        private IMethodResult mResult;

        public setCode128Task(IBarcodeChainway obj, 
                boolean code128, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128 = code128;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128(
                    code128, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128checkIsBtTable(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code128checkIsBtTable", result);
    }

    public static class getCode128checkIsBtTableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128checkIsBtTableTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128checkIsBtTable(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128checkIsBtTable(boolean code128checkIsBtTable, IMethodResult result) {
                    
        setProperty("code128checkIsBtTable", String.valueOf(code128checkIsBtTable), result);
    }

    public static class setCode128checkIsBtTableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code128checkIsBtTable;
        private IMethodResult mResult;

        public setCode128checkIsBtTableTask(IBarcodeChainway obj, 
                boolean code128checkIsBtTable, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128checkIsBtTable = code128checkIsBtTable;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128checkIsBtTable(
                    code128checkIsBtTable, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128ean128(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code128ean128", result);
    }

    public static class getCode128ean128Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128ean128Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128ean128(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128ean128(boolean code128ean128, IMethodResult result) {
                    
        setProperty("code128ean128", String.valueOf(code128ean128), result);
    }

    public static class setCode128ean128Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code128ean128;
        private IMethodResult mResult;

        public setCode128ean128Task(IBarcodeChainway obj, 
                boolean code128ean128, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128ean128 = code128ean128;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128ean128(
                    code128ean128, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128isbt128(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code128isbt128", result);
    }

    public static class getCode128isbt128Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128isbt128Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128isbt128(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128isbt128(boolean code128isbt128, IMethodResult result) {
                    
        setProperty("code128isbt128", String.valueOf(code128isbt128), result);
    }

    public static class setCode128isbt128Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code128isbt128;
        private IMethodResult mResult;

        public setCode128isbt128Task(IBarcodeChainway obj, 
                boolean code128isbt128, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128isbt128 = code128isbt128;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128isbt128(
                    code128isbt128, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128isbt128ConcatMode(IMethodResult result) {
                     
        getProperty("code128isbt128ConcatMode", result);
    }

    public static class getCode128isbt128ConcatModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128isbt128ConcatModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128isbt128ConcatMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128isbt128ConcatMode(String code128isbt128ConcatMode, IMethodResult result) {
                    
        setProperty("code128isbt128ConcatMode", String.valueOf(code128isbt128ConcatMode), result);
    }

    public static class setCode128isbt128ConcatModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String code128isbt128ConcatMode;
        private IMethodResult mResult;

        public setCode128isbt128ConcatModeTask(IBarcodeChainway obj, 
                String code128isbt128ConcatMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128isbt128ConcatMode = code128isbt128ConcatMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128isbt128ConcatMode(
                    code128isbt128ConcatMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128maxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code128maxLength", result);
    }

    public static class getCode128maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128maxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128maxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128maxLength(int code128maxLength, IMethodResult result) {
                    
        setProperty("code128maxLength", String.valueOf(code128maxLength), result);
    }

    public static class setCode128maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code128maxLength;
        private IMethodResult mResult;

        public setCode128maxLengthTask(IBarcodeChainway obj, 
                int code128maxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128maxLength = code128maxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128maxLength(
                    code128maxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128minLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code128minLength", result);
    }

    public static class getCode128minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128minLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128minLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128minLength(int code128minLength, IMethodResult result) {
                    
        setProperty("code128minLength", String.valueOf(code128minLength), result);
    }

    public static class setCode128minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code128minLength;
        private IMethodResult mResult;

        public setCode128minLengthTask(IBarcodeChainway obj, 
                int code128minLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128minLength = code128minLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128minLength(
                    code128minLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128other128(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code128other128", result);
    }

    public static class getCode128other128Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128other128Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128other128(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128other128(boolean code128other128, IMethodResult result) {
                    
        setProperty("code128other128", String.valueOf(code128other128), result);
    }

    public static class setCode128other128Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code128other128;
        private IMethodResult mResult;

        public setCode128other128Task(IBarcodeChainway obj, 
                boolean code128other128, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128other128 = code128other128;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128other128(
                    code128other128, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128redundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code128redundancy", result);
    }

    public static class getCode128redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128redundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128redundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128redundancy(boolean code128redundancy, IMethodResult result) {
                    
        setProperty("code128redundancy", String.valueOf(code128redundancy), result);
    }

    public static class setCode128redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code128redundancy;
        private IMethodResult mResult;

        public setCode128redundancyTask(IBarcodeChainway obj, 
                boolean code128redundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128redundancy = code128redundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128redundancy(
                    code128redundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode128securityLevel(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code128securityLevel", result);
    }

    public static class getCode128securityLevelTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode128securityLevelTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode128securityLevel(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode128securityLevel(int code128securityLevel, IMethodResult result) {
                    
        setProperty("code128securityLevel", String.valueOf(code128securityLevel), result);
    }

    public static class setCode128securityLevelTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code128securityLevel;
        private IMethodResult mResult;

        public setCode128securityLevelTask(IBarcodeChainway obj, 
                int code128securityLevel, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code128securityLevel = code128securityLevel;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode128securityLevel(
                    code128securityLevel, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCompositeAb(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("compositeAb", result);
    }

    public static class getCompositeAbTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCompositeAbTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCompositeAb(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCompositeAb(boolean compositeAb, IMethodResult result) {
                    
        setProperty("compositeAb", String.valueOf(compositeAb), result);
    }

    public static class setCompositeAbTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean compositeAb;
        private IMethodResult mResult;

        public setCompositeAbTask(IBarcodeChainway obj, 
                boolean compositeAb, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.compositeAb = compositeAb;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCompositeAb(
                    compositeAb, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCompositeAbUccLinkMode(IMethodResult result) {
                     
        getProperty("compositeAbUccLinkMode", result);
    }

    public static class getCompositeAbUccLinkModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCompositeAbUccLinkModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCompositeAbUccLinkMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCompositeAbUccLinkMode(String compositeAbUccLinkMode, IMethodResult result) {
                    
        setProperty("compositeAbUccLinkMode", String.valueOf(compositeAbUccLinkMode), result);
    }

    public static class setCompositeAbUccLinkModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String compositeAbUccLinkMode;
        private IMethodResult mResult;

        public setCompositeAbUccLinkModeTask(IBarcodeChainway obj, 
                String compositeAbUccLinkMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.compositeAbUccLinkMode = compositeAbUccLinkMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCompositeAbUccLinkMode(
                    compositeAbUccLinkMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCompositeAbUseUpcPreambleCheckDigitRules(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("compositeAbUseUpcPreambleCheckDigitRules", result);
    }

    public static class getCompositeAbUseUpcPreambleCheckDigitRulesTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCompositeAbUseUpcPreambleCheckDigitRulesTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCompositeAbUseUpcPreambleCheckDigitRules(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCompositeAbUseUpcPreambleCheckDigitRules(boolean compositeAbUseUpcPreambleCheckDigitRules, IMethodResult result) {
                    
        setProperty("compositeAbUseUpcPreambleCheckDigitRules", String.valueOf(compositeAbUseUpcPreambleCheckDigitRules), result);
    }

    public static class setCompositeAbUseUpcPreambleCheckDigitRulesTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean compositeAbUseUpcPreambleCheckDigitRules;
        private IMethodResult mResult;

        public setCompositeAbUseUpcPreambleCheckDigitRulesTask(IBarcodeChainway obj, 
                boolean compositeAbUseUpcPreambleCheckDigitRules, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.compositeAbUseUpcPreambleCheckDigitRules = compositeAbUseUpcPreambleCheckDigitRules;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCompositeAbUseUpcPreambleCheckDigitRules(
                    compositeAbUseUpcPreambleCheckDigitRules, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCompositeC(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("compositeC", result);
    }

    public static class getCompositeCTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCompositeCTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCompositeC(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCompositeC(boolean compositeC, IMethodResult result) {
                    
        setProperty("compositeC", String.valueOf(compositeC), result);
    }

    public static class setCompositeCTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean compositeC;
        private IMethodResult mResult;

        public setCompositeCTask(IBarcodeChainway obj, 
                boolean compositeC, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.compositeC = compositeC;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCompositeC(
                    compositeC, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code39", result);
    }

    public static class getCode39Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39(boolean code39, IMethodResult result) {
                    
        setProperty("code39", String.valueOf(code39), result);
    }

    public static class setCode39Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code39;
        private IMethodResult mResult;

        public setCode39Task(IBarcodeChainway obj, 
                boolean code39, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39 = code39;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39(
                    code39, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39code32Prefix(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code39code32Prefix", result);
    }

    public static class getCode39code32PrefixTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39code32PrefixTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39code32Prefix(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39code32Prefix(boolean code39code32Prefix, IMethodResult result) {
                    
        setProperty("code39code32Prefix", String.valueOf(code39code32Prefix), result);
    }

    public static class setCode39code32PrefixTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code39code32Prefix;
        private IMethodResult mResult;

        public setCode39code32PrefixTask(IBarcodeChainway obj, 
                boolean code39code32Prefix, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39code32Prefix = code39code32Prefix;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39code32Prefix(
                    code39code32Prefix, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39convertToCode32(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code39convertToCode32", result);
    }

    public static class getCode39convertToCode32Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39convertToCode32Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39convertToCode32(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39convertToCode32(boolean code39convertToCode32, IMethodResult result) {
                    
        setProperty("code39convertToCode32", String.valueOf(code39convertToCode32), result);
    }

    public static class setCode39convertToCode32Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code39convertToCode32;
        private IMethodResult mResult;

        public setCode39convertToCode32Task(IBarcodeChainway obj, 
                boolean code39convertToCode32, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39convertToCode32 = code39convertToCode32;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39convertToCode32(
                    code39convertToCode32, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39fullAscii(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code39fullAscii", result);
    }

    public static class getCode39fullAsciiTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39fullAsciiTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39fullAscii(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39fullAscii(boolean code39fullAscii, IMethodResult result) {
                    
        setProperty("code39fullAscii", String.valueOf(code39fullAscii), result);
    }

    public static class setCode39fullAsciiTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code39fullAscii;
        private IMethodResult mResult;

        public setCode39fullAsciiTask(IBarcodeChainway obj, 
                boolean code39fullAscii, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39fullAscii = code39fullAscii;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39fullAscii(
                    code39fullAscii, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39maxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code39maxLength", result);
    }

    public static class getCode39maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39maxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39maxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39maxLength(int code39maxLength, IMethodResult result) {
                    
        setProperty("code39maxLength", String.valueOf(code39maxLength), result);
    }

    public static class setCode39maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code39maxLength;
        private IMethodResult mResult;

        public setCode39maxLengthTask(IBarcodeChainway obj, 
                int code39maxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39maxLength = code39maxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39maxLength(
                    code39maxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39minLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code39minLength", result);
    }

    public static class getCode39minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39minLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39minLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39minLength(int code39minLength, IMethodResult result) {
                    
        setProperty("code39minLength", String.valueOf(code39minLength), result);
    }

    public static class setCode39minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code39minLength;
        private IMethodResult mResult;

        public setCode39minLengthTask(IBarcodeChainway obj, 
                int code39minLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39minLength = code39minLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39minLength(
                    code39minLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39redundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code39redundancy", result);
    }

    public static class getCode39redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39redundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39redundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39redundancy(boolean code39redundancy, IMethodResult result) {
                    
        setProperty("code39redundancy", String.valueOf(code39redundancy), result);
    }

    public static class setCode39redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code39redundancy;
        private IMethodResult mResult;

        public setCode39redundancyTask(IBarcodeChainway obj, 
                boolean code39redundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39redundancy = code39redundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39redundancy(
                    code39redundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39reportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code39reportCheckDigit", result);
    }

    public static class getCode39reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39reportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39reportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39reportCheckDigit(boolean code39reportCheckDigit, IMethodResult result) {
                    
        setProperty("code39reportCheckDigit", String.valueOf(code39reportCheckDigit), result);
    }

    public static class setCode39reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code39reportCheckDigit;
        private IMethodResult mResult;

        public setCode39reportCheckDigitTask(IBarcodeChainway obj, 
                boolean code39reportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39reportCheckDigit = code39reportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39reportCheckDigit(
                    code39reportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39securityLevel(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code39securityLevel", result);
    }

    public static class getCode39securityLevelTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39securityLevelTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39securityLevel(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39securityLevel(int code39securityLevel, IMethodResult result) {
                    
        setProperty("code39securityLevel", String.valueOf(code39securityLevel), result);
    }

    public static class setCode39securityLevelTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code39securityLevel;
        private IMethodResult mResult;

        public setCode39securityLevelTask(IBarcodeChainway obj, 
                int code39securityLevel, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39securityLevel = code39securityLevel;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39securityLevel(
                    code39securityLevel, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode39verifyCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code39verifyCheckDigit", result);
    }

    public static class getCode39verifyCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode39verifyCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode39verifyCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode39verifyCheckDigit(boolean code39verifyCheckDigit, IMethodResult result) {
                    
        setProperty("code39verifyCheckDigit", String.valueOf(code39verifyCheckDigit), result);
    }

    public static class setCode39verifyCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code39verifyCheckDigit;
        private IMethodResult mResult;

        public setCode39verifyCheckDigitTask(IBarcodeChainway obj, 
                boolean code39verifyCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code39verifyCheckDigit = code39verifyCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode39verifyCheckDigit(
                    code39verifyCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode93(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code93", result);
    }

    public static class getCode93Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode93Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode93(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode93(boolean code93, IMethodResult result) {
                    
        setProperty("code93", String.valueOf(code93), result);
    }

    public static class setCode93Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code93;
        private IMethodResult mResult;

        public setCode93Task(IBarcodeChainway obj, 
                boolean code93, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code93 = code93;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode93(
                    code93, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode93maxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code93maxLength", result);
    }

    public static class getCode93maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode93maxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode93maxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode93maxLength(int code93maxLength, IMethodResult result) {
                    
        setProperty("code93maxLength", String.valueOf(code93maxLength), result);
    }

    public static class setCode93maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code93maxLength;
        private IMethodResult mResult;

        public setCode93maxLengthTask(IBarcodeChainway obj, 
                int code93maxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code93maxLength = code93maxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode93maxLength(
                    code93maxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode93minLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("code93minLength", result);
    }

    public static class getCode93minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode93minLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode93minLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode93minLength(int code93minLength, IMethodResult result) {
                    
        setProperty("code93minLength", String.valueOf(code93minLength), result);
    }

    public static class setCode93minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int code93minLength;
        private IMethodResult mResult;

        public setCode93minLengthTask(IBarcodeChainway obj, 
                int code93minLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code93minLength = code93minLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode93minLength(
                    code93minLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCode93redundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("code93redundancy", result);
    }

    public static class getCode93redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCode93redundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCode93redundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCode93redundancy(boolean code93redundancy, IMethodResult result) {
                    
        setProperty("code93redundancy", String.valueOf(code93redundancy), result);
    }

    public static class setCode93redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean code93redundancy;
        private IMethodResult mResult;

        public setCode93redundancyTask(IBarcodeChainway obj, 
                boolean code93redundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.code93redundancy = code93redundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCode93redundancy(
                    code93redundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getD2of5(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("d2of5", result);
    }

    public static class getD2of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getD2of5Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getD2of5(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setD2of5(boolean d2of5, IMethodResult result) {
                    
        setProperty("d2of5", String.valueOf(d2of5), result);
    }

    public static class setD2of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean d2of5;
        private IMethodResult mResult;

        public setD2of5Task(IBarcodeChainway obj, 
                boolean d2of5, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.d2of5 = d2of5;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setD2of5(
                    d2of5, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getD2of5maxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("d2of5maxLength", result);
    }

    public static class getD2of5maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getD2of5maxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getD2of5maxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setD2of5maxLength(int d2of5maxLength, IMethodResult result) {
                    
        setProperty("d2of5maxLength", String.valueOf(d2of5maxLength), result);
    }

    public static class setD2of5maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int d2of5maxLength;
        private IMethodResult mResult;

        public setD2of5maxLengthTask(IBarcodeChainway obj, 
                int d2of5maxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.d2of5maxLength = d2of5maxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setD2of5maxLength(
                    d2of5maxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getD2of5minLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("d2of5minLength", result);
    }

    public static class getD2of5minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getD2of5minLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getD2of5minLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setD2of5minLength(int d2of5minLength, IMethodResult result) {
                    
        setProperty("d2of5minLength", String.valueOf(d2of5minLength), result);
    }

    public static class setD2of5minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int d2of5minLength;
        private IMethodResult mResult;

        public setD2of5minLengthTask(IBarcodeChainway obj, 
                int d2of5minLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.d2of5minLength = d2of5minLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setD2of5minLength(
                    d2of5minLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getD2of5redundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("d2of5redundancy", result);
    }

    public static class getD2of5redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getD2of5redundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getD2of5redundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setD2of5redundancy(boolean d2of5redundancy, IMethodResult result) {
                    
        setProperty("d2of5redundancy", String.valueOf(d2of5redundancy), result);
    }

    public static class setD2of5redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean d2of5redundancy;
        private IMethodResult mResult;

        public setD2of5redundancyTask(IBarcodeChainway obj, 
                boolean d2of5redundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.d2of5redundancy = d2of5redundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setD2of5redundancy(
                    d2of5redundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDatamatrix(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("datamatrix", result);
    }

    public static class getDatamatrixTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDatamatrixTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDatamatrix(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDatamatrix(boolean datamatrix, IMethodResult result) {
                    
        setProperty("datamatrix", String.valueOf(datamatrix), result);
    }

    public static class setDatamatrixTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean datamatrix;
        private IMethodResult mResult;

        public setDatamatrixTask(IBarcodeChainway obj, 
                boolean datamatrix, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.datamatrix = datamatrix;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDatamatrix(
                    datamatrix, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getEan13(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("ean13", result);
    }

    public static class getEan13Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getEan13Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getEan13(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setEan13(boolean ean13, IMethodResult result) {
                    
        setProperty("ean13", String.valueOf(ean13), result);
    }

    public static class setEan13Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean ean13;
        private IMethodResult mResult;

        public setEan13Task(IBarcodeChainway obj, 
                boolean ean13, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.ean13 = ean13;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setEan13(
                    ean13, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getEan8(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("ean8", result);
    }

    public static class getEan8Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getEan8Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getEan8(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setEan8(boolean ean8, IMethodResult result) {
                    
        setProperty("ean8", String.valueOf(ean8), result);
    }

    public static class setEan8Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean ean8;
        private IMethodResult mResult;

        public setEan8Task(IBarcodeChainway obj, 
                boolean ean8, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.ean8 = ean8;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setEan8(
                    ean8, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getEan8convertToEan13(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("ean8convertToEan13", result);
    }

    public static class getEan8convertToEan13Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getEan8convertToEan13Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getEan8convertToEan13(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setEan8convertToEan13(boolean ean8convertToEan13, IMethodResult result) {
                    
        setProperty("ean8convertToEan13", String.valueOf(ean8convertToEan13), result);
    }

    public static class setEan8convertToEan13Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean ean8convertToEan13;
        private IMethodResult mResult;

        public setEan8convertToEan13Task(IBarcodeChainway obj, 
                boolean ean8convertToEan13, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.ean8convertToEan13 = ean8convertToEan13;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setEan8convertToEan13(
                    ean8convertToEan13, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getI2of5(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("i2of5", result);
    }

    public static class getI2of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getI2of5Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getI2of5(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setI2of5(boolean i2of5, IMethodResult result) {
                    
        setProperty("i2of5", String.valueOf(i2of5), result);
    }

    public static class setI2of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean i2of5;
        private IMethodResult mResult;

        public setI2of5Task(IBarcodeChainway obj, 
                boolean i2of5, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.i2of5 = i2of5;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setI2of5(
                    i2of5, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getI2of5convertToEan13(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("i2of5convertToEan13", result);
    }

    public static class getI2of5convertToEan13Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getI2of5convertToEan13Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getI2of5convertToEan13(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setI2of5convertToEan13(boolean i2of5convertToEan13, IMethodResult result) {
                    
        setProperty("i2of5convertToEan13", String.valueOf(i2of5convertToEan13), result);
    }

    public static class setI2of5convertToEan13Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean i2of5convertToEan13;
        private IMethodResult mResult;

        public setI2of5convertToEan13Task(IBarcodeChainway obj, 
                boolean i2of5convertToEan13, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.i2of5convertToEan13 = i2of5convertToEan13;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setI2of5convertToEan13(
                    i2of5convertToEan13, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getI2of5maxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("i2of5maxLength", result);
    }

    public static class getI2of5maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getI2of5maxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getI2of5maxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setI2of5maxLength(int i2of5maxLength, IMethodResult result) {
                    
        setProperty("i2of5maxLength", String.valueOf(i2of5maxLength), result);
    }

    public static class setI2of5maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int i2of5maxLength;
        private IMethodResult mResult;

        public setI2of5maxLengthTask(IBarcodeChainway obj, 
                int i2of5maxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.i2of5maxLength = i2of5maxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setI2of5maxLength(
                    i2of5maxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getI2of5minLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("i2of5minLength", result);
    }

    public static class getI2of5minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getI2of5minLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getI2of5minLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setI2of5minLength(int i2of5minLength, IMethodResult result) {
                    
        setProperty("i2of5minLength", String.valueOf(i2of5minLength), result);
    }

    public static class setI2of5minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int i2of5minLength;
        private IMethodResult mResult;

        public setI2of5minLengthTask(IBarcodeChainway obj, 
                int i2of5minLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.i2of5minLength = i2of5minLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setI2of5minLength(
                    i2of5minLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getI2of5redundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("i2of5redundancy", result);
    }

    public static class getI2of5redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getI2of5redundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getI2of5redundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setI2of5redundancy(boolean i2of5redundancy, IMethodResult result) {
                    
        setProperty("i2of5redundancy", String.valueOf(i2of5redundancy), result);
    }

    public static class setI2of5redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean i2of5redundancy;
        private IMethodResult mResult;

        public setI2of5redundancyTask(IBarcodeChainway obj, 
                boolean i2of5redundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.i2of5redundancy = i2of5redundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setI2of5redundancy(
                    i2of5redundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getI2of5reportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("i2of5reportCheckDigit", result);
    }

    public static class getI2of5reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getI2of5reportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getI2of5reportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setI2of5reportCheckDigit(boolean i2of5reportCheckDigit, IMethodResult result) {
                    
        setProperty("i2of5reportCheckDigit", String.valueOf(i2of5reportCheckDigit), result);
    }

    public static class setI2of5reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean i2of5reportCheckDigit;
        private IMethodResult mResult;

        public setI2of5reportCheckDigitTask(IBarcodeChainway obj, 
                boolean i2of5reportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.i2of5reportCheckDigit = i2of5reportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setI2of5reportCheckDigit(
                    i2of5reportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getI2of5verifyCheckDigit(IMethodResult result) {
                     
        getProperty("i2of5verifyCheckDigit", result);
    }

    public static class getI2of5verifyCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getI2of5verifyCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getI2of5verifyCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setI2of5verifyCheckDigit(String i2of5verifyCheckDigit, IMethodResult result) {
                    
        setProperty("i2of5verifyCheckDigit", String.valueOf(i2of5verifyCheckDigit), result);
    }

    public static class setI2of5verifyCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String i2of5verifyCheckDigit;
        private IMethodResult mResult;

        public setI2of5verifyCheckDigitTask(IBarcodeChainway obj, 
                String i2of5verifyCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.i2of5verifyCheckDigit = i2of5verifyCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setI2of5verifyCheckDigit(
                    i2of5verifyCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getKorean3of5(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("korean3of5", result);
    }

    public static class getKorean3of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getKorean3of5Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getKorean3of5(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setKorean3of5(boolean korean3of5, IMethodResult result) {
                    
        setProperty("korean3of5", String.valueOf(korean3of5), result);
    }

    public static class setKorean3of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean korean3of5;
        private IMethodResult mResult;

        public setKorean3of5Task(IBarcodeChainway obj, 
                boolean korean3of5, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.korean3of5 = korean3of5;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setKorean3of5(
                    korean3of5, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getKorean3of5redundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("korean3of5redundancy", result);
    }

    public static class getKorean3of5redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getKorean3of5redundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getKorean3of5redundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setKorean3of5redundancy(boolean korean3of5redundancy, IMethodResult result) {
                    
        setProperty("korean3of5redundancy", String.valueOf(korean3of5redundancy), result);
    }

    public static class setKorean3of5redundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean korean3of5redundancy;
        private IMethodResult mResult;

        public setKorean3of5redundancyTask(IBarcodeChainway obj, 
                boolean korean3of5redundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.korean3of5redundancy = korean3of5redundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setKorean3of5redundancy(
                    korean3of5redundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getKorean3of5maxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("korean3of5maxLength", result);
    }

    public static class getKorean3of5maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getKorean3of5maxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getKorean3of5maxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setKorean3of5maxLength(int korean3of5maxLength, IMethodResult result) {
                    
        setProperty("korean3of5maxLength", String.valueOf(korean3of5maxLength), result);
    }

    public static class setKorean3of5maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int korean3of5maxLength;
        private IMethodResult mResult;

        public setKorean3of5maxLengthTask(IBarcodeChainway obj, 
                int korean3of5maxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.korean3of5maxLength = korean3of5maxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setKorean3of5maxLength(
                    korean3of5maxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getKorean3of5minLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("korean3of5minLength", result);
    }

    public static class getKorean3of5minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getKorean3of5minLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getKorean3of5minLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setKorean3of5minLength(int korean3of5minLength, IMethodResult result) {
                    
        setProperty("korean3of5minLength", String.valueOf(korean3of5minLength), result);
    }

    public static class setKorean3of5minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int korean3of5minLength;
        private IMethodResult mResult;

        public setKorean3of5minLengthTask(IBarcodeChainway obj, 
                int korean3of5minLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.korean3of5minLength = korean3of5minLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setKorean3of5minLength(
                    korean3of5minLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMacroPdf(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("macroPdf", result);
    }

    public static class getMacroPdfTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMacroPdfTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMacroPdf(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMacroPdf(boolean macroPdf, IMethodResult result) {
                    
        setProperty("macroPdf", String.valueOf(macroPdf), result);
    }

    public static class setMacroPdfTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean macroPdf;
        private IMethodResult mResult;

        public setMacroPdfTask(IBarcodeChainway obj, 
                boolean macroPdf, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.macroPdf = macroPdf;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMacroPdf(
                    macroPdf, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMacroPdfBufferLabels(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("macroPdfBufferLabels", result);
    }

    public static class getMacroPdfBufferLabelsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMacroPdfBufferLabelsTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMacroPdfBufferLabels(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMacroPdfBufferLabels(boolean macroPdfBufferLabels, IMethodResult result) {
                    
        setProperty("macroPdfBufferLabels", String.valueOf(macroPdfBufferLabels), result);
    }

    public static class setMacroPdfBufferLabelsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean macroPdfBufferLabels;
        private IMethodResult mResult;

        public setMacroPdfBufferLabelsTask(IBarcodeChainway obj, 
                boolean macroPdfBufferLabels, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.macroPdfBufferLabels = macroPdfBufferLabels;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMacroPdfBufferLabels(
                    macroPdfBufferLabels, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMacroPdfConvertToPdf417(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("macroPdfConvertToPdf417", result);
    }

    public static class getMacroPdfConvertToPdf417Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMacroPdfConvertToPdf417Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMacroPdfConvertToPdf417(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMacroPdfConvertToPdf417(boolean macroPdfConvertToPdf417, IMethodResult result) {
                    
        setProperty("macroPdfConvertToPdf417", String.valueOf(macroPdfConvertToPdf417), result);
    }

    public static class setMacroPdfConvertToPdf417Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean macroPdfConvertToPdf417;
        private IMethodResult mResult;

        public setMacroPdfConvertToPdf417Task(IBarcodeChainway obj, 
                boolean macroPdfConvertToPdf417, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.macroPdfConvertToPdf417 = macroPdfConvertToPdf417;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMacroPdfConvertToPdf417(
                    macroPdfConvertToPdf417, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMacroPdfExclusive(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("macroPdfExclusive", result);
    }

    public static class getMacroPdfExclusiveTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMacroPdfExclusiveTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMacroPdfExclusive(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMacroPdfExclusive(boolean macroPdfExclusive, IMethodResult result) {
                    
        setProperty("macroPdfExclusive", String.valueOf(macroPdfExclusive), result);
    }

    public static class setMacroPdfExclusiveTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean macroPdfExclusive;
        private IMethodResult mResult;

        public setMacroPdfExclusiveTask(IBarcodeChainway obj, 
                boolean macroPdfExclusive, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.macroPdfExclusive = macroPdfExclusive;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMacroPdfExclusive(
                    macroPdfExclusive, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMacroMicroPdf(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("macroMicroPdf", result);
    }

    public static class getMacroMicroPdfTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMacroMicroPdfTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMacroMicroPdf(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMacroMicroPdf(boolean macroMicroPdf, IMethodResult result) {
                    
        setProperty("macroMicroPdf", String.valueOf(macroMicroPdf), result);
    }

    public static class setMacroMicroPdfTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean macroMicroPdf;
        private IMethodResult mResult;

        public setMacroMicroPdfTask(IBarcodeChainway obj, 
                boolean macroMicroPdf, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.macroMicroPdf = macroMicroPdf;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMacroMicroPdf(
                    macroMicroPdf, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMacroMicroPdfBufferLabels(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("macroMicroPdfBufferLabels", result);
    }

    public static class getMacroMicroPdfBufferLabelsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMacroMicroPdfBufferLabelsTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMacroMicroPdfBufferLabels(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMacroMicroPdfBufferLabels(boolean macroMicroPdfBufferLabels, IMethodResult result) {
                    
        setProperty("macroMicroPdfBufferLabels", String.valueOf(macroMicroPdfBufferLabels), result);
    }

    public static class setMacroMicroPdfBufferLabelsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean macroMicroPdfBufferLabels;
        private IMethodResult mResult;

        public setMacroMicroPdfBufferLabelsTask(IBarcodeChainway obj, 
                boolean macroMicroPdfBufferLabels, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.macroMicroPdfBufferLabels = macroMicroPdfBufferLabels;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMacroMicroPdfBufferLabels(
                    macroMicroPdfBufferLabels, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMacroMicroPdfConvertToMicroPdf(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("macroMicroPdfConvertToMicroPdf", result);
    }

    public static class getMacroMicroPdfConvertToMicroPdfTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMacroMicroPdfConvertToMicroPdfTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMacroMicroPdfConvertToMicroPdf(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMacroMicroPdfConvertToMicroPdf(boolean macroMicroPdfConvertToMicroPdf, IMethodResult result) {
                    
        setProperty("macroMicroPdfConvertToMicroPdf", String.valueOf(macroMicroPdfConvertToMicroPdf), result);
    }

    public static class setMacroMicroPdfConvertToMicroPdfTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean macroMicroPdfConvertToMicroPdf;
        private IMethodResult mResult;

        public setMacroMicroPdfConvertToMicroPdfTask(IBarcodeChainway obj, 
                boolean macroMicroPdfConvertToMicroPdf, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.macroMicroPdfConvertToMicroPdf = macroMicroPdfConvertToMicroPdf;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMacroMicroPdfConvertToMicroPdf(
                    macroMicroPdfConvertToMicroPdf, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMacroMicroPdfExclusive(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("macroMicroPdfExclusive", result);
    }

    public static class getMacroMicroPdfExclusiveTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMacroMicroPdfExclusiveTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMacroMicroPdfExclusive(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMacroMicroPdfExclusive(boolean macroMicroPdfExclusive, IMethodResult result) {
                    
        setProperty("macroMicroPdfExclusive", String.valueOf(macroMicroPdfExclusive), result);
    }

    public static class setMacroMicroPdfExclusiveTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean macroMicroPdfExclusive;
        private IMethodResult mResult;

        public setMacroMicroPdfExclusiveTask(IBarcodeChainway obj, 
                boolean macroMicroPdfExclusive, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.macroMicroPdfExclusive = macroMicroPdfExclusive;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMacroMicroPdfExclusive(
                    macroMicroPdfExclusive, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMacroMicroPdfReportAppendInfo(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("macroMicroPdfReportAppendInfo", result);
    }

    public static class getMacroMicroPdfReportAppendInfoTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMacroMicroPdfReportAppendInfoTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMacroMicroPdfReportAppendInfo(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMacroMicroPdfReportAppendInfo(boolean macroMicroPdfReportAppendInfo, IMethodResult result) {
                    
        setProperty("macroMicroPdfReportAppendInfo", String.valueOf(macroMicroPdfReportAppendInfo), result);
    }

    public static class setMacroMicroPdfReportAppendInfoTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean macroMicroPdfReportAppendInfo;
        private IMethodResult mResult;

        public setMacroMicroPdfReportAppendInfoTask(IBarcodeChainway obj, 
                boolean macroMicroPdfReportAppendInfo, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.macroMicroPdfReportAppendInfo = macroMicroPdfReportAppendInfo;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMacroMicroPdfReportAppendInfo(
                    macroMicroPdfReportAppendInfo, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMatrix2of5(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("matrix2of5", result);
    }

    public static class getMatrix2of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMatrix2of5Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMatrix2of5(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMatrix2of5(boolean matrix2of5, IMethodResult result) {
                    
        setProperty("matrix2of5", String.valueOf(matrix2of5), result);
    }

    public static class setMatrix2of5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean matrix2of5;
        private IMethodResult mResult;

        public setMatrix2of5Task(IBarcodeChainway obj, 
                boolean matrix2of5, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.matrix2of5 = matrix2of5;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMatrix2of5(
                    matrix2of5, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMatrix2of5maxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("matrix2of5maxLength", result);
    }

    public static class getMatrix2of5maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMatrix2of5maxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMatrix2of5maxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMatrix2of5maxLength(int matrix2of5maxLength, IMethodResult result) {
                    
        setProperty("matrix2of5maxLength", String.valueOf(matrix2of5maxLength), result);
    }

    public static class setMatrix2of5maxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int matrix2of5maxLength;
        private IMethodResult mResult;

        public setMatrix2of5maxLengthTask(IBarcodeChainway obj, 
                int matrix2of5maxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.matrix2of5maxLength = matrix2of5maxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMatrix2of5maxLength(
                    matrix2of5maxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMatrix2of5minLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("matrix2of5minLength", result);
    }

    public static class getMatrix2of5minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMatrix2of5minLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMatrix2of5minLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMatrix2of5minLength(int matrix2of5minLength, IMethodResult result) {
                    
        setProperty("matrix2of5minLength", String.valueOf(matrix2of5minLength), result);
    }

    public static class setMatrix2of5minLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int matrix2of5minLength;
        private IMethodResult mResult;

        public setMatrix2of5minLengthTask(IBarcodeChainway obj, 
                int matrix2of5minLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.matrix2of5minLength = matrix2of5minLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMatrix2of5minLength(
                    matrix2of5minLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMatrix2of5reportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("matrix2of5reportCheckDigit", result);
    }

    public static class getMatrix2of5reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMatrix2of5reportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMatrix2of5reportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMatrix2of5reportCheckDigit(boolean matrix2of5reportCheckDigit, IMethodResult result) {
                    
        setProperty("matrix2of5reportCheckDigit", String.valueOf(matrix2of5reportCheckDigit), result);
    }

    public static class setMatrix2of5reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean matrix2of5reportCheckDigit;
        private IMethodResult mResult;

        public setMatrix2of5reportCheckDigitTask(IBarcodeChainway obj, 
                boolean matrix2of5reportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.matrix2of5reportCheckDigit = matrix2of5reportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMatrix2of5reportCheckDigit(
                    matrix2of5reportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMatrix2of5verifyCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("matrix2of5verifyCheckDigit", result);
    }

    public static class getMatrix2of5verifyCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMatrix2of5verifyCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMatrix2of5verifyCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMatrix2of5verifyCheckDigit(boolean matrix2of5verifyCheckDigit, IMethodResult result) {
                    
        setProperty("matrix2of5verifyCheckDigit", String.valueOf(matrix2of5verifyCheckDigit), result);
    }

    public static class setMatrix2of5verifyCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean matrix2of5verifyCheckDigit;
        private IMethodResult mResult;

        public setMatrix2of5verifyCheckDigitTask(IBarcodeChainway obj, 
                boolean matrix2of5verifyCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.matrix2of5verifyCheckDigit = matrix2of5verifyCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMatrix2of5verifyCheckDigit(
                    matrix2of5verifyCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMaxiCode(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("maxiCode", result);
    }

    public static class getMaxiCodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMaxiCodeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMaxiCode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMaxiCode(boolean maxiCode, IMethodResult result) {
                    
        setProperty("maxiCode", String.valueOf(maxiCode), result);
    }

    public static class setMaxiCodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean maxiCode;
        private IMethodResult mResult;

        public setMaxiCodeTask(IBarcodeChainway obj, 
                boolean maxiCode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.maxiCode = maxiCode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMaxiCode(
                    maxiCode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMicroPdf(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("microPdf", result);
    }

    public static class getMicroPdfTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMicroPdfTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMicroPdf(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMicroPdf(boolean microPdf, IMethodResult result) {
                    
        setProperty("microPdf", String.valueOf(microPdf), result);
    }

    public static class setMicroPdfTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean microPdf;
        private IMethodResult mResult;

        public setMicroPdfTask(IBarcodeChainway obj, 
                boolean microPdf, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.microPdf = microPdf;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMicroPdf(
                    microPdf, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMicroQr(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("microQr", result);
    }

    public static class getMicroQrTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMicroQrTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMicroQr(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMicroQr(boolean microQr, IMethodResult result) {
                    
        setProperty("microQr", String.valueOf(microQr), result);
    }

    public static class setMicroQrTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean microQr;
        private IMethodResult mResult;

        public setMicroQrTask(IBarcodeChainway obj, 
                boolean microQr, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.microQr = microQr;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMicroQr(
                    microQr, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMsi(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("msi", result);
    }

    public static class getMsiTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMsiTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMsi(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMsi(boolean msi, IMethodResult result) {
                    
        setProperty("msi", String.valueOf(msi), result);
    }

    public static class setMsiTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean msi;
        private IMethodResult mResult;

        public setMsiTask(IBarcodeChainway obj, 
                boolean msi, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.msi = msi;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMsi(
                    msi, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMsiCheckDigits(IMethodResult result) {
                     
        getProperty("msiCheckDigits", result);
    }

    public static class getMsiCheckDigitsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMsiCheckDigitsTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMsiCheckDigits(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMsiCheckDigits(String msiCheckDigits, IMethodResult result) {
                    
        setProperty("msiCheckDigits", String.valueOf(msiCheckDigits), result);
    }

    public static class setMsiCheckDigitsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String msiCheckDigits;
        private IMethodResult mResult;

        public setMsiCheckDigitsTask(IBarcodeChainway obj, 
                String msiCheckDigits, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.msiCheckDigits = msiCheckDigits;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMsiCheckDigits(
                    msiCheckDigits, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMsiCheckDigitScheme(IMethodResult result) {
                     
        getProperty("msiCheckDigitScheme", result);
    }

    public static class getMsiCheckDigitSchemeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMsiCheckDigitSchemeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMsiCheckDigitScheme(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMsiCheckDigitScheme(String msiCheckDigitScheme, IMethodResult result) {
                    
        setProperty("msiCheckDigitScheme", String.valueOf(msiCheckDigitScheme), result);
    }

    public static class setMsiCheckDigitSchemeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String msiCheckDigitScheme;
        private IMethodResult mResult;

        public setMsiCheckDigitSchemeTask(IBarcodeChainway obj, 
                String msiCheckDigitScheme, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.msiCheckDigitScheme = msiCheckDigitScheme;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMsiCheckDigitScheme(
                    msiCheckDigitScheme, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMsiMaxLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("msiMaxLength", result);
    }

    public static class getMsiMaxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMsiMaxLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMsiMaxLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMsiMaxLength(int msiMaxLength, IMethodResult result) {
                    
        setProperty("msiMaxLength", String.valueOf(msiMaxLength), result);
    }

    public static class setMsiMaxLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int msiMaxLength;
        private IMethodResult mResult;

        public setMsiMaxLengthTask(IBarcodeChainway obj, 
                int msiMaxLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.msiMaxLength = msiMaxLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMsiMaxLength(
                    msiMaxLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMsiMinLength(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("msiMinLength", result);
    }

    public static class getMsiMinLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMsiMinLengthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMsiMinLength(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMsiMinLength(int msiMinLength, IMethodResult result) {
                    
        setProperty("msiMinLength", String.valueOf(msiMinLength), result);
    }

    public static class setMsiMinLengthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int msiMinLength;
        private IMethodResult mResult;

        public setMsiMinLengthTask(IBarcodeChainway obj, 
                int msiMinLength, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.msiMinLength = msiMinLength;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMsiMinLength(
                    msiMinLength, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMsiRedundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("msiRedundancy", result);
    }

    public static class getMsiRedundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMsiRedundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMsiRedundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMsiRedundancy(boolean msiRedundancy, IMethodResult result) {
                    
        setProperty("msiRedundancy", String.valueOf(msiRedundancy), result);
    }

    public static class setMsiRedundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean msiRedundancy;
        private IMethodResult mResult;

        public setMsiRedundancyTask(IBarcodeChainway obj, 
                boolean msiRedundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.msiRedundancy = msiRedundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMsiRedundancy(
                    msiRedundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getMsiReportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("msiReportCheckDigit", result);
    }

    public static class getMsiReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getMsiReportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getMsiReportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setMsiReportCheckDigit(boolean msiReportCheckDigit, IMethodResult result) {
                    
        setProperty("msiReportCheckDigit", String.valueOf(msiReportCheckDigit), result);
    }

    public static class setMsiReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean msiReportCheckDigit;
        private IMethodResult mResult;

        public setMsiReportCheckDigitTask(IBarcodeChainway obj, 
                boolean msiReportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.msiReportCheckDigit = msiReportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setMsiReportCheckDigit(
                    msiReportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getPdf417(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("pdf417", result);
    }

    public static class getPdf417Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getPdf417Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getPdf417(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setPdf417(boolean pdf417, IMethodResult result) {
                    
        setProperty("pdf417", String.valueOf(pdf417), result);
    }

    public static class setPdf417Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean pdf417;
        private IMethodResult mResult;

        public setPdf417Task(IBarcodeChainway obj, 
                boolean pdf417, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.pdf417 = pdf417;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setPdf417(
                    pdf417, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getSignature(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("signature", result);
    }

    public static class getSignatureTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getSignatureTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getSignature(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setSignature(boolean signature, IMethodResult result) {
                    
        setProperty("signature", String.valueOf(signature), result);
    }

    public static class setSignatureTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean signature;
        private IMethodResult mResult;

        public setSignatureTask(IBarcodeChainway obj, 
                boolean signature, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.signature = signature;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setSignature(
                    signature, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getSignatureImageHeight(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("signatureImageHeight", result);
    }

    public static class getSignatureImageHeightTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getSignatureImageHeightTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getSignatureImageHeight(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setSignatureImageHeight(int signatureImageHeight, IMethodResult result) {
                    
        setProperty("signatureImageHeight", String.valueOf(signatureImageHeight), result);
    }

    public static class setSignatureImageHeightTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int signatureImageHeight;
        private IMethodResult mResult;

        public setSignatureImageHeightTask(IBarcodeChainway obj, 
                int signatureImageHeight, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.signatureImageHeight = signatureImageHeight;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setSignatureImageHeight(
                    signatureImageHeight, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getSignatureImageWidth(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("signatureImageWidth", result);
    }

    public static class getSignatureImageWidthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getSignatureImageWidthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getSignatureImageWidth(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setSignatureImageWidth(int signatureImageWidth, IMethodResult result) {
                    
        setProperty("signatureImageWidth", String.valueOf(signatureImageWidth), result);
    }

    public static class setSignatureImageWidthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int signatureImageWidth;
        private IMethodResult mResult;

        public setSignatureImageWidthTask(IBarcodeChainway obj, 
                int signatureImageWidth, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.signatureImageWidth = signatureImageWidth;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setSignatureImageWidth(
                    signatureImageWidth, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getSignatureImageQuality(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("signatureImageQuality", result);
    }

    public static class getSignatureImageQualityTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getSignatureImageQualityTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getSignatureImageQuality(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setSignatureImageQuality(int signatureImageQuality, IMethodResult result) {
                    
        setProperty("signatureImageQuality", String.valueOf(signatureImageQuality), result);
    }

    public static class setSignatureImageQualityTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int signatureImageQuality;
        private IMethodResult mResult;

        public setSignatureImageQualityTask(IBarcodeChainway obj, 
                int signatureImageQuality, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.signatureImageQuality = signatureImageQuality;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setSignatureImageQuality(
                    signatureImageQuality, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getAusPostal(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("ausPostal", result);
    }

    public static class getAusPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getAusPostalTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getAusPostal(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setAusPostal(boolean ausPostal, IMethodResult result) {
                    
        setProperty("ausPostal", String.valueOf(ausPostal), result);
    }

    public static class setAusPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean ausPostal;
        private IMethodResult mResult;

        public setAusPostalTask(IBarcodeChainway obj, 
                boolean ausPostal, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.ausPostal = ausPostal;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setAusPostal(
                    ausPostal, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getCanPostal(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("canPostal", result);
    }

    public static class getCanPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getCanPostalTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getCanPostal(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setCanPostal(boolean canPostal, IMethodResult result) {
                    
        setProperty("canPostal", String.valueOf(canPostal), result);
    }

    public static class setCanPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean canPostal;
        private IMethodResult mResult;

        public setCanPostalTask(IBarcodeChainway obj, 
                boolean canPostal, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.canPostal = canPostal;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setCanPostal(
                    canPostal, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getDutchPostal(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("dutchPostal", result);
    }

    public static class getDutchPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getDutchPostalTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getDutchPostal(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setDutchPostal(boolean dutchPostal, IMethodResult result) {
                    
        setProperty("dutchPostal", String.valueOf(dutchPostal), result);
    }

    public static class setDutchPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean dutchPostal;
        private IMethodResult mResult;

        public setDutchPostalTask(IBarcodeChainway obj, 
                boolean dutchPostal, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.dutchPostal = dutchPostal;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setDutchPostal(
                    dutchPostal, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getJapPostal(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("japPostal", result);
    }

    public static class getJapPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getJapPostalTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getJapPostal(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setJapPostal(boolean japPostal, IMethodResult result) {
                    
        setProperty("japPostal", String.valueOf(japPostal), result);
    }

    public static class setJapPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean japPostal;
        private IMethodResult mResult;

        public setJapPostalTask(IBarcodeChainway obj, 
                boolean japPostal, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.japPostal = japPostal;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setJapPostal(
                    japPostal, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUkPostal(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("ukPostal", result);
    }

    public static class getUkPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUkPostalTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUkPostal(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUkPostal(boolean ukPostal, IMethodResult result) {
                    
        setProperty("ukPostal", String.valueOf(ukPostal), result);
    }

    public static class setUkPostalTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean ukPostal;
        private IMethodResult mResult;

        public setUkPostalTask(IBarcodeChainway obj, 
                boolean ukPostal, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.ukPostal = ukPostal;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUkPostal(
                    ukPostal, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUkPostalReportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("ukPostalReportCheckDigit", result);
    }

    public static class getUkPostalReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUkPostalReportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUkPostalReportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUkPostalReportCheckDigit(boolean ukPostalReportCheckDigit, IMethodResult result) {
                    
        setProperty("ukPostalReportCheckDigit", String.valueOf(ukPostalReportCheckDigit), result);
    }

    public static class setUkPostalReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean ukPostalReportCheckDigit;
        private IMethodResult mResult;

        public setUkPostalReportCheckDigitTask(IBarcodeChainway obj, 
                boolean ukPostalReportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.ukPostalReportCheckDigit = ukPostalReportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUkPostalReportCheckDigit(
                    ukPostalReportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUs4state(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("us4state", result);
    }

    public static class getUs4stateTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUs4stateTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUs4state(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUs4state(boolean us4state, IMethodResult result) {
                    
        setProperty("us4state", String.valueOf(us4state), result);
    }

    public static class setUs4stateTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean us4state;
        private IMethodResult mResult;

        public setUs4stateTask(IBarcodeChainway obj, 
                boolean us4state, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.us4state = us4state;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUs4state(
                    us4state, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUs4stateFics(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("us4stateFics", result);
    }

    public static class getUs4stateFicsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUs4stateFicsTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUs4stateFics(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUs4stateFics(boolean us4stateFics, IMethodResult result) {
                    
        setProperty("us4stateFics", String.valueOf(us4stateFics), result);
    }

    public static class setUs4stateFicsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean us4stateFics;
        private IMethodResult mResult;

        public setUs4stateFicsTask(IBarcodeChainway obj, 
                boolean us4stateFics, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.us4stateFics = us4stateFics;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUs4stateFics(
                    us4stateFics, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUsPlanet(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("usPlanet", result);
    }

    public static class getUsPlanetTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUsPlanetTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUsPlanet(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUsPlanet(boolean usPlanet, IMethodResult result) {
                    
        setProperty("usPlanet", String.valueOf(usPlanet), result);
    }

    public static class setUsPlanetTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean usPlanet;
        private IMethodResult mResult;

        public setUsPlanetTask(IBarcodeChainway obj, 
                boolean usPlanet, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.usPlanet = usPlanet;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUsPlanet(
                    usPlanet, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUsPlanetReportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("usPlanetReportCheckDigit", result);
    }

    public static class getUsPlanetReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUsPlanetReportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUsPlanetReportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUsPlanetReportCheckDigit(boolean usPlanetReportCheckDigit, IMethodResult result) {
                    
        setProperty("usPlanetReportCheckDigit", String.valueOf(usPlanetReportCheckDigit), result);
    }

    public static class setUsPlanetReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean usPlanetReportCheckDigit;
        private IMethodResult mResult;

        public setUsPlanetReportCheckDigitTask(IBarcodeChainway obj, 
                boolean usPlanetReportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.usPlanetReportCheckDigit = usPlanetReportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUsPlanetReportCheckDigit(
                    usPlanetReportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUsPostNet(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("usPostNet", result);
    }

    public static class getUsPostNetTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUsPostNetTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUsPostNet(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUsPostNet(boolean usPostNet, IMethodResult result) {
                    
        setProperty("usPostNet", String.valueOf(usPostNet), result);
    }

    public static class setUsPostNetTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean usPostNet;
        private IMethodResult mResult;

        public setUsPostNetTask(IBarcodeChainway obj, 
                boolean usPostNet, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.usPostNet = usPostNet;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUsPostNet(
                    usPostNet, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUsPostNetReportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("usPostNetReportCheckDigit", result);
    }

    public static class getUsPostNetReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUsPostNetReportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUsPostNetReportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUsPostNetReportCheckDigit(boolean usPostNetReportCheckDigit, IMethodResult result) {
                    
        setProperty("usPostNetReportCheckDigit", String.valueOf(usPostNetReportCheckDigit), result);
    }

    public static class setUsPostNetReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean usPostNetReportCheckDigit;
        private IMethodResult mResult;

        public setUsPostNetReportCheckDigitTask(IBarcodeChainway obj, 
                boolean usPostNetReportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.usPostNetReportCheckDigit = usPostNetReportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUsPostNetReportCheckDigit(
                    usPostNetReportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getQrCode(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("qrCode", result);
    }

    public static class getQrCodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getQrCodeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getQrCode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setQrCode(boolean qrCode, IMethodResult result) {
                    
        setProperty("qrCode", String.valueOf(qrCode), result);
    }

    public static class setQrCodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean qrCode;
        private IMethodResult mResult;

        public setQrCodeTask(IBarcodeChainway obj, 
                boolean qrCode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.qrCode = qrCode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setQrCode(
                    qrCode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getGs1dataBar(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("gs1dataBar", result);
    }

    public static class getGs1dataBarTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getGs1dataBarTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getGs1dataBar(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setGs1dataBar(boolean gs1dataBar, IMethodResult result) {
                    
        setProperty("gs1dataBar", String.valueOf(gs1dataBar), result);
    }

    public static class setGs1dataBarTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean gs1dataBar;
        private IMethodResult mResult;

        public setGs1dataBarTask(IBarcodeChainway obj, 
                boolean gs1dataBar, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.gs1dataBar = gs1dataBar;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setGs1dataBar(
                    gs1dataBar, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getGs1dataBarExpanded(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("gs1dataBarExpanded", result);
    }

    public static class getGs1dataBarExpandedTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getGs1dataBarExpandedTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getGs1dataBarExpanded(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setGs1dataBarExpanded(boolean gs1dataBarExpanded, IMethodResult result) {
                    
        setProperty("gs1dataBarExpanded", String.valueOf(gs1dataBarExpanded), result);
    }

    public static class setGs1dataBarExpandedTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean gs1dataBarExpanded;
        private IMethodResult mResult;

        public setGs1dataBarExpandedTask(IBarcodeChainway obj, 
                boolean gs1dataBarExpanded, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.gs1dataBarExpanded = gs1dataBarExpanded;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setGs1dataBarExpanded(
                    gs1dataBarExpanded, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getGs1dataBarLimited(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("gs1dataBarLimited", result);
    }

    public static class getGs1dataBarLimitedTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getGs1dataBarLimitedTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getGs1dataBarLimited(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setGs1dataBarLimited(boolean gs1dataBarLimited, IMethodResult result) {
                    
        setProperty("gs1dataBarLimited", String.valueOf(gs1dataBarLimited), result);
    }

    public static class setGs1dataBarLimitedTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean gs1dataBarLimited;
        private IMethodResult mResult;

        public setGs1dataBarLimitedTask(IBarcodeChainway obj, 
                boolean gs1dataBarLimited, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.gs1dataBarLimited = gs1dataBarLimited;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setGs1dataBarLimited(
                    gs1dataBarLimited, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getTlc39(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("tlc39", result);
    }

    public static class getTlc39Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getTlc39Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getTlc39(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setTlc39(boolean tlc39, IMethodResult result) {
                    
        setProperty("tlc39", String.valueOf(tlc39), result);
    }

    public static class setTlc39Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean tlc39;
        private IMethodResult mResult;

        public setTlc39Task(IBarcodeChainway obj, 
                boolean tlc39, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.tlc39 = tlc39;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setTlc39(
                    tlc39, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getTrioptic39(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("trioptic39", result);
    }

    public static class getTrioptic39Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getTrioptic39Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getTrioptic39(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setTrioptic39(boolean trioptic39, IMethodResult result) {
                    
        setProperty("trioptic39", String.valueOf(trioptic39), result);
    }

    public static class setTrioptic39Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean trioptic39;
        private IMethodResult mResult;

        public setTrioptic39Task(IBarcodeChainway obj, 
                boolean trioptic39, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.trioptic39 = trioptic39;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setTrioptic39(
                    trioptic39, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getTrioptic39Redundancy(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("trioptic39Redundancy", result);
    }

    public static class getTrioptic39RedundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getTrioptic39RedundancyTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getTrioptic39Redundancy(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setTrioptic39Redundancy(boolean trioptic39Redundancy, IMethodResult result) {
                    
        setProperty("trioptic39Redundancy", String.valueOf(trioptic39Redundancy), result);
    }

    public static class setTrioptic39RedundancyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean trioptic39Redundancy;
        private IMethodResult mResult;

        public setTrioptic39RedundancyTask(IBarcodeChainway obj, 
                boolean trioptic39Redundancy, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.trioptic39Redundancy = trioptic39Redundancy;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setTrioptic39Redundancy(
                    trioptic39Redundancy, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanBookland(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upcEanBookland", result);
    }

    public static class getUpcEanBooklandTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanBooklandTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanBookland(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanBookland(boolean upcEanBookland, IMethodResult result) {
                    
        setProperty("upcEanBookland", String.valueOf(upcEanBookland), result);
    }

    public static class setUpcEanBooklandTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upcEanBookland;
        private IMethodResult mResult;

        public setUpcEanBooklandTask(IBarcodeChainway obj, 
                boolean upcEanBookland, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanBookland = upcEanBookland;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanBookland(
                    upcEanBookland, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanBooklandFormat(IMethodResult result) {
                     
        getProperty("upcEanBooklandFormat", result);
    }

    public static class getUpcEanBooklandFormatTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanBooklandFormatTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanBooklandFormat(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanBooklandFormat(String upcEanBooklandFormat, IMethodResult result) {
                    
        setProperty("upcEanBooklandFormat", String.valueOf(upcEanBooklandFormat), result);
    }

    public static class setUpcEanBooklandFormatTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String upcEanBooklandFormat;
        private IMethodResult mResult;

        public setUpcEanBooklandFormatTask(IBarcodeChainway obj, 
                String upcEanBooklandFormat, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanBooklandFormat = upcEanBooklandFormat;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanBooklandFormat(
                    upcEanBooklandFormat, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanConvertGs1dataBarToUpcEan(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upcEanConvertGs1dataBarToUpcEan", result);
    }

    public static class getUpcEanConvertGs1dataBarToUpcEanTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanConvertGs1dataBarToUpcEanTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanConvertGs1dataBarToUpcEan(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanConvertGs1dataBarToUpcEan(boolean upcEanConvertGs1dataBarToUpcEan, IMethodResult result) {
                    
        setProperty("upcEanConvertGs1dataBarToUpcEan", String.valueOf(upcEanConvertGs1dataBarToUpcEan), result);
    }

    public static class setUpcEanConvertGs1dataBarToUpcEanTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upcEanConvertGs1dataBarToUpcEan;
        private IMethodResult mResult;

        public setUpcEanConvertGs1dataBarToUpcEanTask(IBarcodeChainway obj, 
                boolean upcEanConvertGs1dataBarToUpcEan, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanConvertGs1dataBarToUpcEan = upcEanConvertGs1dataBarToUpcEan;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanConvertGs1dataBarToUpcEan(
                    upcEanConvertGs1dataBarToUpcEan, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanCoupon(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upcEanCoupon", result);
    }

    public static class getUpcEanCouponTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanCouponTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanCoupon(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanCoupon(boolean upcEanCoupon, IMethodResult result) {
                    
        setProperty("upcEanCoupon", String.valueOf(upcEanCoupon), result);
    }

    public static class setUpcEanCouponTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upcEanCoupon;
        private IMethodResult mResult;

        public setUpcEanCouponTask(IBarcodeChainway obj, 
                boolean upcEanCoupon, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanCoupon = upcEanCoupon;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanCoupon(
                    upcEanCoupon, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanLinearDecode(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upcEanLinearDecode", result);
    }

    public static class getUpcEanLinearDecodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanLinearDecodeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanLinearDecode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanLinearDecode(boolean upcEanLinearDecode, IMethodResult result) {
                    
        setProperty("upcEanLinearDecode", String.valueOf(upcEanLinearDecode), result);
    }

    public static class setUpcEanLinearDecodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upcEanLinearDecode;
        private IMethodResult mResult;

        public setUpcEanLinearDecodeTask(IBarcodeChainway obj, 
                boolean upcEanLinearDecode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanLinearDecode = upcEanLinearDecode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanLinearDecode(
                    upcEanLinearDecode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanRandomWeightCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upcEanRandomWeightCheckDigit", result);
    }

    public static class getUpcEanRandomWeightCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanRandomWeightCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanRandomWeightCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanRandomWeightCheckDigit(boolean upcEanRandomWeightCheckDigit, IMethodResult result) {
                    
        setProperty("upcEanRandomWeightCheckDigit", String.valueOf(upcEanRandomWeightCheckDigit), result);
    }

    public static class setUpcEanRandomWeightCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upcEanRandomWeightCheckDigit;
        private IMethodResult mResult;

        public setUpcEanRandomWeightCheckDigitTask(IBarcodeChainway obj, 
                boolean upcEanRandomWeightCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanRandomWeightCheckDigit = upcEanRandomWeightCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanRandomWeightCheckDigit(
                    upcEanRandomWeightCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanRetryCount(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("upcEanRetryCount", result);
    }

    public static class getUpcEanRetryCountTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanRetryCountTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanRetryCount(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanRetryCount(int upcEanRetryCount, IMethodResult result) {
                    
        setProperty("upcEanRetryCount", String.valueOf(upcEanRetryCount), result);
    }

    public static class setUpcEanRetryCountTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int upcEanRetryCount;
        private IMethodResult mResult;

        public setUpcEanRetryCountTask(IBarcodeChainway obj, 
                int upcEanRetryCount, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanRetryCount = upcEanRetryCount;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanRetryCount(
                    upcEanRetryCount, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanSecurityLevel(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("upcEanSecurityLevel", result);
    }

    public static class getUpcEanSecurityLevelTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanSecurityLevelTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanSecurityLevel(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanSecurityLevel(int upcEanSecurityLevel, IMethodResult result) {
                    
        setProperty("upcEanSecurityLevel", String.valueOf(upcEanSecurityLevel), result);
    }

    public static class setUpcEanSecurityLevelTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int upcEanSecurityLevel;
        private IMethodResult mResult;

        public setUpcEanSecurityLevelTask(IBarcodeChainway obj, 
                int upcEanSecurityLevel, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanSecurityLevel = upcEanSecurityLevel;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanSecurityLevel(
                    upcEanSecurityLevel, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanSupplemental2(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upcEanSupplemental2", result);
    }

    public static class getUpcEanSupplemental2Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanSupplemental2Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanSupplemental2(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanSupplemental2(boolean upcEanSupplemental2, IMethodResult result) {
                    
        setProperty("upcEanSupplemental2", String.valueOf(upcEanSupplemental2), result);
    }

    public static class setUpcEanSupplemental2Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upcEanSupplemental2;
        private IMethodResult mResult;

        public setUpcEanSupplemental2Task(IBarcodeChainway obj, 
                boolean upcEanSupplemental2, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanSupplemental2 = upcEanSupplemental2;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanSupplemental2(
                    upcEanSupplemental2, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanSupplemental5(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upcEanSupplemental5", result);
    }

    public static class getUpcEanSupplemental5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanSupplemental5Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanSupplemental5(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanSupplemental5(boolean upcEanSupplemental5, IMethodResult result) {
                    
        setProperty("upcEanSupplemental5", String.valueOf(upcEanSupplemental5), result);
    }

    public static class setUpcEanSupplemental5Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upcEanSupplemental5;
        private IMethodResult mResult;

        public setUpcEanSupplemental5Task(IBarcodeChainway obj, 
                boolean upcEanSupplemental5, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanSupplemental5 = upcEanSupplemental5;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanSupplemental5(
                    upcEanSupplemental5, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcEanSupplementalMode(IMethodResult result) {
                     
        getProperty("upcEanSupplementalMode", result);
    }

    public static class getUpcEanSupplementalModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcEanSupplementalModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcEanSupplementalMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcEanSupplementalMode(String upcEanSupplementalMode, IMethodResult result) {
                    
        setProperty("upcEanSupplementalMode", String.valueOf(upcEanSupplementalMode), result);
    }

    public static class setUpcEanSupplementalModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String upcEanSupplementalMode;
        private IMethodResult mResult;

        public setUpcEanSupplementalModeTask(IBarcodeChainway obj, 
                String upcEanSupplementalMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcEanSupplementalMode = upcEanSupplementalMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcEanSupplementalMode(
                    upcEanSupplementalMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpca(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upca", result);
    }

    public static class getUpcaTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcaTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpca(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpca(boolean upca, IMethodResult result) {
                    
        setProperty("upca", String.valueOf(upca), result);
    }

    public static class setUpcaTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upca;
        private IMethodResult mResult;

        public setUpcaTask(IBarcodeChainway obj, 
                boolean upca, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upca = upca;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpca(
                    upca, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcaPreamble(IMethodResult result) {
                     
        getProperty("upcaPreamble", result);
    }

    public static class getUpcaPreambleTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcaPreambleTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcaPreamble(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcaPreamble(String upcaPreamble, IMethodResult result) {
                    
        setProperty("upcaPreamble", String.valueOf(upcaPreamble), result);
    }

    public static class setUpcaPreambleTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String upcaPreamble;
        private IMethodResult mResult;

        public setUpcaPreambleTask(IBarcodeChainway obj, 
                String upcaPreamble, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcaPreamble = upcaPreamble;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcaPreamble(
                    upcaPreamble, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpcaReportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upcaReportCheckDigit", result);
    }

    public static class getUpcaReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpcaReportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpcaReportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpcaReportCheckDigit(boolean upcaReportCheckDigit, IMethodResult result) {
                    
        setProperty("upcaReportCheckDigit", String.valueOf(upcaReportCheckDigit), result);
    }

    public static class setUpcaReportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upcaReportCheckDigit;
        private IMethodResult mResult;

        public setUpcaReportCheckDigitTask(IBarcodeChainway obj, 
                boolean upcaReportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upcaReportCheckDigit = upcaReportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpcaReportCheckDigit(
                    upcaReportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpce0(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upce0", result);
    }

    public static class getUpce0Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpce0Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpce0(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpce0(boolean upce0, IMethodResult result) {
                    
        setProperty("upce0", String.valueOf(upce0), result);
    }

    public static class setUpce0Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upce0;
        private IMethodResult mResult;

        public setUpce0Task(IBarcodeChainway obj, 
                boolean upce0, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upce0 = upce0;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpce0(
                    upce0, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpce0convertToUpca(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upce0convertToUpca", result);
    }

    public static class getUpce0convertToUpcaTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpce0convertToUpcaTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpce0convertToUpca(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpce0convertToUpca(boolean upce0convertToUpca, IMethodResult result) {
                    
        setProperty("upce0convertToUpca", String.valueOf(upce0convertToUpca), result);
    }

    public static class setUpce0convertToUpcaTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upce0convertToUpca;
        private IMethodResult mResult;

        public setUpce0convertToUpcaTask(IBarcodeChainway obj, 
                boolean upce0convertToUpca, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upce0convertToUpca = upce0convertToUpca;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpce0convertToUpca(
                    upce0convertToUpca, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpce0preamble(IMethodResult result) {
                     
        getProperty("upce0preamble", result);
    }

    public static class getUpce0preambleTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpce0preambleTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpce0preamble(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpce0preamble(String upce0preamble, IMethodResult result) {
                    
        setProperty("upce0preamble", String.valueOf(upce0preamble), result);
    }

    public static class setUpce0preambleTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String upce0preamble;
        private IMethodResult mResult;

        public setUpce0preambleTask(IBarcodeChainway obj, 
                String upce0preamble, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upce0preamble = upce0preamble;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpce0preamble(
                    upce0preamble, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpce0reportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upce0reportCheckDigit", result);
    }

    public static class getUpce0reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpce0reportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpce0reportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpce0reportCheckDigit(boolean upce0reportCheckDigit, IMethodResult result) {
                    
        setProperty("upce0reportCheckDigit", String.valueOf(upce0reportCheckDigit), result);
    }

    public static class setUpce0reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upce0reportCheckDigit;
        private IMethodResult mResult;

        public setUpce0reportCheckDigitTask(IBarcodeChainway obj, 
                boolean upce0reportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upce0reportCheckDigit = upce0reportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpce0reportCheckDigit(
                    upce0reportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpce1(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upce1", result);
    }

    public static class getUpce1Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpce1Task(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpce1(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpce1(boolean upce1, IMethodResult result) {
                    
        setProperty("upce1", String.valueOf(upce1), result);
    }

    public static class setUpce1Task implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upce1;
        private IMethodResult mResult;

        public setUpce1Task(IBarcodeChainway obj, 
                boolean upce1, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upce1 = upce1;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpce1(
                    upce1, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpce1convertToUpca(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upce1convertToUpca", result);
    }

    public static class getUpce1convertToUpcaTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpce1convertToUpcaTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpce1convertToUpca(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpce1convertToUpca(boolean upce1convertToUpca, IMethodResult result) {
                    
        setProperty("upce1convertToUpca", String.valueOf(upce1convertToUpca), result);
    }

    public static class setUpce1convertToUpcaTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upce1convertToUpca;
        private IMethodResult mResult;

        public setUpce1convertToUpcaTask(IBarcodeChainway obj, 
                boolean upce1convertToUpca, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upce1convertToUpca = upce1convertToUpca;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpce1convertToUpca(
                    upce1convertToUpca, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpce1preamble(IMethodResult result) {
                     
        getProperty("upce1preamble", result);
    }

    public static class getUpce1preambleTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpce1preambleTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpce1preamble(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpce1preamble(String upce1preamble, IMethodResult result) {
                    
        setProperty("upce1preamble", String.valueOf(upce1preamble), result);
    }

    public static class setUpce1preambleTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String upce1preamble;
        private IMethodResult mResult;

        public setUpce1preambleTask(IBarcodeChainway obj, 
                String upce1preamble, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upce1preamble = upce1preamble;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpce1preamble(
                    upce1preamble, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getUpce1reportCheckDigit(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("upce1reportCheckDigit", result);
    }

    public static class getUpce1reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getUpce1reportCheckDigitTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getUpce1reportCheckDigit(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setUpce1reportCheckDigit(boolean upce1reportCheckDigit, IMethodResult result) {
                    
        setProperty("upce1reportCheckDigit", String.valueOf(upce1reportCheckDigit), result);
    }

    public static class setUpce1reportCheckDigitTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean upce1reportCheckDigit;
        private IMethodResult mResult;

        public setUpce1reportCheckDigitTask(IBarcodeChainway obj, 
                boolean upce1reportCheckDigit, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.upce1reportCheckDigit = upce1reportCheckDigit;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setUpce1reportCheckDigit(
                    upce1reportCheckDigit, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getWebcode(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("webcode", result);
    }

    public static class getWebcodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getWebcodeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getWebcode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setWebcode(boolean webcode, IMethodResult result) {
                    
        setProperty("webcode", String.valueOf(webcode), result);
    }

    public static class setWebcodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean webcode;
        private IMethodResult mResult;

        public setWebcodeTask(IBarcodeChainway obj, 
                boolean webcode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.webcode = webcode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setWebcode(
                    webcode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getWebcodeDecodeGtSubtype(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("webcodeDecodeGtSubtype", result);
    }

    public static class getWebcodeDecodeGtSubtypeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getWebcodeDecodeGtSubtypeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getWebcodeDecodeGtSubtype(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setWebcodeDecodeGtSubtype(boolean webcodeDecodeGtSubtype, IMethodResult result) {
                    
        setProperty("webcodeDecodeGtSubtype", String.valueOf(webcodeDecodeGtSubtype), result);
    }

    public static class setWebcodeDecodeGtSubtypeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean webcodeDecodeGtSubtype;
        private IMethodResult mResult;

        public setWebcodeDecodeGtSubtypeTask(IBarcodeChainway obj, 
                boolean webcodeDecodeGtSubtype, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.webcodeDecodeGtSubtype = webcodeDecodeGtSubtype;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setWebcodeDecodeGtSubtype(
                    webcodeDecodeGtSubtype, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmModelNumber(IMethodResult result) {
                     
        getProperty("rsmModelNumber", result);
    }

    public static class getRsmModelNumberTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmModelNumberTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmModelNumber(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmSerialNumber(IMethodResult result) {
                     
        getProperty("rsmSerialNumber", result);
    }

    public static class getRsmSerialNumberTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmSerialNumberTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmSerialNumber(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmDateOfManufacture(IMethodResult result) {
                     
        getProperty("rsmDateOfManufacture", result);
    }

    public static class getRsmDateOfManufactureTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmDateOfManufactureTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmDateOfManufacture(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmDateOfService(IMethodResult result) {
                     
        getProperty("rsmDateOfService", result);
    }

    public static class getRsmDateOfServiceTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmDateOfServiceTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmDateOfService(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothAddress(IMethodResult result) {
                     
        getProperty("rsmBluetoothAddress", result);
    }

    public static class getRsmBluetoothAddressTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothAddressTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothAddress(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmFirmwareVersion(IMethodResult result) {
                     
        getProperty("rsmFirmwareVersion", result);
    }

    public static class getRsmFirmwareVersionTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmFirmwareVersionTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmFirmwareVersion(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmDeviceClass(IMethodResult result) {
                     
        getProperty("rsmDeviceClass", result);
    }

    public static class getRsmDeviceClassTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmDeviceClassTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmDeviceClass(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBatteryStatus(IMethodResult result) {
                     
        getProperty("rsmBatteryStatus", result);
    }

    public static class getRsmBatteryStatusTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBatteryStatusTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBatteryStatus(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBatteryCapacity(IMethodResult result) {
                     
        getProperty("rsmBatteryCapacity", result);
    }

    public static class getRsmBatteryCapacityTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBatteryCapacityTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBatteryCapacity(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBatteryId(IMethodResult result) {
                     
        getProperty("rsmBatteryId", result);
    }

    public static class getRsmBatteryIdTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBatteryIdTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBatteryId(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothAuthentication(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmBluetoothAuthentication", result);
    }

    public static class getRsmBluetoothAuthenticationTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothAuthenticationTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothAuthentication(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothAuthentication(boolean rsmBluetoothAuthentication, IMethodResult result) {
                    
        setProperty("rsmBluetoothAuthentication", String.valueOf(rsmBluetoothAuthentication), result);
    }

    public static class setRsmBluetoothAuthenticationTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmBluetoothAuthentication;
        private IMethodResult mResult;

        public setRsmBluetoothAuthenticationTask(IBarcodeChainway obj, 
                boolean rsmBluetoothAuthentication, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothAuthentication = rsmBluetoothAuthentication;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothAuthentication(
                    rsmBluetoothAuthentication, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothEncryption(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmBluetoothEncryption", result);
    }

    public static class getRsmBluetoothEncryptionTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothEncryptionTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothEncryption(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothEncryption(boolean rsmBluetoothEncryption, IMethodResult result) {
                    
        setProperty("rsmBluetoothEncryption", String.valueOf(rsmBluetoothEncryption), result);
    }

    public static class setRsmBluetoothEncryptionTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmBluetoothEncryption;
        private IMethodResult mResult;

        public setRsmBluetoothEncryptionTask(IBarcodeChainway obj, 
                boolean rsmBluetoothEncryption, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothEncryption = rsmBluetoothEncryption;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothEncryption(
                    rsmBluetoothEncryption, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothPinCode(IMethodResult result) {
                     
        getProperty("rsmBluetoothPinCode", result);
    }

    public static class getRsmBluetoothPinCodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothPinCodeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothPinCode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothPinCode(String rsmBluetoothPinCode, IMethodResult result) {
                    
        setProperty("rsmBluetoothPinCode", String.valueOf(rsmBluetoothPinCode), result);
    }

    public static class setRsmBluetoothPinCodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rsmBluetoothPinCode;
        private IMethodResult mResult;

        public setRsmBluetoothPinCodeTask(IBarcodeChainway obj, 
                String rsmBluetoothPinCode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothPinCode = rsmBluetoothPinCode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothPinCode(
                    rsmBluetoothPinCode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothPinCodeType(IMethodResult result) {
                     
        getProperty("rsmBluetoothPinCodeType", result);
    }

    public static class getRsmBluetoothPinCodeTypeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothPinCodeTypeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothPinCodeType(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothPinCodeType(String rsmBluetoothPinCodeType, IMethodResult result) {
                    
        setProperty("rsmBluetoothPinCodeType", String.valueOf(rsmBluetoothPinCodeType), result);
    }

    public static class setRsmBluetoothPinCodeTypeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rsmBluetoothPinCodeType;
        private IMethodResult mResult;

        public setRsmBluetoothPinCodeTypeTask(IBarcodeChainway obj, 
                String rsmBluetoothPinCodeType, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothPinCodeType = rsmBluetoothPinCodeType;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothPinCodeType(
                    rsmBluetoothPinCodeType, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothReconnectionAttempts(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("rsmBluetoothReconnectionAttempts", result);
    }

    public static class getRsmBluetoothReconnectionAttemptsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothReconnectionAttemptsTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothReconnectionAttempts(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothReconnectionAttempts(int rsmBluetoothReconnectionAttempts, IMethodResult result) {
                    
        setProperty("rsmBluetoothReconnectionAttempts", String.valueOf(rsmBluetoothReconnectionAttempts), result);
    }

    public static class setRsmBluetoothReconnectionAttemptsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int rsmBluetoothReconnectionAttempts;
        private IMethodResult mResult;

        public setRsmBluetoothReconnectionAttemptsTask(IBarcodeChainway obj, 
                int rsmBluetoothReconnectionAttempts, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothReconnectionAttempts = rsmBluetoothReconnectionAttempts;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothReconnectionAttempts(
                    rsmBluetoothReconnectionAttempts, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothBeepOnReconnectAttempt(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmBluetoothBeepOnReconnectAttempt", result);
    }

    public static class getRsmBluetoothBeepOnReconnectAttemptTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothBeepOnReconnectAttemptTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothBeepOnReconnectAttempt(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothBeepOnReconnectAttempt(boolean rsmBluetoothBeepOnReconnectAttempt, IMethodResult result) {
                    
        setProperty("rsmBluetoothBeepOnReconnectAttempt", String.valueOf(rsmBluetoothBeepOnReconnectAttempt), result);
    }

    public static class setRsmBluetoothBeepOnReconnectAttemptTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmBluetoothBeepOnReconnectAttempt;
        private IMethodResult mResult;

        public setRsmBluetoothBeepOnReconnectAttemptTask(IBarcodeChainway obj, 
                boolean rsmBluetoothBeepOnReconnectAttempt, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothBeepOnReconnectAttempt = rsmBluetoothBeepOnReconnectAttempt;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothBeepOnReconnectAttempt(
                    rsmBluetoothBeepOnReconnectAttempt, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothHidAutoReconnect(IMethodResult result) {
                     
        getProperty("rsmBluetoothHidAutoReconnect", result);
    }

    public static class getRsmBluetoothHidAutoReconnectTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothHidAutoReconnectTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothHidAutoReconnect(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothHidAutoReconnect(String rsmBluetoothHidAutoReconnect, IMethodResult result) {
                    
        setProperty("rsmBluetoothHidAutoReconnect", String.valueOf(rsmBluetoothHidAutoReconnect), result);
    }

    public static class setRsmBluetoothHidAutoReconnectTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rsmBluetoothHidAutoReconnect;
        private IMethodResult mResult;

        public setRsmBluetoothHidAutoReconnectTask(IBarcodeChainway obj, 
                String rsmBluetoothHidAutoReconnect, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothHidAutoReconnect = rsmBluetoothHidAutoReconnect;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothHidAutoReconnect(
                    rsmBluetoothHidAutoReconnect, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothFriendlyName(IMethodResult result) {
                     
        getProperty("rsmBluetoothFriendlyName", result);
    }

    public static class getRsmBluetoothFriendlyNameTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothFriendlyNameTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothFriendlyName(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothFriendlyName(String rsmBluetoothFriendlyName, IMethodResult result) {
                    
        setProperty("rsmBluetoothFriendlyName", String.valueOf(rsmBluetoothFriendlyName), result);
    }

    public static class setRsmBluetoothFriendlyNameTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rsmBluetoothFriendlyName;
        private IMethodResult mResult;

        public setRsmBluetoothFriendlyNameTask(IBarcodeChainway obj, 
                String rsmBluetoothFriendlyName, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothFriendlyName = rsmBluetoothFriendlyName;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothFriendlyName(
                    rsmBluetoothFriendlyName, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothInquiryMode(IMethodResult result) {
                     
        getProperty("rsmBluetoothInquiryMode", result);
    }

    public static class getRsmBluetoothInquiryModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothInquiryModeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothInquiryMode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothInquiryMode(String rsmBluetoothInquiryMode, IMethodResult result) {
                    
        setProperty("rsmBluetoothInquiryMode", String.valueOf(rsmBluetoothInquiryMode), result);
    }

    public static class setRsmBluetoothInquiryModeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rsmBluetoothInquiryMode;
        private IMethodResult mResult;

        public setRsmBluetoothInquiryModeTask(IBarcodeChainway obj, 
                String rsmBluetoothInquiryMode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothInquiryMode = rsmBluetoothInquiryMode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothInquiryMode(
                    rsmBluetoothInquiryMode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmBluetoothAutoReconnect(IMethodResult result) {
                     
        getProperty("rsmBluetoothAutoReconnect", result);
    }

    public static class getRsmBluetoothAutoReconnectTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmBluetoothAutoReconnectTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmBluetoothAutoReconnect(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmBluetoothAutoReconnect(String rsmBluetoothAutoReconnect, IMethodResult result) {
                    
        setProperty("rsmBluetoothAutoReconnect", String.valueOf(rsmBluetoothAutoReconnect), result);
    }

    public static class setRsmBluetoothAutoReconnectTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rsmBluetoothAutoReconnect;
        private IMethodResult mResult;

        public setRsmBluetoothAutoReconnectTask(IBarcodeChainway obj, 
                String rsmBluetoothAutoReconnect, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmBluetoothAutoReconnect = rsmBluetoothAutoReconnect;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmBluetoothAutoReconnect(
                    rsmBluetoothAutoReconnect, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmForceSavePairingBarcode(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmForceSavePairingBarcode", result);
    }

    public static class getRsmForceSavePairingBarcodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmForceSavePairingBarcodeTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmForceSavePairingBarcode(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmForceSavePairingBarcode(boolean rsmForceSavePairingBarcode, IMethodResult result) {
                    
        setProperty("rsmForceSavePairingBarcode", String.valueOf(rsmForceSavePairingBarcode), result);
    }

    public static class setRsmForceSavePairingBarcodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmForceSavePairingBarcode;
        private IMethodResult mResult;

        public setRsmForceSavePairingBarcodeTask(IBarcodeChainway obj, 
                boolean rsmForceSavePairingBarcode, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmForceSavePairingBarcode = rsmForceSavePairingBarcode;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmForceSavePairingBarcode(
                    rsmForceSavePairingBarcode, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmLowBatteryIndication(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmLowBatteryIndication", result);
    }

    public static class getRsmLowBatteryIndicationTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmLowBatteryIndicationTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmLowBatteryIndication(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmLowBatteryIndication(boolean rsmLowBatteryIndication, IMethodResult result) {
                    
        setProperty("rsmLowBatteryIndication", String.valueOf(rsmLowBatteryIndication), result);
    }

    public static class setRsmLowBatteryIndicationTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmLowBatteryIndication;
        private IMethodResult mResult;

        public setRsmLowBatteryIndicationTask(IBarcodeChainway obj, 
                boolean rsmLowBatteryIndication, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmLowBatteryIndication = rsmLowBatteryIndication;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmLowBatteryIndication(
                    rsmLowBatteryIndication, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmLowBatteryIndicationCycle(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("rsmLowBatteryIndicationCycle", result);
    }

    public static class getRsmLowBatteryIndicationCycleTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmLowBatteryIndicationCycleTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmLowBatteryIndicationCycle(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmLowBatteryIndicationCycle(int rsmLowBatteryIndicationCycle, IMethodResult result) {
                    
        setProperty("rsmLowBatteryIndicationCycle", String.valueOf(rsmLowBatteryIndicationCycle), result);
    }

    public static class setRsmLowBatteryIndicationCycleTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int rsmLowBatteryIndicationCycle;
        private IMethodResult mResult;

        public setRsmLowBatteryIndicationCycleTask(IBarcodeChainway obj, 
                int rsmLowBatteryIndicationCycle, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmLowBatteryIndicationCycle = rsmLowBatteryIndicationCycle;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmLowBatteryIndicationCycle(
                    rsmLowBatteryIndicationCycle, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmScanLineWidth(IMethodResult result) {
                     
        getProperty("rsmScanLineWidth", result);
    }

    public static class getRsmScanLineWidthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmScanLineWidthTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmScanLineWidth(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmScanLineWidth(String rsmScanLineWidth, IMethodResult result) {
                    
        setProperty("rsmScanLineWidth", String.valueOf(rsmScanLineWidth), result);
    }

    public static class setRsmScanLineWidthTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rsmScanLineWidth;
        private IMethodResult mResult;

        public setRsmScanLineWidthTask(IBarcodeChainway obj, 
                String rsmScanLineWidth, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmScanLineWidth = rsmScanLineWidth;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmScanLineWidth(
                    rsmScanLineWidth, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmGoodScansDelay(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("rsmGoodScansDelay", result);
    }

    public static class getRsmGoodScansDelayTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmGoodScansDelayTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmGoodScansDelay(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmGoodScansDelay(int rsmGoodScansDelay, IMethodResult result) {
                    
        setProperty("rsmGoodScansDelay", String.valueOf(rsmGoodScansDelay), result);
    }

    public static class setRsmGoodScansDelayTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int rsmGoodScansDelay;
        private IMethodResult mResult;

        public setRsmGoodScansDelayTask(IBarcodeChainway obj, 
                int rsmGoodScansDelay, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmGoodScansDelay = rsmGoodScansDelay;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmGoodScansDelay(
                    rsmGoodScansDelay, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmDecodeFeedback(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmDecodeFeedback", result);
    }

    public static class getRsmDecodeFeedbackTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmDecodeFeedbackTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmDecodeFeedback(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmDecodeFeedback(boolean rsmDecodeFeedback, IMethodResult result) {
                    
        setProperty("rsmDecodeFeedback", String.valueOf(rsmDecodeFeedback), result);
    }

    public static class setRsmDecodeFeedbackTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmDecodeFeedback;
        private IMethodResult mResult;

        public setRsmDecodeFeedbackTask(IBarcodeChainway obj, 
                boolean rsmDecodeFeedback, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmDecodeFeedback = rsmDecodeFeedback;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmDecodeFeedback(
                    rsmDecodeFeedback, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmIgnoreCode128Usps(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmIgnoreCode128Usps", result);
    }

    public static class getRsmIgnoreCode128UspsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmIgnoreCode128UspsTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmIgnoreCode128Usps(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmIgnoreCode128Usps(boolean rsmIgnoreCode128Usps, IMethodResult result) {
                    
        setProperty("rsmIgnoreCode128Usps", String.valueOf(rsmIgnoreCode128Usps), result);
    }

    public static class setRsmIgnoreCode128UspsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmIgnoreCode128Usps;
        private IMethodResult mResult;

        public setRsmIgnoreCode128UspsTask(IBarcodeChainway obj, 
                boolean rsmIgnoreCode128Usps, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmIgnoreCode128Usps = rsmIgnoreCode128Usps;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmIgnoreCode128Usps(
                    rsmIgnoreCode128Usps, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmScanTriggerWakeup(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmScanTriggerWakeup", result);
    }

    public static class getRsmScanTriggerWakeupTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmScanTriggerWakeupTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmScanTriggerWakeup(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmScanTriggerWakeup(boolean rsmScanTriggerWakeup, IMethodResult result) {
                    
        setProperty("rsmScanTriggerWakeup", String.valueOf(rsmScanTriggerWakeup), result);
    }

    public static class setRsmScanTriggerWakeupTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmScanTriggerWakeup;
        private IMethodResult mResult;

        public setRsmScanTriggerWakeupTask(IBarcodeChainway obj, 
                boolean rsmScanTriggerWakeup, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmScanTriggerWakeup = rsmScanTriggerWakeup;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmScanTriggerWakeup(
                    rsmScanTriggerWakeup, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmMems(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmMems", result);
    }

    public static class getRsmMemsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmMemsTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmMems(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmMems(boolean rsmMems, IMethodResult result) {
                    
        setProperty("rsmMems", String.valueOf(rsmMems), result);
    }

    public static class setRsmMemsTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmMems;
        private IMethodResult mResult;

        public setRsmMemsTask(IBarcodeChainway obj, 
                boolean rsmMems, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmMems = rsmMems;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmMems(
                    rsmMems, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmProximityEnable(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmProximityEnable", result);
    }

    public static class getRsmProximityEnableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmProximityEnableTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmProximityEnable(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmProximityEnable(boolean rsmProximityEnable, IMethodResult result) {
                    
        setProperty("rsmProximityEnable", String.valueOf(rsmProximityEnable), result);
    }

    public static class setRsmProximityEnableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmProximityEnable;
        private IMethodResult mResult;

        public setRsmProximityEnableTask(IBarcodeChainway obj, 
                boolean rsmProximityEnable, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmProximityEnable = rsmProximityEnable;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmProximityEnable(
                    rsmProximityEnable, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmProximityContinuous(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmProximityContinuous", result);
    }

    public static class getRsmProximityContinuousTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmProximityContinuousTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmProximityContinuous(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmProximityContinuous(boolean rsmProximityContinuous, IMethodResult result) {
                    
        setProperty("rsmProximityContinuous", String.valueOf(rsmProximityContinuous), result);
    }

    public static class setRsmProximityContinuousTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmProximityContinuous;
        private IMethodResult mResult;

        public setRsmProximityContinuousTask(IBarcodeChainway obj, 
                boolean rsmProximityContinuous, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmProximityContinuous = rsmProximityContinuous;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmProximityContinuous(
                    rsmProximityContinuous, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmProximityDistance(IMethodResult result) {
                     
        getProperty("rsmProximityDistance", result);
    }

    public static class getRsmProximityDistanceTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmProximityDistanceTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmProximityDistance(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmProximityDistance(String rsmProximityDistance, IMethodResult result) {
                    
        setProperty("rsmProximityDistance", String.valueOf(rsmProximityDistance), result);
    }

    public static class setRsmProximityDistanceTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rsmProximityDistance;
        private IMethodResult mResult;

        public setRsmProximityDistanceTask(IBarcodeChainway obj, 
                String rsmProximityDistance, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmProximityDistance = rsmProximityDistance;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmProximityDistance(
                    rsmProximityDistance, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmPagingEnable(IMethodResult result) {
                    
        result.forceBooleanType(); 
        getProperty("rsmPagingEnable", result);
    }

    public static class getRsmPagingEnableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmPagingEnableTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmPagingEnable(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmPagingEnable(boolean rsmPagingEnable, IMethodResult result) {
                    
        setProperty("rsmPagingEnable", String.valueOf(rsmPagingEnable), result);
    }

    public static class setRsmPagingEnableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private boolean rsmPagingEnable;
        private IMethodResult mResult;

        public setRsmPagingEnableTask(IBarcodeChainway obj, 
                boolean rsmPagingEnable, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmPagingEnable = rsmPagingEnable;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmPagingEnable(
                    rsmPagingEnable, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getRsmPagingBeepSequence(IMethodResult result) {
                    
        result.forceIntegerType(); 
        getProperty("rsmPagingBeepSequence", result);
    }

    public static class getRsmPagingBeepSequenceTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getRsmPagingBeepSequenceTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getRsmPagingBeepSequence(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setRsmPagingBeepSequence(int rsmPagingBeepSequence, IMethodResult result) {
                    
        setProperty("rsmPagingBeepSequence", String.valueOf(rsmPagingBeepSequence), result);
    }

    public static class setRsmPagingBeepSequenceTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private int rsmPagingBeepSequence;
        private IMethodResult mResult;

        public setRsmPagingBeepSequenceTask(IBarcodeChainway obj, 
                int rsmPagingBeepSequence, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rsmPagingBeepSequence = rsmPagingBeepSequence;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setRsmPagingBeepSequence(
                    rsmPagingBeepSequence, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class enableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private Map<String, String> propertyMap;
        private IMethodResult mResult;

        public enableTask(IBarcodeChainway obj, 
                Map<String, String> propertyMap, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.propertyMap = propertyMap;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.enable(
                    propertyMap, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class registerBluetoothStatusTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public registerBluetoothStatusTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.registerBluetoothStatus(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class startTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public startTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.start(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class stopTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public stopTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.stop(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class disableTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public disableTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.disable(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class barcode_recognizeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String imageFilePath;
        private IMethodResult mResult;

        public barcode_recognizeTask(IBarcodeChainway obj, 
                String imageFilePath, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.imageFilePath = imageFilePath;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.barcode_recognize(
                    imageFilePath, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class getSupportedPropertiesTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getSupportedPropertiesTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getSupportedProperties(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class takeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private Map<String, String> propertyMap;
        private IMethodResult mResult;

        public takeTask(IBarcodeChainway obj, 
                Map<String, String> propertyMap, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.propertyMap = propertyMap;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.take(
                    propertyMap, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class take_barcodeTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String rubyCallbackURL;
        private Map<String, String> propertyMap;
        private IMethodResult mResult;

        public take_barcodeTask(IBarcodeChainway obj, 
                String rubyCallbackURL, 
                Map<String, String> propertyMap, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.rubyCallbackURL = rubyCallbackURL;
            this.propertyMap = propertyMap;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.take_barcode(
                    rubyCallbackURL, 
                    propertyMap, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }


    public static class commandRemoteScannerTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String command;
        private IMethodResult mResult;

        public commandRemoteScannerTask(IBarcodeChainway obj, 
                String command, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.command = command;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.commandRemoteScanner(
                    command, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getProperty(String propertyName, IMethodResult result) { 
        mPropertyBag.getProperty(propertyName, result);
    }

    public static class getPropertyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String propertyName;
        private IMethodResult mResult;

        public getPropertyTask(IBarcodeChainway obj, 
                String propertyName, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.propertyName = propertyName;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getProperty(
                    propertyName, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getProperties(List<String> arrayofNames, IMethodResult result) { 
        mPropertyBag.getProperties(arrayofNames, result);
    }

    public static class getPropertiesTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private List<String> arrayofNames;
        private IMethodResult mResult;

        public getPropertiesTask(IBarcodeChainway obj, 
                List<String> arrayofNames, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.arrayofNames = arrayofNames;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getProperties(
                    arrayofNames, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void getAllProperties(IMethodResult result) { 
        mPropertyBag.getAllProperties(result);
    }

    public static class getAllPropertiesTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private IMethodResult mResult;

        public getAllPropertiesTask(IBarcodeChainway obj, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.getAllProperties(mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setProperty(String propertyName, String propertyValue, IMethodResult result) { 
        mPropertyBag.setProperty(propertyName, propertyValue, result);
    }

    public static class setPropertyTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private String propertyName;
        private String propertyValue;
        private IMethodResult mResult;

        public setPropertyTask(IBarcodeChainway obj, 
                String propertyName, 
                String propertyValue, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.propertyName = propertyName;
            this.propertyValue = propertyValue;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setProperty(
                    propertyName, 
                    propertyValue, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    public void setProperties(Map<String, String> propertyMap, IMethodResult result) { 
        mPropertyBag.setProperties(propertyMap, result);
    }

    public static class setPropertiesTask implements Runnable {
        private IBarcodeChainway mApiObject; 
        private Map<String, String> propertyMap;
        private IMethodResult mResult;

        public setPropertiesTask(IBarcodeChainway obj, 
                Map<String, String> propertyMap, 
                IMethodResult result) {
            this.mApiObject = obj; 
            this.propertyMap = propertyMap;
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiObject.setProperties(
                    propertyMap, mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

}
