Pod::Spec.new do |s|
  s.name         = "MovinSDK"
  s.version      = "2.3.1"
  s.summary      = "Static iOS library of the MovinSDK."
  s.description  = <<-DESC
This repository contains the static iOS library of the MovinSDK.
                   DESC

  s.homepage     = "http://www.movin.io"
  s.license      = <<-DESC
  Licensed under Creative Commons Attribution-NoDerivs 3.0 Unported

  THE WORK (AS DEFINED BELOW) IS PROVIDED UNDER THE TERMS OF THIS CREATIVE COMMONS PUBLIC LICENSE ("CCPL" OR "LICENSE"). THE WORK IS PROTECTED BY COPYRIGHT AND/OR OTHER APPLICABLE LAW. ANY USE OF THE WORK OTHER THAN AS AUTHORIZED UNDER THIS LICENSE OR COPYRIGHT LAW IS PROHIBITED. BY EXERCISING ANY RIGHTS TO THE WORK PROVIDED HERE, YOU ACCEPT AND AGREE TO BE BOUND BY THE TERMS OF THIS LICENSE. TO THE EXTENT THIS LICENSE MAY BE CONSIDERED TO BE A CONTRACT, THE LICENSOR GRANTS YOU THE RIGHTS CONTAINED HERE IN CONSIDERATION OF YOUR ACCEPTANCE OF SUCH TERMS AND CONDITIONS.

  You may obtain copy of the license at https://creativecommons.org/licenses/by-nd/3.0/legalcode
                   DESC

  s.author             = { "Movin " => "info@movin.io" }

  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/movinio/MovinSDK-iOS.git", :tag => "2.3.1" }
  s.source_files  = "include/**/*.h"
  s.public_header_files = "include/**/*.h"

  s.preserve_paths = "libMovinSDK.a"
  s.ios.vendored_library = "libMovinSDK.a"

  s.libraries = "c++", "z" 
  s.frameworks = "ImageIO", "CoreMotion", "SystemConfiguration", "CoreLocation", "UIKit"

  s.requires_arc = true
end
