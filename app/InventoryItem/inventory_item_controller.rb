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

  def barcode_scanner_callback
    unless @params['data'].nil?
      item = InventoryItem.find(:first, :conditions => {'upc' => @params['data']})
      if item.nil?
#        WebView.navigate url_for :action => :new, :upc => @params['data']
        WebView.navigate url_for :action => :new, :query => {:upc => @params['data']}
      else
        WebView.navigate url_for :action => :show, :id => item.object
      end
    end
  end

  def index
    if Rho.const_defined?(:Barcode)
      if self.hardware_scanner_selected?
        Rho::Barcode.getDefault.enable({}, url_for(:action => :barcode_scanner_callback))
      end
    end

    @inventoryItems = InventoryItem.find(:all)
    # @inventoryItems = (1..100).collect { |each| InventoryItem.new(:productName => each.to_s) }
    render
  end

  def do_back
    Rho::WebView.navigateBack()
  end

  def show
    @inventoryItem = InventoryItem.find(@params['id'])
    if @inventoryItem
      render :action => :show, :back => url_for(:action => :index)
    else
      redirect :action => :index
    end
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
