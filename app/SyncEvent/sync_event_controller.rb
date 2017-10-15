require 'rho/rhocontroller'
require 'helpers/browser_helper'
require 'date'

class SyncEventController < Rho::RhoController
  include BrowserHelper

  # GET /SyncEvent
  def index
    @sync_events = SyncEvent.find(:all)
    render :back => '/app'
  end

  # GET /SyncEvent/{1}
  def show
    @sync_event = SyncEvent.find(@params['id'])
    if @sync_event
      render :action => :show, :back => url_for(:action => :index)
    else
      redirect :action => :index
    end
  end

  # GET /SyncEvent/new
  def new
    @sync_event = SyncEvent.new
    render :action => :new, :back => url_for(:action => :index)
  end

  # GET /SyncEvent/{1}/edit
  def edit
    @sync_event = SyncEvent.find(@params['id'])
    if @sync_event
      render :action => :edit, :back => url_for(:action => :index)
    else
      redirect :action => :index
    end
  end

  # POST /SyncEvent/create
  def create
    @sync_event = SyncEvent.create(@params['sync_event'])
    redirect :action => :index
  end

  # POST /SyncEvent/{1}/update
  def update
    @sync_event = SyncEvent.find(@params['id'])
    @sync_event.update_attributes(@params['sync_event']) if @sync_event
    redirect :action => :index
  end

  # POST /SyncEvent/{1}/delete
  def delete
    @sync_event = SyncEvent.find(@params['id'])
    @sync_event.destroy if @sync_event
    redirect :action => :index  
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
