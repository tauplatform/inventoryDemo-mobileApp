require 'rho/rhocontroller'
require 'date'

class StateController < Rho::RhoController
  include BrowserHelper

  # Is the app logged in the RhoConnect server
  def logged
    logged = Rho::RhoConnectClient.isLoggedIn()
    render string: ::JSON.generate({result: logged})
  end

  def sync_state
    event = SyncEvent.find(:first, :order => 'created_at', :orderdir => 'DESC')
    begin
      render string: ::JSON.generate({state: 'error', msg: 'sync not happened yet'})
      return
    end if event.nil?

    if event.state == 'start'
      # Rho::WebView.executeJavascript('$("body").trigger("onSyncStarted");')
      render string: ::JSON.generate({state: 'onSyncStarted'})
      return
    end

    if event.state == 'in_progress'
      #Rho::WebView.executeJavascript("$('body').trigger('onSyncSourceInProgress', '#{self.source_name}');")
      render string: ::JSON.generate({state: 'onSyncSourceInProgress', msg: '#{event.source_name}'})
      return
    end

    if event.state == 'ok'
      #Rho::WebView.executeJavascript("$('body').trigger('onSyncSourceCompleted', '#{self.source_name}');")
      render string: ::JSON.generate({state: 'onSyncSourceCompleted', msg: '#{event.source_name}'})
      return
    end

    if event.state == 'complete'
      #Rho::WebView.executeJavascript("$('body').trigger('onSyncCompleted', '#{formatted_time}');")
      render string: ::JSON.generate({state: 'onSyncCompleted', msg: '#{event.formatted_time}'})
      return
    end

    if event.state == 'error'
      #Rho::WebView.executeJavascript("$('body').trigger('onSyncError');")
      render string: ::JSON.generate({state: 'onSyncError'})
      return #
    end


    render string: ::JSON.generate({error: 'sync not happened yet'})
  end

  def state

    data = {rhoConnect: {logged: Rho::RhoConnectClient.isLoggedIn()}}

    event = SyncEvent.find(:first, :order => 'created_at', :orderdir => 'DESC')
    if event
      data[:rhoConnect][:sync] = {state: event.state, description: event.description, sourceName: event.sourceName, timestamp: event.created_at}
    end

    render string: ::JSON.generate(data)
  end

end
