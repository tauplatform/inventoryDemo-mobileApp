require 'helpers/browser_helper'

class Rho::RhoController

  def scanner
    Rho::Barcode.getDefault()
  end

  def scanner_camera?
    scanner.camera?
  end

  def has_scanner?
    false
  end

  def has_camera?
    false
  end

  def has_signature?
    false
  end

end

