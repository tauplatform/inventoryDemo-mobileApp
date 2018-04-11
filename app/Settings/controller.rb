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
    if Rho::Config.isPropertyExists(@barcode_scanner_property_name)
      selected_name = Rho::Config.getPropertyString(@barcode_scanner_property_name)
      return scanner.friendlyName.to_s == selected_name ? 'selected' : ''
    end
    scanner.friendlyName== Rho::Barcode.getDefault.friendlyName ? 'selected' : ''
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
    @msg = "Database has been reset."
    redirect :action => :index, :query => {:msg => @msg}
  end

  def do_sync
    data = {}
    data[:created_at] = Time.now()
    data[:state] = 'start'
    data[:source_name] = 'Sync'
    event = SyncEvent.create(data)
    event.notify_UI
    Rho::RhoConnectClient.doSync
  end

  def do_quit
    Rho::Application.quit()
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
