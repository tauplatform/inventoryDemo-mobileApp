require 'rho/rhoapplication'

class AppApplication < Rho::RhoApplication
  def initialize
    # Tab items are loaded left->right, @tabs[0] is leftmost tab in the tab-bar
    # Super must be called *after* settings @tabs!
    @tabs = nil
    # @default_menu = {}

    #To remove default toolbar uncomment next line:
    @@toolbar = nil

    super

    # Uncomment to set sync notification callback to /app/Settings/sync_notify.
    #Rho::RhoConnectClient.setObjectNotification("/app/Settings/sync_notify")
    # we should remove all saved login info when application start - user should enter login info again
    Rho::RhoConnectClient.logout
    Rho::RhoConnectClient.setNotification('*', "/app/Settings/sync_notify")

=begin
    Rho::Application.setApplicationNotify( 
        -> (x) {
            if (x['applicationEvent']==Rho::Application::APP_EVENT_ACTIVATED)
              timer = Rho::Timer.create
              timer.start(5000, -> (x) {
                Rho::Barcode.getDefault.enable({},'/app/InventoryItem/barcode_scanner_callback' )
                timer.stop
              })
            end
        } )
  end
=end

end
