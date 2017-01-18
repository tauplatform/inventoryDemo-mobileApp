require 'rho/rhocontroller'
require 'helpers/browser_helper'

class MainController < Rho::RhoController
  include BrowserHelper

  def index
    unless Rho::RhoConnectClient.isLoggedIn()
      Rho::WebView.navigate('/app/Login/')
    end

  end
end