Pod::Spec.new do |s|
  s.name         = "MovinSDK"
  s.version      = "2.3.0"
  s.summary      = "This repository contains the static iOS library of the MovinSDK."
  s.description  = <<-DESC

                   DESC

  s.homepage     = "http://www.movin.io"
  s.license      = "CCA NoDerivs 3.0"

  s.author             = { "Movin " => "info@movin.io" }

  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/movinio/MovinSDK-iOS.git", :tag => "2.3.0" }
  s.source_files  = "include/MovinSDK/*.h"
  s.public_header_files = "include/MovinSDK/*.h"

  s.preserve_paths = "libMovinSDK.a"
  s.ios.vendored_library = "libMovinSDK.a"

  s.libraries = "c++", "z", "network"
  s.frameworks = "ImageIO", "CoreMotion", "SystemConfiguration", "CoreLocation", "UIKit"

  s.requires_arc = true
end
