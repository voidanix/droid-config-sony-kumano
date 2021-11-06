%package -n patterns-sailfish-device-configuration-j8210
Summary: Jolla Configuration j8210
Requires: patterns-sailfish-device-configuration-common-j8210
Requires: patterns-sailfish-device-adaptation-bahamut

Requires: droid-config-j8210-sailfish
Requires: droid-config-j8210-pulseaudio-settings
Requires: droid-config-j8210-policy-settings
Requires: droid-config-j8210-preinit-plugin
Requires: droid-config-j8210-flashing
Requires: droid-config-j8210-bluez5
Requires: droid-hal-version-j8210

Requires: patterns-sailfish-cellular-apps

# NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-dbuslog-plugin
Requires: nfcd-mce-plugin

Requires: sailfish-content-graphics-z%{icon_res}

Requires: jolla-settings-system-flashlight

Requires: geoclue-provider-mlsdb
Requires: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-j8210
Pattern with packages for j8210 configurations

%files -n patterns-sailfish-device-configuration-j8210
