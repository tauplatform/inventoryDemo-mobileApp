require 'helpers/browser_helper'

class Rho::RhoController

  def scanner
    Rho::Barcode.getDefault()
  end

  def scanner_camera?
    scanner.camera?
  end

  def has_scanner?
    puts "##### has_scanner? #{Inventory::BarcodeHelper.barcode_scanner_available? && Inventory::BarcodeHelper.has_selected_scanner?}"
    return Inventory::BarcodeHelper.barcode_scanner_available? && Inventory::BarcodeHelper.has_selected_scanner?
  end

  def has_camera?
    puts "##### has_camera? #{Rho.const_defined?(:Camera)}"
    return Rho.const_defined?(:Camera)
  end

  def has_signature?
    puts "##### has_signature?? #{ Rho.const_defined?(:Signature)}"
    return  Rho.const_defined?(:Signature)
  end

end

