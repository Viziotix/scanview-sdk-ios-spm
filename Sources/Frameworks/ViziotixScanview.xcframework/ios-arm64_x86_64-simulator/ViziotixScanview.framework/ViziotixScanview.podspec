#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html.
# Run `pod lib lint ViziotixScanview.podspec` to validate before publishing.
#
Pod::Spec.new do |s|
  s.name             = 'ViziotixScanview'
  s.version          = '1.0.1'
  s.summary          = 'UI components for Viziotix Decoder'
  s.description      = <<-DESC
  UI components for Viziotix Decoder.
                       DESC
  s.homepage         = 'https://www.viziotix.com'
  s.license          = { :file => '../LICENSE' }
  s.author           = { 'Viziotix' => 'contact@viziotix.com' }
  s.source           = { :path => '.' }
  s.resources        = ['ViziotixScanview/Assets/**/*']
  s.source_files = 'ViziotixScanview/Classes/**/*'
  s.vendored_frameworks = 'ViziotixScanview/Frameworks/PhenixDecoder.xcframework'
  s.preserve_paths = 'ViziotixScanview/Frameworks/PhenixDecoder.xcframework'
  s.framework = 'PhenixDecoder'
  s.dependency 'ViziotixScanview'
#  s.dependency 'Frameworks/PhenixDecoder.xcframework'
  s.platform = :ios, '14.0'

  # Flutter.framework does not contain a i386 slice.
  s.pod_target_xcconfig = { 'DEFINES_MODULE' => 'YES', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }
  s.info_plist = { 'NSCameraUsageDescription' => 'We need camera access to scan barcodes' }
  s.swift_version = '5.0'
end
