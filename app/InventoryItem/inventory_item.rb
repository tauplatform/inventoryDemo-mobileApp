# The model has already been created by the framework, and extends Rhom::RhomObject
# You can add more methods here
class InventoryItem
  include Rhom::PropertyBag

  #add model specific code here
  property :photoUri, :blob, :overwrite
  property :signatureUri, :blob, :overwrite
end
