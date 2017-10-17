require 'rho/rhocontroller'
require 'helpers/browser_helper'

class InventoryItemController < Rho::RhoController
  include BrowserHelper

  def hardware_scanner_selected?
    if Rho.const_defined?(:Barcode)
      return false if Rho::System.platform == Rho::System::PLATFORM_IOS
      return Rho::Barcode.getDefault.scannerType != 'Camera'
    end
    return false
  end

  def scanner_callback
    if scanner_camera?
      if @params['status'] == 'ok'
        upc = @params['barcode']
      else
        return
      end
    else
      upc = @params['data']
    end
    Rho::WebView.executeJavascript("$('.page').trigger('spinnerOn');")
    item = InventoryItem.find(:first, :conditions => {:upc => upc})
    Rho::WebView.executeJavascript("$('.page').trigger('spinnerOff');")
    if item.nil?
      WebView.navigate url_for :action => :new, :query => {:upc => upc}
    else
      WebView.navigate url_for :action => :show, :id => item.object
    end

  end

  def index
    begin
      scanner.enable({}, url_for(:action => :scanner_callback));
    end unless scanner_camera?

    @inventoryItems = InventoryItem.find(:all)
    # @inventoryItems = (1..100).collect { |each| InventoryItem.new(:productName => each.to_s) }
    render
  end

  def scan_by_camera
    Rho::Barcode.take({}, url_for(:action => :scanner_callback))
  end

  def do_back
    Rho::WebView.navigateBack()
  end

  def do_search
    query = "%#{@params['query']}%"
    @inventoryItems = InventoryItem.find(:all,
                                         :conditions => {
                                             {
                                                 :func => 'UPPER',
                                                 :name => 'productName',
                                                 :op => 'LIKE'
                                             } => query,
                                             {
                                                 :func => 'UPPER',
                                                 :name => 'upc',
                                                 :op => 'LIKE'
                                             } => query,
                                         },
                                         :op => 'OR')
    html = render(partial: 'item_list', locals: {:items => @inventoryItems})
    render string: ::JSON.generate({html: html})
  end

  def get_items
    @inventoryItems = InventoryItem.find(:all)
    html = render(partial: 'item_list', locals: {:items => @inventoryItems})
    render string: ::JSON.generate({html: html})
  end

  def show
    @inventoryItem = InventoryItem.find(@params['id'])
    if @inventoryItem
      render :action => :show, :back => url_for(:action => :index)
    else
      redirect :action => :index
    end
  end

  def photo_view
    @inventoryItem = InventoryItem.find(@params['id'])
    render :action => :photo_view, :back => url_for(:action => :index)
  end

  def new
    @inventoryItem = InventoryItem.new
    render :action => :new, :back => url_for(:action => :index)
  end

  def edit
    @inventoryItem = InventoryItem.find(@params['id'])
    if @inventoryItem
      render :action => :edit, :back => url_for(:action => :index)
    else
      redirect :action => :index
    end
  end

  def create
    data = {}
    data['upc'] = @params['inventoryItem']['upc']
    data['productName'] = @params['inventoryItem']['productName']
    data['quantity'] = @params['inventoryItem']['quantity']
    data['employeeId'] = @params['inventoryItem']['employeeId']
    data['photoUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['inventoryItem']['photoUri'])
    data['signatureUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['inventoryItem']['signatureUri'])
    @inventoryItem = InventoryItem.create(data)
    redirect :action => :index
  end

  def update
    @inventoryItem = InventoryItem.find(@params['id'])

    data = {}
    data['upc'] = @params['inventoryItem']['upc']
    data['productName'] = @params['inventoryItem']['productName']
    data['quantity'] = @params['inventoryItem']['quantity']
    data['employeeId'] = @params['inventoryItem']['employeeId']
    data['photoUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['inventoryItem']['photoUri'])
    data['signatureUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['inventoryItem']['signatureUri'])
    @inventoryItem.update_attributes(data) if @inventoryItem
    redirect :action => :index
  end

  def delete
    @inventoryItem = InventoryItem.find(@params['id'])
    @inventoryItem.destroy if @inventoryItem
    redirect :action => :index
  end

  def scan_barcode
    Rho::Barcode.take({}, url_for(:action => :barcode_callback))
  end

end
