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

  def login
    @msg = @params['msg']
    render :action => :login
  end

   def reset
    render :action => :reset
  end

  def do_reset
    Rhom::Rhom.database_full_reset
    @msg = "Database has been reset."
    redirect :action => :index, :query => {:msg => @msg}
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
