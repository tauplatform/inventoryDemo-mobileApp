# The model has already been created by the framework, and extends Rhom::RhomObject
# You can add more methods here
class Report
  include Rhom::PropertyBag

  # Uncomment the following line to enable sync with Report.
   enable :sync

  #add model specific code here
  property :picture0Uri, :blob, :overwrite
  property :picture1Uri, :blob, :overwrite
  property :signatureUri, :blob, :overwrite
end
