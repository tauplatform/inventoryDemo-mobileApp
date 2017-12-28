require 'rho'
require 'rho/rhocontroller'
require 'rho/rhoerror'
require 'helpers/browser_helper'

class LoginController < Rho::RhoController
  include BrowserHelper

  def index
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

  def do_login
    puts "@params #{@params}"
    login = @params['login']
    password = @params['password']
    Rho::WebView.executeJavascript("$('.page').trigger('spinnerOn');")
    Rho::RhoConnectClient.login(login, '', url_for(:action => :login_callback))
  end

end
