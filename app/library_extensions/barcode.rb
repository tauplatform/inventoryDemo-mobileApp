module Rho
  class Barcode
    def identifier
      if self.scannerType.to_s.length != 0
        type = self.scannerType
      else
        type = 'no type'
      end

      if self.friendlyName.to_s.length != 0
        friendlyName = self.friendlyName
      else
        friendlyName = 'no friendly name'
      end
      "#{type} (#{friendlyName})"
    end

    def camera?
      self.scannerType == 'Camera'
    end
  end
end