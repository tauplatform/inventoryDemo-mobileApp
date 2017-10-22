require 'rho/rhocontroller'
require 'helpers/browser_helper'
require 'date'

class SyncEventController < Rho::RhoController
  include BrowserHelper

  # GET /SyncEvent
  def index
    @sync_events = SyncEvent.find(:all)
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





end
