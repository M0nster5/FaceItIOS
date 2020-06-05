source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '13.5'
install! 'cocoapods', :deterministic_uuids => false

target 'UnityFramework' do
pod 'AppCenter'
pod 'FBSDKLoginKit', '5.6'
pod 'FBSDKCoreKit', '5.6'
pod 'FBSDKShareKit', '5.6'
pod 'Bolts'

end

    post_install do |installer_representation|
        installer_representation.pods_project.targets.each do |target|
            target.build_configurations.each do |config|
                config.build_settings['PUBLIC_HEADERS_FOLDER_PATH'] = [""];
                config.build_settings['PRIVATE_HEADERS_FOLDER_PATH'] = [""];
            end
        end
    end


