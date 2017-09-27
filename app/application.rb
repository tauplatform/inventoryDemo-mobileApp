require 'rho/rhoapplication'
require 'library_extensions/barcode'
require 'library/Barcode_helper'

class AppApplication < Rho::RhoApplication

  def initialize
    # Tab items are loaded left->right, @tabs[0] is leftmost tab in the tab-bar
    # Super must be called *after* settings @tabs!
    @tabs = nil
    # @default_menu = {}

    #To remove default toolbar uncomment next line:
    @@toolbar = nil


    # Rho::Application.setApplicationNotify(lambda do |callback_data; event_type, event_data |
    #   event_type = callback_data['applicationEvent']
    #   # eventData is present only for APP_EVENT_CONFIGCONFLICT, and must be omitted from
    #   # processApplicationEvent if not present
    #   event_data = callback_data.include?('eventData') ? callback_data['eventData'] : nil
    #
    #   case event_type
    #     when Rho::Application::APP_EVENT_ACTIVATED        then     on_activate_app
    #     when Rho::Application::APP_EVENT_DEACTIVATED      then     on_deactivate_app
    #     when Rho::Application::APP_EVENT_UICREATED        then     on_ui_created
    #     when Rho::Application::APP_EVENT_UIDESTROYED      then     on_ui_destroyed
    #     when Rho::Application::APP_EVENT_SCREEN_OFF
    #     when Rho::Application::APP_EVENT_SCREEN_ON
    #     when Rho::Application::APP_EVENT_SYNCUSERCHANGED
    #     when Rho::Application::APP_EVENT_CONFIGCONFLICT   then     on_reinstall_config_update event_data
    #     when Rho::Application::APP_EVENT_DBMIGRATESOURCE  then     on_migrate_source
    #     else
    #       Rho::Log.warning("Unknown Application event: #{event_type}", 'APP')
    #   end # case event_type
    #
    #   if event_data
    #     Rho::Application.processApplicationEvent event_type, event_data
    #   else
    #     Rho::Application.processApplicationEvent event_type
    #   end
    # end # lambda
    # )


    super

    # Uncomment to set sync notification callback to /app/Settings/sync_notify.
    #Rho::RhoConnectClient.setObjectNotification("/app/Settings/sync_notify")
    # we should remove all saved login info when application start - user should enter login info again
    Rho::RhoConnectClient.logout
    Rho::RhoConnectClient.setNotification('*', "/app/Settings/sync_notify")
  end

  # on_ui_created will be invoked after application’s UI was created (usually on app start)
  # this method should not do any WebView operations which are reserved for on_activate_app
  def on_ui_created
    Rho::Log.warning('on_ui_created', 'APP')
    super
  end

  # on_ui_destroyed will be invoked when application’s UI was destroyed (usually on app exit)
  # On iPhone, on_ui_destroyed invoked when also when application goes to background, because if application killed in
  # background by user (via multitasking UI) then no any events sended to application. So if you want save state of your
  # application, you can do it in on_ui_destoyed, but keep in mind – is just save – do not process destroy of your UI in this method
  def on_ui_destroyed
    Rho::Log.warning('on_ui_destroyed', 'APP')
    super
  end

  # on_activate_app will be invoked after application is activated (comes to foreground from background).
  # NOTE, the OS may destroy the UI to save memory in which case we get
  # on_ui_destroyed     -> called when OS destroy app's UI
  # on_ui_created       -> called just after user request system activate
  #                        app (for example, tap app's icon on screen)
  # on_activate_app     -> called when app goes to foreground
  def on_activate_app
    Rho::Log.warning('on_activate_app', 'APP')
   if Inventory::BarcodeHelper.scanner_not_selected_yet?
     WebView.navigate '/app/Settings/scanner_selection'
   else
     WebView.navigate Rho::Config.getPropertyString('start_path')
   end

  end

  # on_deactivate_app will be invoked before application goes to background.
  # Note: docs say "not supported on iOS". Is that really true?
  def on_deactivate_app
    Rho::Log.warning('on_deactivate_app', 'APP')
    super
  end

  # Method on_reinstall_config_update may be called after application was upgraded. If application bundle
  # contain rhoconfig with properties modified locally on the phone conflicts is a hash name to array of
  # conflicted values(old local value, new upgrade value). By default local values are kept in place but
  # you may overwrite configuration with new values and any other steps required for your application upgrade
  def on_reinstall_config_update(conflicts)
    Rho::Log.warning('on_reinstall_config_update', 'APP')
    super
  end

  def on_migrate_source(old_version, new_src)
    Rho::Log.warning('on_migrate_source', 'APP')
    true # does not create table

  end
end
