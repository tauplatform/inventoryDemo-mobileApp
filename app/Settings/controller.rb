require 'rho'
require 'rho/rhocontroller'
require 'rho/rhoerror'
require 'helpers/browser_helper'

class SettingsController < Rho::RhoController
  include BrowserHelper

  def index
    @msg = @params['msg']
    render
  end

  def do_back
    Rho::WebView.navigateBack()
  end

  def scanner_selection
    @msg = @params['msg']
    render :action => :scanner_selection
  end

  def scanners
    Inventory::BarcodeHelper.available_scanners
  end

  def saved_scanner_identifier
    Inventory::BarcodeHelper.saved_scanner_identifier
  end

  def saved_scanner_identifier?
    Inventory::BarcodeHelper.saved_scanner_identifier?
  end

  def scanner_selected?(scanner)
    Inventory::BarcodeHelper.scanner_selected? scanner
  end

  def do_select_scanner
    identifier = @params['identifier']
    selected_scanner = Inventory::BarcodeHelper.scanner_by_identifier identifier
    Inventory::BarcodeHelper.select_scanner selected_scanner

    html = render partial: 'scanner_item', collection: self.scanners
    render string: ::JSON.generate({html: html})

  end

  def barcodeScannerChoosed(scanner)
    puts "Rho::Barcode.getDefault.friendlyName #{Rho::Barcode.getDefault.friendlyName}"
    if Rho::Config.isPropertyExists(@barcode_scanner_property_name)
      selected_name = Rho::Config.getPropertyString(@barcode_scanner_property_name)
      return scanner.friendlyName.to_s == selected_name ? 'selected' : ''
    end
    scanner.friendlyName== Rho::Barcode.getDefault.friendlyName ? 'selected' : ''
  end

  def login
    @msg = @params['msg']
    render :action => :login
  end

  def login_callback
    errCode = @params['error_code'].to_i
    if errCode == 0
      Rho::WebView.navigate Rho::Application.startURI
    else
      if errCode == Rho::RhoError::ERR_CUSTOMSYNCSERVER
        @msg = @params['error_message']
      end

      if !@msg || @msg.length == 0
        @msg = Rho::RhoError.new(errCode).message
      end
      Rho::WebView.navigate (url_for :action => :login, :query => {:msg => @msg})
    end
  end

  def do_login
    if @params['login'] and @params['password']
      begin
        @@login = @params['login']
        @@password = @params['password']
        @response['headers']['Wait-Page'] = 'true'
        render :action => :wait_login
      rescue Rho::RhoError => e
        @msg = e.message
        render :action => :login
      end
    else
      @msg = Rho::RhoError.err_message(Rho::RhoError::ERR_UNATHORIZED) unless @msg && @msg.length > 0
      render :action => :login
    end
  end

  def logout
    Rho::RhoConnectClient.logout
    @msg = "You have been logged out."
    Rho::WebView.navigate Rho::Application.startURI
  end

  def reset
    render :action => :reset
  end

  def do_reset
    Rhom::Rhom.database_full_reset
    Rho::RhoConnectClient.doSync
    @msg = "Database has been reset."
    redirect :action => :index, :query => {:msg => @msg}
  end

  def do_sync
    #Rho::RhoConnectClient.doSync
    @msg = "Sync has been triggered."
    redirect :action => :wait, :query => {:msg => @msg}
  end

  def execute_sync
    puts "execute.sync !"
    # executed from wait webpage - do not execute it manually !
    Rho::RhoConnectClient.doSync
  end

  def execute_login
    # executed from wait_login webpage - do not execute it manually !
    #puts "execute_login with ["+@@login.to_s+"]:["+@@password.to_s+"]"
    Rho::RhoConnectClient.login(@@login, @@password, (url_for :action => :login_callback))
    @@login = nil
    @@password = nil
  end

  def do_quit
    Rho::Application.quit()
  end

  def sync_notify
    puts("Settings.sync_notify params="+@params.to_json);
    cmd = @params.to_json
    # can not use gsub because _'_ is special command symbol for gsub !
    cmd = cmd.split("'").join("\\'")
    cmd = "addNotification('#{cmd}');"
    puts(cmd)
    Rho::WebView.executeJavascript(cmd)
    if (@params["status"] == "error") && (@params["error_code"] == "7")
      #user is not logged in
      Rho::RhoConnectClient.logout
    end
  end

  def open_tau_website
    Rho::System.openUrl("http://tau-technologies.com")
  end

  def wizard_introduction
    render :action => :wizard_introduction
  end

  def wizard_scanner_selection
    render :action => :wizard_scanner_selection
  end

end
