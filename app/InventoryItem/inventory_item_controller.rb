require 'rho/rhocontroller'
require 'helpers/browser_helper'

class InventoryItemController < Rho::RhoController
  include BrowserHelper


  def items
    items = InventoryItem.find(:all)
    puts "#{items[0]}"
    items = items.collect { |each| each.to_json }
    render :string => "[#{items.join(', ')}]"
  end

  def item
    item = InventoryItem.find(@params['id'])
    render :string => item.to_json
  end

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
    render(partial: 'item_list', locals: {:items => @inventoryItems})
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
    puts "params #{@params}"
    data = {}
    data['upc'] = @params['upc']
    data['productName'] = @params['productName']
    data['quantity'] = @params['quantity']
    data['photoUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['photoUri'])
    @inventoryItem = InventoryItem.create(data)
  end

  def update
    @inventoryItem = InventoryItem.find(@params['id'])

    data = {}
    data['upc'] = @params['inventoryItem']['upc']
    data['productName'] = @params['inventoryItem']['productName']
    data['quantity'] = @params['inventoryItem']['quantity']
    #data['employeeId'] = @params['inventoryItem']['employeeId']
    data['photoUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['inventoryItem']['photoUri'])
    #data['signatureUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['inventoryItem']['signatureUri'])
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
