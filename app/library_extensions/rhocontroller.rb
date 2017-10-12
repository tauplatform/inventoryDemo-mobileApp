class Rho::RhoController
  def scanner
    Rho::Barcode.getDefault()
  end

  def scanner_camera?
    scanner.camera?
  end
end

