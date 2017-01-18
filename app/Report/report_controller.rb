require 'rho/rhocontroller'
require 'helpers/browser_helper'

class ReportController < Rho::RhoController
  include BrowserHelper

  def index
    @reports = Report.find(:all)
    render
  end

  def show
    @report = Report.find(@params['id'])
    puts("show report: #{@report}");
    if @report
      render :action => :show, :back => url_for(:action => :index)
    else
      redirect :action => :index
    end
  end

  def new
    @report = Report.new
    puts "report #{@report}"
    render :action => :new, :back => url_for(:action => :index)
  end

  def edit
    @report = Report.find(@params['id'])
    if @report
      render :action => :edit, :back => url_for(:action => :index)
    else
      redirect :action => :index
    end
  end

  def create
    puts "create params #{@params}"
    data = {}
    data['upc'] = @params['report']['upc']
    data['productName'] = @params['report']['productName']
    data['damageReason'] = @params['report']['damageReason']
    data['employeeId'] = @params['report']['employeeId']
    data['picture0Uri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['report']['picture0Uri'])
    data['picture1Uri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['report']['picture1Uri'])
    data['signatureUri'] = Rho::Application.relativeDatabaseBlobFilePath(@params['report']['signatureUri'])
    puts data
    @report = Report.create(data)
    puts "report: #{@report}"
    redirect :action => :index
  end

  def update
    @report = Report.find(@params['id'])
    @report.update_attributes(@params['report']) if @report
    redirect :action => :index
  end

  def delete
    @report = Report.find(@params['id'])
    @report.destroy if @report
    redirect :action => :index
  end

  def scan_barcode
    Rho::Barcode.take({}, url_for(:action => :barcode_callback))
  end

end
