require 'rho/rhocontroller'
require 'helpers/browser_helper'

class InventoryItemController < Rho::RhoController
  include BrowserHelper

  def index
    @inventoryItems = InventoryItem.find(:all)
    render
  end

  def show
    @inventoryItem = InventoryItem.find(@params['id'])
    puts("show report: #{@inventoryItem}");
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
    puts "create params #{@params}"
    data = {}
    data['upc'] = @params['inventoryItem']['upc']
    data['productName'] = @params['inventoryItem']['productName']
    data['damageReason'] = @params['inventoryItem']['damageReason']
    data['employeeId'] = @params['inventoryItem']['employeeId']
    data['picture0Uri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['inventoryItem']['picture0Uri'])
    data['picture1Uri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['inventoryItem']['picture1Uri'])
    data['signatureUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['inventoryItem']['signatureUri'])
    puts data
    @inventoryItem = InventoryItem.create(data)
    puts "create: inventoryItem = #{@inventoryItem}"
    redirect :action => :index
  end

  def update
    @inventoryItem = InventoryItem.find(@params['id'])
    @inventoryItem.update_attributes(@params['inventoryItem']) if @inventoryItem
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
