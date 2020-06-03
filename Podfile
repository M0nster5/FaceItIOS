source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '13.5'
install! 'cocoapods', :deterministic_uuids => false

target 'UnityFramework' do
pod 'MotionKit', :git => 'https://github.com/MHaroonBaig/MotionKit.git'
pod 'FBSDKLoginKit', '5.6'
pod 'FBSDKCoreKit', '5.6'
pod 'FBSDKShareKit', '5.6'
pod 'Bolts'

end

post_install do |installer|   
installer.pods_project.targets.each do |target|       
target.build_configurations.each do |config|         
config.build_settings['ENABLE_BITCODE'] = 'YES'    
end  
end 
end 