require 'rho/rhoapplication'

class AppApplication < Rho::RhoApplication
  def initialize
    # Tab items are loaded left->right, @tabs[0] is leftmost tab in the tab-bar
    # Super must be called *after* settings @tabs!
    @tabs = nil
    # @default_menu = {}

    #To remove default toolbar uncomment next line:


    if System::get_property('platform') == 'APPLE'
        toolbarz = [
          {:action => :back,    :icon => '/public/images/back_btn.png'},
          {:action => :separator},
          {:action => :home,    :icon => '/public/images/home_btn.png'},
          {:action => "app/Settings/do_sync",    :icon => '/public/images/sync_btn.png'},
          {:action => :refresh },
          {:action => :options,    :icon => '/public/images/gears.png'}
        ]
      @@toolbar = toolbarz
    else
        @@toolbar = nil
    end

    super


    # Uncomment to set sync notification callback to /app/Settings/sync_notify.
     #Rho::RhoConnectClient.setObjectNotification("/app/Settings/sync_notify")
     Rho::RhoConnectClient.setNotification('*', "/app/Settings/sync_notify", '')


  end
end
