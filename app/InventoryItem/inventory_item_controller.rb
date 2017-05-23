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
    InventoryItem.create(data)
  end

  def update
    item = InventoryItem.find(@params['id'])
    data = {}
    data['upc'] = @params['upc']
    data['productName'] = @params['productName']
    data['quantity'] = @params['quantity']
    data['photoUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['photoUri'])
    item.update_attributes(data) if item
  end

  def delete
    puts "deleting item #{@params['id']}"
    item = InventoryItem.find(@params['id'])
    item.destroy if item
  end

end
