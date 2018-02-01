require 'rho'
require 'rho/rhocontroller'
require 'rho/rhoerror'
require 'helpers/browser_helper'

class LoginController < Rho::RhoController
  include BrowserHelper

  def index
    begin
      scanner.enable({}, url_for(:action => :scanner_callback));
    end unless scanner_camera?
    #Rho::RhoConnectClient.login('Sara J. Connor', '', url_for(:action => :login_callback))
    render
  end

  def login_callback
    Rho::WebView.executeJavascript("$('.page').trigger('spinnerOff');")
    err_code = @params['error_code'].to_i
    if err_code == 0
      Rho::WebView.navigate 'app/InventoryItem'
    else
      if err_code == Rho::RhoError::ERR_CUSTOMSYNCSERVER
        reason = @params['error_message']
      end
      if !reason || reason.length == 0
        reason = Rho::RhoError.new(err_code).message
      end
      Rho::WebView.executeJavascript("$('.page').trigger('loginFeedback', [#{reason}]);")
    end
  end

  def scanner_callback
    if scanner_camera?
      if @params['status'] == 'ok'
        barcode = @params['barcode']
      else
        Rho::WebView.executeJavascript("$('.page').trigger('loginFeedback', ['Scan was cancelled']);")
        return
      end
    else
      barcode = @params['data']
    end
    Rho::WebView.navigate 'app/InventoryItem'
    #Rho::WebView.executeJavascript("$('.page').trigger('spinnerOn');")
    #Rho::RhoConnectClient.login(barcode, '', url_for(:action => :login_callback))
  end

  def scan_by_camera
    Rho::Barcode.take({}, url_for(:action => :scanner_callback))
  end

end
