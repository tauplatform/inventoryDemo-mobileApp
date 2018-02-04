require 'rho/rhoapplication'

class AppApplication < Rho::RhoApplication

  def initialize
    @tabs = nil
    @@toolbar = nil

    super
  end

end
