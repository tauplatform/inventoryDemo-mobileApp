require 'rho/rhocontroller'
require 'helpers/browser_helper'

class LoginController < Rho::RhoController
  include BrowserHelper

  def index
    @msg = @params['msg']
    render
  end

  def sign_in_callback
    errCode = @params['error_code'].to_i
    if errCode == 0
      # run sync if we were successful
      puts "error code #{errCode}";
      Rho::WebView.navigate('/app/InventoryItem/')
      Rho::RhoConnectClient.doSync()
    else
      if errCode == Rho::RhoError::ERR_CUSTOMSYNCSERVER
        @msg = @params['error_message']
      end

      if !@msg || @msg.length == 0
        @msg = Rho::RhoError.new(errCode).message
      end

      Rho::WebView.navigate (url_for :action => :index, :query => {:msg => @msg})
    end
  end

  def sign_in
    if @params['login'] and @params['password']
      begin
        Rho::RhoConnectClient.login(@params['login'], @params['password'], (url_for :action => :sign_in_callback))
        @response['headers']['Wait-Page'] = 'true'
        render :action => :wait
      rescue Rho::RhoError => e
        @msg = e.message
        render :action => :index
      end
    else
      @msg = Rho::RhoError.err_message(Rho::RhoError::ERR_UNATHORIZED) unless @msg && @msg.length > 0
      render :action => :index
    end
  end

end
