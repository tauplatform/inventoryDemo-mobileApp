#include "BarcodeChainway_impl.h"
#include "BarcodeChainwayFactory.h"
#include "api_generator/uwp/MethodResultImpl.h"

using namespace rho::apiGenerator;
using namespace rhoruntime;

namespace rho {


void CBarcodeChainwayImpl::getAutoEnter(CMethodResult& oResult)
{
    try {
        _runtime->getAutoEnter(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setAutoEnter(bool autoEnter, CMethodResult& oResult)
{
    try {
        _runtime->setAutoEnter(autoEnter, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getAutoTab(CMethodResult& oResult)
{
    try {
        _runtime->getAutoTab(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setAutoTab(bool autoTab, CMethodResult& oResult)
{
    try {
        _runtime->setAutoTab(autoTab, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getHapticFeedback(CMethodResult& oResult)
{
    try {
        _runtime->getHapticFeedback(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setHapticFeedback(bool hapticFeedback, CMethodResult& oResult)
{
    try {
        _runtime->setHapticFeedback(hapticFeedback, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getLinearSecurityLevel(CMethodResult& oResult)
{
    try {
        _runtime->getLinearSecurityLevel(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setLinearSecurityLevel(const rho::String& linearSecurityLevel, CMethodResult& oResult)
{
        Platform::String^ _linearSecurityLevel = rho::common::convertStringToWP8(linearSecurityLevel);
    try {
        _runtime->setLinearSecurityLevel(_linearSecurityLevel, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getScanTimeout(CMethodResult& oResult)
{
    try {
        _runtime->getScanTimeout(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setScanTimeout(int scanTimeout, CMethodResult& oResult)
{
    try {
        _runtime->setScanTimeout(scanTimeout, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRasterMode(CMethodResult& oResult)
{
    try {
        _runtime->getRasterMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRasterMode(const rho::String& rasterMode, CMethodResult& oResult)
{
        Platform::String^ _rasterMode = rho::common::convertStringToWP8(rasterMode);
    try {
        _runtime->setRasterMode(_rasterMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRasterHeight(CMethodResult& oResult)
{
    try {
        _runtime->getRasterHeight(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRasterHeight(int rasterHeight, CMethodResult& oResult)
{
    try {
        _runtime->setRasterHeight(rasterHeight, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getAimType(CMethodResult& oResult)
{
    try {
        _runtime->getAimType(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setAimType(const rho::String& aimType, CMethodResult& oResult)
{
        Platform::String^ _aimType = rho::common::convertStringToWP8(aimType);
    try {
        _runtime->setAimType(_aimType, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getTimedAimDuration(CMethodResult& oResult)
{
    try {
        _runtime->getTimedAimDuration(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setTimedAimDuration(int timedAimDuration, CMethodResult& oResult)
{
    try {
        _runtime->setTimedAimDuration(timedAimDuration, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getSameSymbolTimeout(CMethodResult& oResult)
{
    try {
        _runtime->getSameSymbolTimeout(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setSameSymbolTimeout(int sameSymbolTimeout, CMethodResult& oResult)
{
    try {
        _runtime->setSameSymbolTimeout(sameSymbolTimeout, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDifferentSymbolTimeout(CMethodResult& oResult)
{
    try {
        _runtime->getDifferentSymbolTimeout(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDifferentSymbolTimeout(int differentSymbolTimeout, CMethodResult& oResult)
{
    try {
        _runtime->setDifferentSymbolTimeout(differentSymbolTimeout, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getAimMode(CMethodResult& oResult)
{
    try {
        _runtime->getAimMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setAimMode(const rho::String& aimMode, CMethodResult& oResult)
{
        Platform::String^ _aimMode = rho::common::convertStringToWP8(aimMode);
    try {
        _runtime->setAimMode(_aimMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getPicklistMode(CMethodResult& oResult)
{
    try {
        _runtime->getPicklistMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setPicklistMode(const rho::String& picklistMode, CMethodResult& oResult)
{
        Platform::String^ _picklistMode = rho::common::convertStringToWP8(picklistMode);
    try {
        _runtime->setPicklistMode(_picklistMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getViewfinderMode(CMethodResult& oResult)
{
    try {
        _runtime->getViewfinderMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setViewfinderMode(const rho::String& viewfinderMode, CMethodResult& oResult)
{
        Platform::String^ _viewfinderMode = rho::common::convertStringToWP8(viewfinderMode);
    try {
        _runtime->setViewfinderMode(_viewfinderMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getViewfinderX(CMethodResult& oResult)
{
    try {
        _runtime->getViewfinderX(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setViewfinderX(int viewfinderX, CMethodResult& oResult)
{
    try {
        _runtime->setViewfinderX(viewfinderX, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getViewfinderY(CMethodResult& oResult)
{
    try {
        _runtime->getViewfinderY(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setViewfinderY(int viewfinderY, CMethodResult& oResult)
{
    try {
        _runtime->setViewfinderY(viewfinderY, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getViewfinderWidth(CMethodResult& oResult)
{
    try {
        _runtime->getViewfinderWidth(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setViewfinderWidth(int viewfinderWidth, CMethodResult& oResult)
{
    try {
        _runtime->setViewfinderWidth(viewfinderWidth, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getViewfinderHeight(CMethodResult& oResult)
{
    try {
        _runtime->getViewfinderHeight(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setViewfinderHeight(int viewfinderHeight, CMethodResult& oResult)
{
    try {
        _runtime->setViewfinderHeight(viewfinderHeight, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getViewfinderFeedback(CMethodResult& oResult)
{
    try {
        _runtime->getViewfinderFeedback(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setViewfinderFeedback(const rho::String& viewfinderFeedback, CMethodResult& oResult)
{
        Platform::String^ _viewfinderFeedback = rho::common::convertStringToWP8(viewfinderFeedback);
    try {
        _runtime->setViewfinderFeedback(_viewfinderFeedback, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getViewfinderFeedbackTime(CMethodResult& oResult)
{
    try {
        _runtime->getViewfinderFeedbackTime(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setViewfinderFeedbackTime(int viewfinderFeedbackTime, CMethodResult& oResult)
{
    try {
        _runtime->setViewfinderFeedbackTime(viewfinderFeedbackTime, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getFocusMode(CMethodResult& oResult)
{
    try {
        _runtime->getFocusMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setFocusMode(const rho::String& focusMode, CMethodResult& oResult)
{
        Platform::String^ _focusMode = rho::common::convertStringToWP8(focusMode);
    try {
        _runtime->setFocusMode(_focusMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getIlluminationMode(CMethodResult& oResult)
{
    try {
        _runtime->getIlluminationMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setIlluminationMode(const rho::String& illuminationMode, CMethodResult& oResult)
{
        Platform::String^ _illuminationMode = rho::common::convertStringToWP8(illuminationMode);
    try {
        _runtime->setIlluminationMode(_illuminationMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDpmMode(CMethodResult& oResult)
{
    try {
        _runtime->getDpmMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDpmMode(bool dpmMode, CMethodResult& oResult)
{
    try {
        _runtime->setDpmMode(dpmMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getInverse1dMode(CMethodResult& oResult)
{
    try {
        _runtime->getInverse1dMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setInverse1dMode(const rho::String& inverse1dMode, CMethodResult& oResult)
{
        Platform::String^ _inverse1dMode = rho::common::convertStringToWP8(inverse1dMode);
    try {
        _runtime->setInverse1dMode(_inverse1dMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getPoorQuality1dMode(CMethodResult& oResult)
{
    try {
        _runtime->getPoorQuality1dMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setPoorQuality1dMode(bool poorQuality1dMode, CMethodResult& oResult)
{
    try {
        _runtime->setPoorQuality1dMode(poorQuality1dMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getBeamWidth(CMethodResult& oResult)
{
    try {
        _runtime->getBeamWidth(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setBeamWidth(const rho::String& beamWidth, CMethodResult& oResult)
{
        Platform::String^ _beamWidth = rho::common::convertStringToWP8(beamWidth);
    try {
        _runtime->setBeamWidth(_beamWidth, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDbpMode(CMethodResult& oResult)
{
    try {
        _runtime->getDbpMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDbpMode(const rho::String& dbpMode, CMethodResult& oResult)
{
        Platform::String^ _dbpMode = rho::common::convertStringToWP8(dbpMode);
    try {
        _runtime->setDbpMode(_dbpMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getKlasseEins(CMethodResult& oResult)
{
    try {
        _runtime->getKlasseEins(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setKlasseEins(bool klasseEins, CMethodResult& oResult)
{
    try {
        _runtime->setKlasseEins(klasseEins, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getAdaptiveScanning(CMethodResult& oResult)
{
    try {
        _runtime->getAdaptiveScanning(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setAdaptiveScanning(bool adaptiveScanning, CMethodResult& oResult)
{
    try {
        _runtime->setAdaptiveScanning(adaptiveScanning, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getBidirectionalRedundancy(CMethodResult& oResult)
{
    try {
        _runtime->getBidirectionalRedundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setBidirectionalRedundancy(bool bidirectionalRedundancy, CMethodResult& oResult)
{
    try {
        _runtime->setBidirectionalRedundancy(bidirectionalRedundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getBarcodeDataFormat(CMethodResult& oResult)
{
    try {
        _runtime->getBarcodeDataFormat(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setBarcodeDataFormat(const rho::String& barcodeDataFormat, CMethodResult& oResult)
{
        Platform::String^ _barcodeDataFormat = rho::common::convertStringToWP8(barcodeDataFormat);
    try {
        _runtime->setBarcodeDataFormat(_barcodeDataFormat, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDataBufferSize(CMethodResult& oResult)
{
    try {
        _runtime->getDataBufferSize(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDataBufferSize(int dataBufferSize, CMethodResult& oResult)
{
    try {
        _runtime->setDataBufferSize(dataBufferSize, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getConnectionIdleTimeout(CMethodResult& oResult)
{
    try {
        _runtime->getConnectionIdleTimeout(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setConnectionIdleTimeout(int connectionIdleTimeout, CMethodResult& oResult)
{
    try {
        _runtime->setConnectionIdleTimeout(connectionIdleTimeout, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDisconnectBtOnDisable(CMethodResult& oResult)
{
    try {
        _runtime->getDisconnectBtOnDisable(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDisconnectBtOnDisable(bool disconnectBtOnDisable, CMethodResult& oResult)
{
    try {
        _runtime->setDisconnectBtOnDisable(disconnectBtOnDisable, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDisplayBtAddressBarcodeOnEnable(CMethodResult& oResult)
{
    try {
        _runtime->getDisplayBtAddressBarcodeOnEnable(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDisplayBtAddressBarcodeOnEnable(bool displayBtAddressBarcodeOnEnable, CMethodResult& oResult)
{
    try {
        _runtime->setDisplayBtAddressBarcodeOnEnable(displayBtAddressBarcodeOnEnable, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getEnableTimeout(CMethodResult& oResult)
{
    try {
        _runtime->getEnableTimeout(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setEnableTimeout(int enableTimeout, CMethodResult& oResult)
{
    try {
        _runtime->setEnableTimeout(enableTimeout, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getFriendlyName(CMethodResult& oResult)
{
    try {
        _runtime->getFriendlyName(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getLcdMode(CMethodResult& oResult)
{
    try {
        _runtime->getLcdMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setLcdMode(bool lcdMode, CMethodResult& oResult)
{
    try {
        _runtime->setLcdMode(lcdMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getLowBatteryScan(CMethodResult& oResult)
{
    try {
        _runtime->getLowBatteryScan(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setLowBatteryScan(bool lowBatteryScan, CMethodResult& oResult)
{
    try {
        _runtime->setLowBatteryScan(lowBatteryScan, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getTriggerConnected(CMethodResult& oResult)
{
    try {
        _runtime->getTriggerConnected(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setTriggerConnected(bool triggerConnected, CMethodResult& oResult)
{
    try {
        _runtime->setTriggerConnected(triggerConnected, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDisableScannerDuringNavigate(CMethodResult& oResult)
{
    try {
        _runtime->getDisableScannerDuringNavigate(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDisableScannerDuringNavigate(bool disableScannerDuringNavigate, CMethodResult& oResult)
{
    try {
        _runtime->setDisableScannerDuringNavigate(disableScannerDuringNavigate, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDecodeVolume(CMethodResult& oResult)
{
    try {
        _runtime->getDecodeVolume(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDecodeVolume(int decodeVolume, CMethodResult& oResult)
{
    try {
        _runtime->setDecodeVolume(decodeVolume, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDecodeDuration(CMethodResult& oResult)
{
    try {
        _runtime->getDecodeDuration(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDecodeDuration(int decodeDuration, CMethodResult& oResult)
{
    try {
        _runtime->setDecodeDuration(decodeDuration, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDecodeFrequency(CMethodResult& oResult)
{
    try {
        _runtime->getDecodeFrequency(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDecodeFrequency(int decodeFrequency, CMethodResult& oResult)
{
    try {
        _runtime->setDecodeFrequency(decodeFrequency, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getInvalidDecodeFrequency(CMethodResult& oResult)
{
    try {
        _runtime->getInvalidDecodeFrequency(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setInvalidDecodeFrequency(int invalidDecodeFrequency, CMethodResult& oResult)
{
    try {
        _runtime->setInvalidDecodeFrequency(invalidDecodeFrequency, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDecodeSound(CMethodResult& oResult)
{
    try {
        _runtime->getDecodeSound(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDecodeSound(const rho::String& decodeSound, CMethodResult& oResult)
{
        Platform::String^ _decodeSound = rho::common::convertStringToWP8(decodeSound);
    try {
        _runtime->setDecodeSound(_decodeSound, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getInvalidDecodeSound(CMethodResult& oResult)
{
    try {
        _runtime->getInvalidDecodeSound(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setInvalidDecodeSound(const rho::String& invalidDecodeSound, CMethodResult& oResult)
{
        Platform::String^ _invalidDecodeSound = rho::common::convertStringToWP8(invalidDecodeSound);
    try {
        _runtime->setInvalidDecodeSound(_invalidDecodeSound, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getScannerType(CMethodResult& oResult)
{
    try {
        _runtime->getScannerType(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getAllDecoders(CMethodResult& oResult)
{
    try {
        _runtime->getAllDecoders(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setAllDecoders(bool allDecoders, CMethodResult& oResult)
{
    try {
        _runtime->setAllDecoders(allDecoders, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getAztec(CMethodResult& oResult)
{
    try {
        _runtime->getAztec(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setAztec(bool aztec, CMethodResult& oResult)
{
    try {
        _runtime->setAztec(aztec, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getChinese2of5(CMethodResult& oResult)
{
    try {
        _runtime->getChinese2of5(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setChinese2of5(bool chinese2of5, CMethodResult& oResult)
{
    try {
        _runtime->setChinese2of5(chinese2of5, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCodabar(CMethodResult& oResult)
{
    try {
        _runtime->getCodabar(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCodabar(bool codabar, CMethodResult& oResult)
{
    try {
        _runtime->setCodabar(codabar, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCodabarClsiEditing(CMethodResult& oResult)
{
    try {
        _runtime->getCodabarClsiEditing(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCodabarClsiEditing(bool codabarClsiEditing, CMethodResult& oResult)
{
    try {
        _runtime->setCodabarClsiEditing(codabarClsiEditing, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCodabarMaxLength(CMethodResult& oResult)
{
    try {
        _runtime->getCodabarMaxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCodabarMaxLength(int codabarMaxLength, CMethodResult& oResult)
{
    try {
        _runtime->setCodabarMaxLength(codabarMaxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCodabarMinLength(CMethodResult& oResult)
{
    try {
        _runtime->getCodabarMinLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCodabarMinLength(int codabarMinLength, CMethodResult& oResult)
{
    try {
        _runtime->setCodabarMinLength(codabarMinLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCodabarNotisEditing(CMethodResult& oResult)
{
    try {
        _runtime->getCodabarNotisEditing(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCodabarNotisEditing(bool codabarNotisEditing, CMethodResult& oResult)
{
    try {
        _runtime->setCodabarNotisEditing(codabarNotisEditing, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCodabarRedundancy(CMethodResult& oResult)
{
    try {
        _runtime->getCodabarRedundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCodabarRedundancy(bool codabarRedundancy, CMethodResult& oResult)
{
    try {
        _runtime->setCodabarRedundancy(codabarRedundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode11(CMethodResult& oResult)
{
    try {
        _runtime->getCode11(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode11(bool code11, CMethodResult& oResult)
{
    try {
        _runtime->setCode11(code11, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode11checkDigitCount(CMethodResult& oResult)
{
    try {
        _runtime->getCode11checkDigitCount(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode11checkDigitCount(const rho::String& code11checkDigitCount, CMethodResult& oResult)
{
        Platform::String^ _code11checkDigitCount = rho::common::convertStringToWP8(code11checkDigitCount);
    try {
        _runtime->setCode11checkDigitCount(_code11checkDigitCount, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode11maxLength(CMethodResult& oResult)
{
    try {
        _runtime->getCode11maxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode11maxLength(int code11maxLength, CMethodResult& oResult)
{
    try {
        _runtime->setCode11maxLength(code11maxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode11minLength(CMethodResult& oResult)
{
    try {
        _runtime->getCode11minLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode11minLength(int code11minLength, CMethodResult& oResult)
{
    try {
        _runtime->setCode11minLength(code11minLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode11redundancy(CMethodResult& oResult)
{
    try {
        _runtime->getCode11redundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode11redundancy(bool code11redundancy, CMethodResult& oResult)
{
    try {
        _runtime->setCode11redundancy(code11redundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode11reportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getCode11reportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode11reportCheckDigit(bool code11reportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setCode11reportCheckDigit(code11reportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128(CMethodResult& oResult)
{
    try {
        _runtime->getCode128(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128(bool code128, CMethodResult& oResult)
{
    try {
        _runtime->setCode128(code128, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128checkIsBtTable(CMethodResult& oResult)
{
    try {
        _runtime->getCode128checkIsBtTable(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128checkIsBtTable(bool code128checkIsBtTable, CMethodResult& oResult)
{
    try {
        _runtime->setCode128checkIsBtTable(code128checkIsBtTable, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128ean128(CMethodResult& oResult)
{
    try {
        _runtime->getCode128ean128(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128ean128(bool code128ean128, CMethodResult& oResult)
{
    try {
        _runtime->setCode128ean128(code128ean128, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128isbt128(CMethodResult& oResult)
{
    try {
        _runtime->getCode128isbt128(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128isbt128(bool code128isbt128, CMethodResult& oResult)
{
    try {
        _runtime->setCode128isbt128(code128isbt128, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128isbt128ConcatMode(CMethodResult& oResult)
{
    try {
        _runtime->getCode128isbt128ConcatMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128isbt128ConcatMode(const rho::String& code128isbt128ConcatMode, CMethodResult& oResult)
{
        Platform::String^ _code128isbt128ConcatMode = rho::common::convertStringToWP8(code128isbt128ConcatMode);
    try {
        _runtime->setCode128isbt128ConcatMode(_code128isbt128ConcatMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128maxLength(CMethodResult& oResult)
{
    try {
        _runtime->getCode128maxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128maxLength(int code128maxLength, CMethodResult& oResult)
{
    try {
        _runtime->setCode128maxLength(code128maxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128minLength(CMethodResult& oResult)
{
    try {
        _runtime->getCode128minLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128minLength(int code128minLength, CMethodResult& oResult)
{
    try {
        _runtime->setCode128minLength(code128minLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128other128(CMethodResult& oResult)
{
    try {
        _runtime->getCode128other128(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128other128(bool code128other128, CMethodResult& oResult)
{
    try {
        _runtime->setCode128other128(code128other128, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128redundancy(CMethodResult& oResult)
{
    try {
        _runtime->getCode128redundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128redundancy(bool code128redundancy, CMethodResult& oResult)
{
    try {
        _runtime->setCode128redundancy(code128redundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode128securityLevel(CMethodResult& oResult)
{
    try {
        _runtime->getCode128securityLevel(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode128securityLevel(int code128securityLevel, CMethodResult& oResult)
{
    try {
        _runtime->setCode128securityLevel(code128securityLevel, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCompositeAb(CMethodResult& oResult)
{
    try {
        _runtime->getCompositeAb(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCompositeAb(bool compositeAb, CMethodResult& oResult)
{
    try {
        _runtime->setCompositeAb(compositeAb, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCompositeAbUccLinkMode(CMethodResult& oResult)
{
    try {
        _runtime->getCompositeAbUccLinkMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCompositeAbUccLinkMode(const rho::String& compositeAbUccLinkMode, CMethodResult& oResult)
{
        Platform::String^ _compositeAbUccLinkMode = rho::common::convertStringToWP8(compositeAbUccLinkMode);
    try {
        _runtime->setCompositeAbUccLinkMode(_compositeAbUccLinkMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCompositeAbUseUpcPreambleCheckDigitRules(CMethodResult& oResult)
{
    try {
        _runtime->getCompositeAbUseUpcPreambleCheckDigitRules(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCompositeAbUseUpcPreambleCheckDigitRules(bool compositeAbUseUpcPreambleCheckDigitRules, CMethodResult& oResult)
{
    try {
        _runtime->setCompositeAbUseUpcPreambleCheckDigitRules(compositeAbUseUpcPreambleCheckDigitRules, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCompositeC(CMethodResult& oResult)
{
    try {
        _runtime->getCompositeC(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCompositeC(bool compositeC, CMethodResult& oResult)
{
    try {
        _runtime->setCompositeC(compositeC, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39(CMethodResult& oResult)
{
    try {
        _runtime->getCode39(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39(bool code39, CMethodResult& oResult)
{
    try {
        _runtime->setCode39(code39, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39code32Prefix(CMethodResult& oResult)
{
    try {
        _runtime->getCode39code32Prefix(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39code32Prefix(bool code39code32Prefix, CMethodResult& oResult)
{
    try {
        _runtime->setCode39code32Prefix(code39code32Prefix, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39convertToCode32(CMethodResult& oResult)
{
    try {
        _runtime->getCode39convertToCode32(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39convertToCode32(bool code39convertToCode32, CMethodResult& oResult)
{
    try {
        _runtime->setCode39convertToCode32(code39convertToCode32, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39fullAscii(CMethodResult& oResult)
{
    try {
        _runtime->getCode39fullAscii(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39fullAscii(bool code39fullAscii, CMethodResult& oResult)
{
    try {
        _runtime->setCode39fullAscii(code39fullAscii, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39maxLength(CMethodResult& oResult)
{
    try {
        _runtime->getCode39maxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39maxLength(int code39maxLength, CMethodResult& oResult)
{
    try {
        _runtime->setCode39maxLength(code39maxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39minLength(CMethodResult& oResult)
{
    try {
        _runtime->getCode39minLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39minLength(int code39minLength, CMethodResult& oResult)
{
    try {
        _runtime->setCode39minLength(code39minLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39redundancy(CMethodResult& oResult)
{
    try {
        _runtime->getCode39redundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39redundancy(bool code39redundancy, CMethodResult& oResult)
{
    try {
        _runtime->setCode39redundancy(code39redundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39reportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getCode39reportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39reportCheckDigit(bool code39reportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setCode39reportCheckDigit(code39reportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39securityLevel(CMethodResult& oResult)
{
    try {
        _runtime->getCode39securityLevel(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39securityLevel(int code39securityLevel, CMethodResult& oResult)
{
    try {
        _runtime->setCode39securityLevel(code39securityLevel, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode39verifyCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getCode39verifyCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode39verifyCheckDigit(bool code39verifyCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setCode39verifyCheckDigit(code39verifyCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode93(CMethodResult& oResult)
{
    try {
        _runtime->getCode93(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode93(bool code93, CMethodResult& oResult)
{
    try {
        _runtime->setCode93(code93, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode93maxLength(CMethodResult& oResult)
{
    try {
        _runtime->getCode93maxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode93maxLength(int code93maxLength, CMethodResult& oResult)
{
    try {
        _runtime->setCode93maxLength(code93maxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode93minLength(CMethodResult& oResult)
{
    try {
        _runtime->getCode93minLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode93minLength(int code93minLength, CMethodResult& oResult)
{
    try {
        _runtime->setCode93minLength(code93minLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCode93redundancy(CMethodResult& oResult)
{
    try {
        _runtime->getCode93redundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCode93redundancy(bool code93redundancy, CMethodResult& oResult)
{
    try {
        _runtime->setCode93redundancy(code93redundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getD2of5(CMethodResult& oResult)
{
    try {
        _runtime->getD2of5(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setD2of5(bool d2of5, CMethodResult& oResult)
{
    try {
        _runtime->setD2of5(d2of5, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getD2of5maxLength(CMethodResult& oResult)
{
    try {
        _runtime->getD2of5maxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setD2of5maxLength(int d2of5maxLength, CMethodResult& oResult)
{
    try {
        _runtime->setD2of5maxLength(d2of5maxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getD2of5minLength(CMethodResult& oResult)
{
    try {
        _runtime->getD2of5minLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setD2of5minLength(int d2of5minLength, CMethodResult& oResult)
{
    try {
        _runtime->setD2of5minLength(d2of5minLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getD2of5redundancy(CMethodResult& oResult)
{
    try {
        _runtime->getD2of5redundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setD2of5redundancy(bool d2of5redundancy, CMethodResult& oResult)
{
    try {
        _runtime->setD2of5redundancy(d2of5redundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDatamatrix(CMethodResult& oResult)
{
    try {
        _runtime->getDatamatrix(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDatamatrix(bool datamatrix, CMethodResult& oResult)
{
    try {
        _runtime->setDatamatrix(datamatrix, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getEan13(CMethodResult& oResult)
{
    try {
        _runtime->getEan13(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setEan13(bool ean13, CMethodResult& oResult)
{
    try {
        _runtime->setEan13(ean13, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getEan8(CMethodResult& oResult)
{
    try {
        _runtime->getEan8(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setEan8(bool ean8, CMethodResult& oResult)
{
    try {
        _runtime->setEan8(ean8, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getEan8convertToEan13(CMethodResult& oResult)
{
    try {
        _runtime->getEan8convertToEan13(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setEan8convertToEan13(bool ean8convertToEan13, CMethodResult& oResult)
{
    try {
        _runtime->setEan8convertToEan13(ean8convertToEan13, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getI2of5(CMethodResult& oResult)
{
    try {
        _runtime->getI2of5(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setI2of5(bool i2of5, CMethodResult& oResult)
{
    try {
        _runtime->setI2of5(i2of5, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getI2of5convertToEan13(CMethodResult& oResult)
{
    try {
        _runtime->getI2of5convertToEan13(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setI2of5convertToEan13(bool i2of5convertToEan13, CMethodResult& oResult)
{
    try {
        _runtime->setI2of5convertToEan13(i2of5convertToEan13, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getI2of5maxLength(CMethodResult& oResult)
{
    try {
        _runtime->getI2of5maxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setI2of5maxLength(int i2of5maxLength, CMethodResult& oResult)
{
    try {
        _runtime->setI2of5maxLength(i2of5maxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getI2of5minLength(CMethodResult& oResult)
{
    try {
        _runtime->getI2of5minLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setI2of5minLength(int i2of5minLength, CMethodResult& oResult)
{
    try {
        _runtime->setI2of5minLength(i2of5minLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getI2of5redundancy(CMethodResult& oResult)
{
    try {
        _runtime->getI2of5redundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setI2of5redundancy(bool i2of5redundancy, CMethodResult& oResult)
{
    try {
        _runtime->setI2of5redundancy(i2of5redundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getI2of5reportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getI2of5reportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setI2of5reportCheckDigit(bool i2of5reportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setI2of5reportCheckDigit(i2of5reportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getI2of5verifyCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getI2of5verifyCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setI2of5verifyCheckDigit(const rho::String& i2of5verifyCheckDigit, CMethodResult& oResult)
{
        Platform::String^ _i2of5verifyCheckDigit = rho::common::convertStringToWP8(i2of5verifyCheckDigit);
    try {
        _runtime->setI2of5verifyCheckDigit(_i2of5verifyCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getKorean3of5(CMethodResult& oResult)
{
    try {
        _runtime->getKorean3of5(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setKorean3of5(bool korean3of5, CMethodResult& oResult)
{
    try {
        _runtime->setKorean3of5(korean3of5, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getKorean3of5redundancy(CMethodResult& oResult)
{
    try {
        _runtime->getKorean3of5redundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setKorean3of5redundancy(bool korean3of5redundancy, CMethodResult& oResult)
{
    try {
        _runtime->setKorean3of5redundancy(korean3of5redundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getKorean3of5maxLength(CMethodResult& oResult)
{
    try {
        _runtime->getKorean3of5maxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setKorean3of5maxLength(int korean3of5maxLength, CMethodResult& oResult)
{
    try {
        _runtime->setKorean3of5maxLength(korean3of5maxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getKorean3of5minLength(CMethodResult& oResult)
{
    try {
        _runtime->getKorean3of5minLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setKorean3of5minLength(int korean3of5minLength, CMethodResult& oResult)
{
    try {
        _runtime->setKorean3of5minLength(korean3of5minLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMacroPdf(CMethodResult& oResult)
{
    try {
        _runtime->getMacroPdf(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMacroPdf(bool macroPdf, CMethodResult& oResult)
{
    try {
        _runtime->setMacroPdf(macroPdf, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMacroPdfBufferLabels(CMethodResult& oResult)
{
    try {
        _runtime->getMacroPdfBufferLabels(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMacroPdfBufferLabels(bool macroPdfBufferLabels, CMethodResult& oResult)
{
    try {
        _runtime->setMacroPdfBufferLabels(macroPdfBufferLabels, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMacroPdfConvertToPdf417(CMethodResult& oResult)
{
    try {
        _runtime->getMacroPdfConvertToPdf417(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMacroPdfConvertToPdf417(bool macroPdfConvertToPdf417, CMethodResult& oResult)
{
    try {
        _runtime->setMacroPdfConvertToPdf417(macroPdfConvertToPdf417, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMacroPdfExclusive(CMethodResult& oResult)
{
    try {
        _runtime->getMacroPdfExclusive(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMacroPdfExclusive(bool macroPdfExclusive, CMethodResult& oResult)
{
    try {
        _runtime->setMacroPdfExclusive(macroPdfExclusive, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMacroMicroPdf(CMethodResult& oResult)
{
    try {
        _runtime->getMacroMicroPdf(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMacroMicroPdf(bool macroMicroPdf, CMethodResult& oResult)
{
    try {
        _runtime->setMacroMicroPdf(macroMicroPdf, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMacroMicroPdfBufferLabels(CMethodResult& oResult)
{
    try {
        _runtime->getMacroMicroPdfBufferLabels(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMacroMicroPdfBufferLabels(bool macroMicroPdfBufferLabels, CMethodResult& oResult)
{
    try {
        _runtime->setMacroMicroPdfBufferLabels(macroMicroPdfBufferLabels, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMacroMicroPdfConvertToMicroPdf(CMethodResult& oResult)
{
    try {
        _runtime->getMacroMicroPdfConvertToMicroPdf(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMacroMicroPdfConvertToMicroPdf(bool macroMicroPdfConvertToMicroPdf, CMethodResult& oResult)
{
    try {
        _runtime->setMacroMicroPdfConvertToMicroPdf(macroMicroPdfConvertToMicroPdf, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMacroMicroPdfExclusive(CMethodResult& oResult)
{
    try {
        _runtime->getMacroMicroPdfExclusive(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMacroMicroPdfExclusive(bool macroMicroPdfExclusive, CMethodResult& oResult)
{
    try {
        _runtime->setMacroMicroPdfExclusive(macroMicroPdfExclusive, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMacroMicroPdfReportAppendInfo(CMethodResult& oResult)
{
    try {
        _runtime->getMacroMicroPdfReportAppendInfo(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMacroMicroPdfReportAppendInfo(bool macroMicroPdfReportAppendInfo, CMethodResult& oResult)
{
    try {
        _runtime->setMacroMicroPdfReportAppendInfo(macroMicroPdfReportAppendInfo, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMatrix2of5(CMethodResult& oResult)
{
    try {
        _runtime->getMatrix2of5(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMatrix2of5(bool matrix2of5, CMethodResult& oResult)
{
    try {
        _runtime->setMatrix2of5(matrix2of5, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMatrix2of5maxLength(CMethodResult& oResult)
{
    try {
        _runtime->getMatrix2of5maxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMatrix2of5maxLength(int matrix2of5maxLength, CMethodResult& oResult)
{
    try {
        _runtime->setMatrix2of5maxLength(matrix2of5maxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMatrix2of5minLength(CMethodResult& oResult)
{
    try {
        _runtime->getMatrix2of5minLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMatrix2of5minLength(int matrix2of5minLength, CMethodResult& oResult)
{
    try {
        _runtime->setMatrix2of5minLength(matrix2of5minLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMatrix2of5reportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getMatrix2of5reportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMatrix2of5reportCheckDigit(bool matrix2of5reportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setMatrix2of5reportCheckDigit(matrix2of5reportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMatrix2of5verifyCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getMatrix2of5verifyCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMatrix2of5verifyCheckDigit(bool matrix2of5verifyCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setMatrix2of5verifyCheckDigit(matrix2of5verifyCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMaxiCode(CMethodResult& oResult)
{
    try {
        _runtime->getMaxiCode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMaxiCode(bool maxiCode, CMethodResult& oResult)
{
    try {
        _runtime->setMaxiCode(maxiCode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMicroPdf(CMethodResult& oResult)
{
    try {
        _runtime->getMicroPdf(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMicroPdf(bool microPdf, CMethodResult& oResult)
{
    try {
        _runtime->setMicroPdf(microPdf, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMicroQr(CMethodResult& oResult)
{
    try {
        _runtime->getMicroQr(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMicroQr(bool microQr, CMethodResult& oResult)
{
    try {
        _runtime->setMicroQr(microQr, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMsi(CMethodResult& oResult)
{
    try {
        _runtime->getMsi(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMsi(bool msi, CMethodResult& oResult)
{
    try {
        _runtime->setMsi(msi, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMsiCheckDigits(CMethodResult& oResult)
{
    try {
        _runtime->getMsiCheckDigits(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMsiCheckDigits(const rho::String& msiCheckDigits, CMethodResult& oResult)
{
        Platform::String^ _msiCheckDigits = rho::common::convertStringToWP8(msiCheckDigits);
    try {
        _runtime->setMsiCheckDigits(_msiCheckDigits, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMsiCheckDigitScheme(CMethodResult& oResult)
{
    try {
        _runtime->getMsiCheckDigitScheme(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMsiCheckDigitScheme(const rho::String& msiCheckDigitScheme, CMethodResult& oResult)
{
        Platform::String^ _msiCheckDigitScheme = rho::common::convertStringToWP8(msiCheckDigitScheme);
    try {
        _runtime->setMsiCheckDigitScheme(_msiCheckDigitScheme, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMsiMaxLength(CMethodResult& oResult)
{
    try {
        _runtime->getMsiMaxLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMsiMaxLength(int msiMaxLength, CMethodResult& oResult)
{
    try {
        _runtime->setMsiMaxLength(msiMaxLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMsiMinLength(CMethodResult& oResult)
{
    try {
        _runtime->getMsiMinLength(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMsiMinLength(int msiMinLength, CMethodResult& oResult)
{
    try {
        _runtime->setMsiMinLength(msiMinLength, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMsiRedundancy(CMethodResult& oResult)
{
    try {
        _runtime->getMsiRedundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMsiRedundancy(bool msiRedundancy, CMethodResult& oResult)
{
    try {
        _runtime->setMsiRedundancy(msiRedundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getMsiReportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getMsiReportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setMsiReportCheckDigit(bool msiReportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setMsiReportCheckDigit(msiReportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getPdf417(CMethodResult& oResult)
{
    try {
        _runtime->getPdf417(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setPdf417(bool pdf417, CMethodResult& oResult)
{
    try {
        _runtime->setPdf417(pdf417, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getSignature(CMethodResult& oResult)
{
    try {
        _runtime->getSignature(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setSignature(bool signature, CMethodResult& oResult)
{
    try {
        _runtime->setSignature(signature, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getSignatureImageHeight(CMethodResult& oResult)
{
    try {
        _runtime->getSignatureImageHeight(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setSignatureImageHeight(int signatureImageHeight, CMethodResult& oResult)
{
    try {
        _runtime->setSignatureImageHeight(signatureImageHeight, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getSignatureImageWidth(CMethodResult& oResult)
{
    try {
        _runtime->getSignatureImageWidth(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setSignatureImageWidth(int signatureImageWidth, CMethodResult& oResult)
{
    try {
        _runtime->setSignatureImageWidth(signatureImageWidth, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getSignatureImageQuality(CMethodResult& oResult)
{
    try {
        _runtime->getSignatureImageQuality(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setSignatureImageQuality(int signatureImageQuality, CMethodResult& oResult)
{
    try {
        _runtime->setSignatureImageQuality(signatureImageQuality, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getAusPostal(CMethodResult& oResult)
{
    try {
        _runtime->getAusPostal(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setAusPostal(bool ausPostal, CMethodResult& oResult)
{
    try {
        _runtime->setAusPostal(ausPostal, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getCanPostal(CMethodResult& oResult)
{
    try {
        _runtime->getCanPostal(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setCanPostal(bool canPostal, CMethodResult& oResult)
{
    try {
        _runtime->setCanPostal(canPostal, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getDutchPostal(CMethodResult& oResult)
{
    try {
        _runtime->getDutchPostal(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setDutchPostal(bool dutchPostal, CMethodResult& oResult)
{
    try {
        _runtime->setDutchPostal(dutchPostal, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getJapPostal(CMethodResult& oResult)
{
    try {
        _runtime->getJapPostal(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setJapPostal(bool japPostal, CMethodResult& oResult)
{
    try {
        _runtime->setJapPostal(japPostal, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUkPostal(CMethodResult& oResult)
{
    try {
        _runtime->getUkPostal(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUkPostal(bool ukPostal, CMethodResult& oResult)
{
    try {
        _runtime->setUkPostal(ukPostal, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUkPostalReportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getUkPostalReportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUkPostalReportCheckDigit(bool ukPostalReportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setUkPostalReportCheckDigit(ukPostalReportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUs4state(CMethodResult& oResult)
{
    try {
        _runtime->getUs4state(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUs4state(bool us4state, CMethodResult& oResult)
{
    try {
        _runtime->setUs4state(us4state, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUs4stateFics(CMethodResult& oResult)
{
    try {
        _runtime->getUs4stateFics(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUs4stateFics(bool us4stateFics, CMethodResult& oResult)
{
    try {
        _runtime->setUs4stateFics(us4stateFics, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUsPlanet(CMethodResult& oResult)
{
    try {
        _runtime->getUsPlanet(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUsPlanet(bool usPlanet, CMethodResult& oResult)
{
    try {
        _runtime->setUsPlanet(usPlanet, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUsPlanetReportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getUsPlanetReportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUsPlanetReportCheckDigit(bool usPlanetReportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setUsPlanetReportCheckDigit(usPlanetReportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUsPostNet(CMethodResult& oResult)
{
    try {
        _runtime->getUsPostNet(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUsPostNet(bool usPostNet, CMethodResult& oResult)
{
    try {
        _runtime->setUsPostNet(usPostNet, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUsPostNetReportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getUsPostNetReportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUsPostNetReportCheckDigit(bool usPostNetReportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setUsPostNetReportCheckDigit(usPostNetReportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getQrCode(CMethodResult& oResult)
{
    try {
        _runtime->getQrCode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setQrCode(bool qrCode, CMethodResult& oResult)
{
    try {
        _runtime->setQrCode(qrCode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getGs1dataBar(CMethodResult& oResult)
{
    try {
        _runtime->getGs1dataBar(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setGs1dataBar(bool gs1dataBar, CMethodResult& oResult)
{
    try {
        _runtime->setGs1dataBar(gs1dataBar, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getGs1dataBarExpanded(CMethodResult& oResult)
{
    try {
        _runtime->getGs1dataBarExpanded(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setGs1dataBarExpanded(bool gs1dataBarExpanded, CMethodResult& oResult)
{
    try {
        _runtime->setGs1dataBarExpanded(gs1dataBarExpanded, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getGs1dataBarLimited(CMethodResult& oResult)
{
    try {
        _runtime->getGs1dataBarLimited(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setGs1dataBarLimited(bool gs1dataBarLimited, CMethodResult& oResult)
{
    try {
        _runtime->setGs1dataBarLimited(gs1dataBarLimited, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getTlc39(CMethodResult& oResult)
{
    try {
        _runtime->getTlc39(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setTlc39(bool tlc39, CMethodResult& oResult)
{
    try {
        _runtime->setTlc39(tlc39, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getTrioptic39(CMethodResult& oResult)
{
    try {
        _runtime->getTrioptic39(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setTrioptic39(bool trioptic39, CMethodResult& oResult)
{
    try {
        _runtime->setTrioptic39(trioptic39, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getTrioptic39Redundancy(CMethodResult& oResult)
{
    try {
        _runtime->getTrioptic39Redundancy(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setTrioptic39Redundancy(bool trioptic39Redundancy, CMethodResult& oResult)
{
    try {
        _runtime->setTrioptic39Redundancy(trioptic39Redundancy, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanBookland(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanBookland(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanBookland(bool upcEanBookland, CMethodResult& oResult)
{
    try {
        _runtime->setUpcEanBookland(upcEanBookland, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanBooklandFormat(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanBooklandFormat(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanBooklandFormat(const rho::String& upcEanBooklandFormat, CMethodResult& oResult)
{
        Platform::String^ _upcEanBooklandFormat = rho::common::convertStringToWP8(upcEanBooklandFormat);
    try {
        _runtime->setUpcEanBooklandFormat(_upcEanBooklandFormat, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanConvertGs1dataBarToUpcEan(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanConvertGs1dataBarToUpcEan(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanConvertGs1dataBarToUpcEan(bool upcEanConvertGs1dataBarToUpcEan, CMethodResult& oResult)
{
    try {
        _runtime->setUpcEanConvertGs1dataBarToUpcEan(upcEanConvertGs1dataBarToUpcEan, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanCoupon(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanCoupon(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanCoupon(bool upcEanCoupon, CMethodResult& oResult)
{
    try {
        _runtime->setUpcEanCoupon(upcEanCoupon, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanLinearDecode(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanLinearDecode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanLinearDecode(bool upcEanLinearDecode, CMethodResult& oResult)
{
    try {
        _runtime->setUpcEanLinearDecode(upcEanLinearDecode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanRandomWeightCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanRandomWeightCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanRandomWeightCheckDigit(bool upcEanRandomWeightCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setUpcEanRandomWeightCheckDigit(upcEanRandomWeightCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanRetryCount(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanRetryCount(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanRetryCount(int upcEanRetryCount, CMethodResult& oResult)
{
    try {
        _runtime->setUpcEanRetryCount(upcEanRetryCount, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanSecurityLevel(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanSecurityLevel(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanSecurityLevel(int upcEanSecurityLevel, CMethodResult& oResult)
{
    try {
        _runtime->setUpcEanSecurityLevel(upcEanSecurityLevel, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanSupplemental2(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanSupplemental2(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanSupplemental2(bool upcEanSupplemental2, CMethodResult& oResult)
{
    try {
        _runtime->setUpcEanSupplemental2(upcEanSupplemental2, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanSupplemental5(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanSupplemental5(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanSupplemental5(bool upcEanSupplemental5, CMethodResult& oResult)
{
    try {
        _runtime->setUpcEanSupplemental5(upcEanSupplemental5, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcEanSupplementalMode(CMethodResult& oResult)
{
    try {
        _runtime->getUpcEanSupplementalMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcEanSupplementalMode(const rho::String& upcEanSupplementalMode, CMethodResult& oResult)
{
        Platform::String^ _upcEanSupplementalMode = rho::common::convertStringToWP8(upcEanSupplementalMode);
    try {
        _runtime->setUpcEanSupplementalMode(_upcEanSupplementalMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpca(CMethodResult& oResult)
{
    try {
        _runtime->getUpca(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpca(bool upca, CMethodResult& oResult)
{
    try {
        _runtime->setUpca(upca, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcaPreamble(CMethodResult& oResult)
{
    try {
        _runtime->getUpcaPreamble(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcaPreamble(const rho::String& upcaPreamble, CMethodResult& oResult)
{
        Platform::String^ _upcaPreamble = rho::common::convertStringToWP8(upcaPreamble);
    try {
        _runtime->setUpcaPreamble(_upcaPreamble, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpcaReportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getUpcaReportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpcaReportCheckDigit(bool upcaReportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setUpcaReportCheckDigit(upcaReportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpce0(CMethodResult& oResult)
{
    try {
        _runtime->getUpce0(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpce0(bool upce0, CMethodResult& oResult)
{
    try {
        _runtime->setUpce0(upce0, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpce0convertToUpca(CMethodResult& oResult)
{
    try {
        _runtime->getUpce0convertToUpca(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpce0convertToUpca(bool upce0convertToUpca, CMethodResult& oResult)
{
    try {
        _runtime->setUpce0convertToUpca(upce0convertToUpca, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpce0preamble(CMethodResult& oResult)
{
    try {
        _runtime->getUpce0preamble(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpce0preamble(const rho::String& upce0preamble, CMethodResult& oResult)
{
        Platform::String^ _upce0preamble = rho::common::convertStringToWP8(upce0preamble);
    try {
        _runtime->setUpce0preamble(_upce0preamble, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpce0reportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getUpce0reportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpce0reportCheckDigit(bool upce0reportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setUpce0reportCheckDigit(upce0reportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpce1(CMethodResult& oResult)
{
    try {
        _runtime->getUpce1(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpce1(bool upce1, CMethodResult& oResult)
{
    try {
        _runtime->setUpce1(upce1, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpce1convertToUpca(CMethodResult& oResult)
{
    try {
        _runtime->getUpce1convertToUpca(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpce1convertToUpca(bool upce1convertToUpca, CMethodResult& oResult)
{
    try {
        _runtime->setUpce1convertToUpca(upce1convertToUpca, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpce1preamble(CMethodResult& oResult)
{
    try {
        _runtime->getUpce1preamble(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpce1preamble(const rho::String& upce1preamble, CMethodResult& oResult)
{
        Platform::String^ _upce1preamble = rho::common::convertStringToWP8(upce1preamble);
    try {
        _runtime->setUpce1preamble(_upce1preamble, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getUpce1reportCheckDigit(CMethodResult& oResult)
{
    try {
        _runtime->getUpce1reportCheckDigit(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setUpce1reportCheckDigit(bool upce1reportCheckDigit, CMethodResult& oResult)
{
    try {
        _runtime->setUpce1reportCheckDigit(upce1reportCheckDigit, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getWebcode(CMethodResult& oResult)
{
    try {
        _runtime->getWebcode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setWebcode(bool webcode, CMethodResult& oResult)
{
    try {
        _runtime->setWebcode(webcode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getWebcodeDecodeGtSubtype(CMethodResult& oResult)
{
    try {
        _runtime->getWebcodeDecodeGtSubtype(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setWebcodeDecodeGtSubtype(bool webcodeDecodeGtSubtype, CMethodResult& oResult)
{
    try {
        _runtime->setWebcodeDecodeGtSubtype(webcodeDecodeGtSubtype, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmModelNumber(CMethodResult& oResult)
{
    try {
        _runtime->getRsmModelNumber(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmSerialNumber(CMethodResult& oResult)
{
    try {
        _runtime->getRsmSerialNumber(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmDateOfManufacture(CMethodResult& oResult)
{
    try {
        _runtime->getRsmDateOfManufacture(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmDateOfService(CMethodResult& oResult)
{
    try {
        _runtime->getRsmDateOfService(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothAddress(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothAddress(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmFirmwareVersion(CMethodResult& oResult)
{
    try {
        _runtime->getRsmFirmwareVersion(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmDeviceClass(CMethodResult& oResult)
{
    try {
        _runtime->getRsmDeviceClass(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBatteryStatus(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBatteryStatus(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBatteryCapacity(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBatteryCapacity(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBatteryId(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBatteryId(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothAuthentication(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothAuthentication(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothAuthentication(bool rsmBluetoothAuthentication, CMethodResult& oResult)
{
    try {
        _runtime->setRsmBluetoothAuthentication(rsmBluetoothAuthentication, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothEncryption(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothEncryption(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothEncryption(bool rsmBluetoothEncryption, CMethodResult& oResult)
{
    try {
        _runtime->setRsmBluetoothEncryption(rsmBluetoothEncryption, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothPinCode(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothPinCode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothPinCode(const rho::String& rsmBluetoothPinCode, CMethodResult& oResult)
{
        Platform::String^ _rsmBluetoothPinCode = rho::common::convertStringToWP8(rsmBluetoothPinCode);
    try {
        _runtime->setRsmBluetoothPinCode(_rsmBluetoothPinCode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothPinCodeType(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothPinCodeType(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothPinCodeType(const rho::String& rsmBluetoothPinCodeType, CMethodResult& oResult)
{
        Platform::String^ _rsmBluetoothPinCodeType = rho::common::convertStringToWP8(rsmBluetoothPinCodeType);
    try {
        _runtime->setRsmBluetoothPinCodeType(_rsmBluetoothPinCodeType, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothReconnectionAttempts(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothReconnectionAttempts(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothReconnectionAttempts(int rsmBluetoothReconnectionAttempts, CMethodResult& oResult)
{
    try {
        _runtime->setRsmBluetoothReconnectionAttempts(rsmBluetoothReconnectionAttempts, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothBeepOnReconnectAttempt(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothBeepOnReconnectAttempt(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothBeepOnReconnectAttempt(bool rsmBluetoothBeepOnReconnectAttempt, CMethodResult& oResult)
{
    try {
        _runtime->setRsmBluetoothBeepOnReconnectAttempt(rsmBluetoothBeepOnReconnectAttempt, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothHidAutoReconnect(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothHidAutoReconnect(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothHidAutoReconnect(const rho::String& rsmBluetoothHidAutoReconnect, CMethodResult& oResult)
{
        Platform::String^ _rsmBluetoothHidAutoReconnect = rho::common::convertStringToWP8(rsmBluetoothHidAutoReconnect);
    try {
        _runtime->setRsmBluetoothHidAutoReconnect(_rsmBluetoothHidAutoReconnect, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothFriendlyName(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothFriendlyName(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothFriendlyName(const rho::String& rsmBluetoothFriendlyName, CMethodResult& oResult)
{
        Platform::String^ _rsmBluetoothFriendlyName = rho::common::convertStringToWP8(rsmBluetoothFriendlyName);
    try {
        _runtime->setRsmBluetoothFriendlyName(_rsmBluetoothFriendlyName, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothInquiryMode(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothInquiryMode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothInquiryMode(const rho::String& rsmBluetoothInquiryMode, CMethodResult& oResult)
{
        Platform::String^ _rsmBluetoothInquiryMode = rho::common::convertStringToWP8(rsmBluetoothInquiryMode);
    try {
        _runtime->setRsmBluetoothInquiryMode(_rsmBluetoothInquiryMode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmBluetoothAutoReconnect(CMethodResult& oResult)
{
    try {
        _runtime->getRsmBluetoothAutoReconnect(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmBluetoothAutoReconnect(const rho::String& rsmBluetoothAutoReconnect, CMethodResult& oResult)
{
        Platform::String^ _rsmBluetoothAutoReconnect = rho::common::convertStringToWP8(rsmBluetoothAutoReconnect);
    try {
        _runtime->setRsmBluetoothAutoReconnect(_rsmBluetoothAutoReconnect, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmForceSavePairingBarcode(CMethodResult& oResult)
{
    try {
        _runtime->getRsmForceSavePairingBarcode(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmForceSavePairingBarcode(bool rsmForceSavePairingBarcode, CMethodResult& oResult)
{
    try {
        _runtime->setRsmForceSavePairingBarcode(rsmForceSavePairingBarcode, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmLowBatteryIndication(CMethodResult& oResult)
{
    try {
        _runtime->getRsmLowBatteryIndication(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmLowBatteryIndication(bool rsmLowBatteryIndication, CMethodResult& oResult)
{
    try {
        _runtime->setRsmLowBatteryIndication(rsmLowBatteryIndication, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmLowBatteryIndicationCycle(CMethodResult& oResult)
{
    try {
        _runtime->getRsmLowBatteryIndicationCycle(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmLowBatteryIndicationCycle(int rsmLowBatteryIndicationCycle, CMethodResult& oResult)
{
    try {
        _runtime->setRsmLowBatteryIndicationCycle(rsmLowBatteryIndicationCycle, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmScanLineWidth(CMethodResult& oResult)
{
    try {
        _runtime->getRsmScanLineWidth(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmScanLineWidth(const rho::String& rsmScanLineWidth, CMethodResult& oResult)
{
        Platform::String^ _rsmScanLineWidth = rho::common::convertStringToWP8(rsmScanLineWidth);
    try {
        _runtime->setRsmScanLineWidth(_rsmScanLineWidth, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmGoodScansDelay(CMethodResult& oResult)
{
    try {
        _runtime->getRsmGoodScansDelay(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmGoodScansDelay(int rsmGoodScansDelay, CMethodResult& oResult)
{
    try {
        _runtime->setRsmGoodScansDelay(rsmGoodScansDelay, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmDecodeFeedback(CMethodResult& oResult)
{
    try {
        _runtime->getRsmDecodeFeedback(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmDecodeFeedback(bool rsmDecodeFeedback, CMethodResult& oResult)
{
    try {
        _runtime->setRsmDecodeFeedback(rsmDecodeFeedback, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmIgnoreCode128Usps(CMethodResult& oResult)
{
    try {
        _runtime->getRsmIgnoreCode128Usps(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmIgnoreCode128Usps(bool rsmIgnoreCode128Usps, CMethodResult& oResult)
{
    try {
        _runtime->setRsmIgnoreCode128Usps(rsmIgnoreCode128Usps, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmScanTriggerWakeup(CMethodResult& oResult)
{
    try {
        _runtime->getRsmScanTriggerWakeup(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmScanTriggerWakeup(bool rsmScanTriggerWakeup, CMethodResult& oResult)
{
    try {
        _runtime->setRsmScanTriggerWakeup(rsmScanTriggerWakeup, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmMems(CMethodResult& oResult)
{
    try {
        _runtime->getRsmMems(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmMems(bool rsmMems, CMethodResult& oResult)
{
    try {
        _runtime->setRsmMems(rsmMems, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmProximityEnable(CMethodResult& oResult)
{
    try {
        _runtime->getRsmProximityEnable(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmProximityEnable(bool rsmProximityEnable, CMethodResult& oResult)
{
    try {
        _runtime->setRsmProximityEnable(rsmProximityEnable, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmProximityContinuous(CMethodResult& oResult)
{
    try {
        _runtime->getRsmProximityContinuous(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmProximityContinuous(bool rsmProximityContinuous, CMethodResult& oResult)
{
    try {
        _runtime->setRsmProximityContinuous(rsmProximityContinuous, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmProximityDistance(CMethodResult& oResult)
{
    try {
        _runtime->getRsmProximityDistance(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmProximityDistance(const rho::String& rsmProximityDistance, CMethodResult& oResult)
{
        Platform::String^ _rsmProximityDistance = rho::common::convertStringToWP8(rsmProximityDistance);
    try {
        _runtime->setRsmProximityDistance(_rsmProximityDistance, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmPagingEnable(CMethodResult& oResult)
{
    try {
        _runtime->getRsmPagingEnable(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmPagingEnable(bool rsmPagingEnable, CMethodResult& oResult)
{
    try {
        _runtime->setRsmPagingEnable(rsmPagingEnable, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getRsmPagingBeepSequence(CMethodResult& oResult)
{
    try {
        _runtime->getRsmPagingBeepSequence(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::setRsmPagingBeepSequence(int rsmPagingBeepSequence, CMethodResult& oResult)
{
    try {
        _runtime->setRsmPagingBeepSequence(rsmPagingBeepSequence, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::enable(const rho::Hashtable<rho::String, rho::String>& propertyMap, CMethodResult& oResult)
{
        Windows::Foundation::Collections::IMapView<Platform::String^, Platform::String^>^ _propertyMap = rho::common::convertHashToWP8(propertyMap);
    try {
        _runtime->enable(_propertyMap, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::registerBluetoothStatus(CMethodResult& oResult)
{
    try {
        _runtime->registerBluetoothStatus(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::start(CMethodResult& oResult)
{
    try {
        _runtime->start(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::stop(CMethodResult& oResult)
{
    try {
        _runtime->stop(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::disable(CMethodResult& oResult)
{
    try {
        _runtime->disable(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::barcode_recognize(const rho::String& imageFilePath, CMethodResult& oResult)
{
        Platform::String^ _imageFilePath = rho::common::convertStringToWP8(imageFilePath);
    try {
        _runtime->barcode_recognize(_imageFilePath, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::getSupportedProperties(CMethodResult& oResult)
{
    try {
        _runtime->getSupportedProperties(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::take(const rho::Hashtable<rho::String, rho::String>& propertyMap, CMethodResult& oResult)
{
        Windows::Foundation::Collections::IMapView<Platform::String^, Platform::String^>^ _propertyMap = rho::common::convertHashToWP8(propertyMap);
    try {
        _runtime->take(_propertyMap, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::take_barcode(const rho::String& rubyCallbackURL, const rho::Hashtable<rho::String, rho::String>& propertyMap, CMethodResult& oResult)
{
        Platform::String^ _rubyCallbackURL = rho::common::convertStringToWP8(rubyCallbackURL);
        Windows::Foundation::Collections::IMapView<Platform::String^, Platform::String^>^ _propertyMap = rho::common::convertHashToWP8(propertyMap);
    try {
        _runtime->take_barcode(_rubyCallbackURL, _propertyMap, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void CBarcodeChainwayImpl::commandRemoteScanner(const rho::String& command, CMethodResult& oResult)
{
        Platform::String^ _command = rho::common::convertStringToWP8(command);
    try {
        _runtime->commandRemoteScanner(_command, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}


class CBarcodeChainwaySingleton: public CBarcodeChainwaySingletonBase
{
private:
    IBarcodeChainwaySingletonImpl^ _runtime;
public:
    CBarcodeChainwaySingleton(IBarcodeChainwaySingletonImpl^ runtime): CBarcodeChainwaySingletonBase(), _runtime(runtime) {}
    ~CBarcodeChainwaySingleton(){}

    virtual void enumerate(CMethodResult& oResult)
    {
        try {
            _runtime->enumerate(ref new CMethodResultImpl((int64)&oResult));
        } catch (Platform::Exception^ e) {
            LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
        }
    }


    virtual rho::String getDefaultID(){return "1";} // TODO: implement getDefaultID
    virtual rho::String getInitialDefaultID(){return "1";} // TODO: implement getInitialDefaultID
    virtual void setDefaultID(const rho::String& strID){} // TODO: implement setDefaultID
    
    //virtual void addCommandToQueue(rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor){} // TODO: implement addCommandToQueue
    //virtual void callCommandInThread(rho::common::IRhoRunnable* pFunctor){} // TODO: implement callCommandInThread
};

IBarcodeChainwayFactoryImpl^ CBarcodeChainwayFactory::_impl;

IBarcodeChainway* CBarcodeChainwayFactory::createModuleByID(const rho::String& strID)
{
    return new CBarcodeChainwayImpl(strID, _impl->getImpl(rho::common::convertStringToWP8(strID)));
}

IBarcodeChainwaySingleton* CBarcodeChainwayFactory::createModuleSingleton()
{
    return new CBarcodeChainwaySingleton(_impl->getSingletonImpl());
}

}

extern "C" void Init_BarcodeChainway_extension()
{
    rho::CBarcodeChainwayFactory::setInstance( new rho::CBarcodeChainwayFactory() );
    rho::Init_BarcodeChainway_API();

    RHODESAPP().getExtManager().requireRubyFile("RhoBarcodeChainwayApi");
}
