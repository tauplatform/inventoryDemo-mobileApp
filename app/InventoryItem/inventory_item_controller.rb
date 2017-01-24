require 'rho/rhocontroller'
require 'helpers/browser_helper'

class InventoryItemController < Rho::RhoController
  include BrowserHelper

  def initialize
    @hasHardwareScanner = false
    if Rho.respond_to?(:Barcode)
      scanners = Rho::Barcode.enumerate
      hardwareScanners = scanners.select { |each| each.friendlyName == '2D Imager' }
      @hasHardwareScanner = hardwareScanners.size != 0
    end
  end

  def index
    # @menu = [{label: 'back', action: "callback:#{url_for(action: :callback_back)}"}]
    @inventoryItems = InventoryItem.find(:all)
    render
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
    puts "report #{@inventoryItem}"
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
    puts "create: inventoryItem = #{@inventoryItem}"
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
    puts "update: #{data}"
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
