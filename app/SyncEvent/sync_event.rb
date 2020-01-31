# The model has already been created by the framework, and extends Rhom::RhomObject
# You can add more methods here
class SyncEvent
  include Rhom::PropertyBag

  # Uncomment the following line to enable sync with SyncEvent.
  # enable :sync

  #add model specific code here

  # code below is mix between business logic and UI logic. Please, avoid it
  def notify_UI
    if self.state == 'start'
      # Rho::WebView.executeJavascript('$("body").trigger("onSyncStarted");')
    end

    if self.state == 'in_progress'
      #Rho::WebView.executeJavascript("$('body').trigger('onSyncSourceInProgress', '#{self.source_name}');")
    end

    if self.state == 'ok'
      #Rho::WebView.executeJavascript("$('body').trigger('onSyncSourceCompleted', '#{self.source_name}');")
    end

    if self.state == 'complete'
      #Rho::WebView.executeJavascript("$('body').trigger('onSyncCompleted', '#{formatted_time}');")
    end

    if self.state == 'error'
      #Rho::WebView.executeJavascript("$('body').trigger('onSyncError');")
    end

  end

  def formatted_time
    if self.created_at.instance_of? String
      time = DateTime.parse(self.created_at).to_time
    else
      time = self.created_at
    end
    time.strftime('%H:%M')
  end

  def formatted_date_time
    if self.created_at.instance_of? String
      time = DateTime.parse(self.created_at).to_time
    else
      time = self.created_at
    end
    time.strftime('%y-%m-%d %H:%M')
  end

  def error?
    puts "state #{self.state.inspect}"
    puts "error_code #{self.error_code.inspect}"
    puts "error_code.nil? #{self.error_code.nil?}"
    puts "error_code class #{self.error_code.class}"
    self.error_code != nil
  end

  def error_description
    case self.error_code
      when '1'
        return "Network error"
      when '2'
        return "Remote server error"
      when '3'
        return "Runtime error"
      when '4'
        return "Unexpected server response"
      when '5'
        return "ERR_DIFFDOMAINSINSYNCSRC"
      when '6'
        return "No server response"
      when '7'
        return "Client is not logged in. Please re-login !"
      when '8'
        return "Custom sync server error"
      when '9'
        return "Unauthorized error"
      else
        return "Unknown error"
    end
  end

  def description
    if self.error?
      self.error_description
    else
      self.state
    end
  end

end
