class Rho::RhoController

  def scanner
    Rho::BarcodeChainway.getDefault()
  end

  def scanner_camera?
    scanner.camera?
  end

  def has_scanner?
    Rho::System.isEmulator ? false : true
  end

end

