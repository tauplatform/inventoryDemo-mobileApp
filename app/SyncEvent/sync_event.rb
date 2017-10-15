# The model has already been created by the framework, and extends Rhom::RhomObject
# You can add more methods here
class SyncEvent
  include Rhom::PropertyBag

  # Uncomment the following line to enable sync with SyncEvent.
  # enable :sync

  #add model specific code here

  # code below is mix between business logic and UI logic. Please, avoid it

  def notify_UI
    puts "sync event #{self.inspect}"
    if self.state == 'start'
      Rho::WebView.executeJavascript('$("body").trigger("onSyncStarted");')
    end

    if self.state == 'in_progress'
      Rho::WebView.executeJavascript("$('body').trigger('onSyncSourceInProgress', '#{self.source_name}');")
    end

    if self.state == 'ok'
      Rho::WebView.executeJavascript("$('body').trigger('onSyncSourceCompleted', '#{self.source_name}');")
    end

    if self.state == 'complete'
      if self.created_at.instance_of? String
        time = DateTime.parse(self.created_at).to_time
      else
        time = self.created_at
      end
      formatted_time = time.strftime('%H:%M')
      Rho::WebView.executeJavascript("$('body').trigger('onSyncCompleted', '#{formatted_time}');")
    end

    if self.state == 'error'
      Rho::WebView.executeJavascript("$('body').trigger('onSyncError');")
    end

  end
end
