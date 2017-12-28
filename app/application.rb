require 'rho/rhoapplication'

class AppApplication < Rho::RhoApplication

  def initialize
    @tabs = nil
    @@toolbar = nil

    super

    # we should remove all saved login info when application start - user should enter login info again
    Rho::RhoConnectClient.logout
    Rho::RhoConnectClient.setNotification('*', "/app/SyncEvent/sync_notify")
  end

end
