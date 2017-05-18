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
    puts "deleting item #{@params['id']}"
    @inventoryItem = InventoryItem.find(@params['id'])
    @inventoryItem.destroy if @inventoryItem
  end

end
