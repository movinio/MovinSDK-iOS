Pod::Spec.new do |s|
  s.name         = "MovinSDK"
  s.version      = "2.8.0"
  s.summary      = "Static iOS library of the MovinSDK."
  s.description  = <<-DESC
This repository contains the static iOS library of the MovinSDK.
                   DESC

  s.homepage     = "http://www.movin.io"
  s.license      = { :type => 'CC BY-ND 3.0', :file => 'LICENSE' }
  s.author       = { "Movin " => "info@movin.io" }

  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/movinio/MovinSDK-iOS.git", :tag => s.version.to_s }
  s.source_files  = "include/**/*.h"
  s.public_header_files = "include/**/*.h"

  s.preserve_paths = "libMovinSDK.a"
  s.ios.vendored_library = "libMovinSDK.a"

  s.libraries = "c++", "z"
  s.frameworks = "ImageIO", "CoreMotion", "SystemConfiguration", "CoreLocation", "UIKit"

  s.requires_arc = true
end
