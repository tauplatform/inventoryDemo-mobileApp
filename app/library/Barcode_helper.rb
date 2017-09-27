module Inventory
  class BarcodeHelper
    def self.config_property_name
      'selected_barcode_scanner'
    end

    def self.saved_scanner_identifier?
      Rho::Config.isPropertyExists(self.config_property_name)
    end

    def self.saved_scanner_identifier
      return nil unless self.saved_scanner_identifier?
      Rho::Config.getPropertyString(self.config_property_name)
    end

    def self.available_scanners
      Rho::Barcode.enumerate
    end

    def self.scanner_selected?(scanner)
      return false unless saved_scanner_identifier?
      scanner.identifier == self.saved_scanner_identifier
    end

    def self.save_scanner_identifier(aString)
      Rho::Config.setPropertyString(self.config_property_name, aString, true)
    end

    def self.select_scanner(scanner)
      self.save_scanner_identifier scanner.identifier
      Rho::Barcode.setDefault(scanner)
    end

    def self.scanner_by_identifier(aString)
      self.available_scanners.find {|each| each.identifier == aString}
    end

    def self.has_selected_scanner?
      self.saved_scanner_identifier? #&& (Rho::Barcode.getDefault.identifier == self.saved_scanner_identifier)
    end

    def self.scanner_not_selected_yet?
      !self.has_selected_scanner?
    end
  end
end