require 'rho/rhocontroller'
require 'helpers/browser_helper'
require 'date'

class SyncEventController < Rho::RhoController
  include BrowserHelper

  # GET /SyncEvent
  def index
    @sync_events = SyncEvent.find(:all, :order => 'created_at', :orderdir => 'DESC')
    render
  end

  def last_sync_event
    event = SyncEvent.find(:first, :order => 'created_at', :orderdir => 'DESC')
    begin
      Rho::WebView.executeJavascript("$('body').trigger('onSyncHasNotHappenedYet');")
      return
    end if event.nil?

    event.notify_UI
  end

  def sync_notify
    data = {}
    data[:created_at] = Time.now()
    data[:state] = @params['status']

    case data[:state]
      when 'error'
        data[:error_code] = @params['error_code']
        data[:source_name] = 'Sync'
      when 'complete'
        data[:source_name] = 'Sync'
      else
        data[:source_name] = @params['source_name']
    end
    event = SyncEvent.create(data)
    event.notify_UI
  end


end
