%package -n patterns-sailfish-device-configuration-j9210
Summary: Jolla Configuration j9210
Requires: patterns-sailfish-device-configuration-common-j9210
Requires: patterns-sailfish-device-adaptation-bahamut

Requires: droid-config-j9210-sailfish
Requires: droid-config-j9210-pulseaudio-settings
Requires: droid-config-j9210-policy-settings
Requires: droid-config-j9210-preinit-plugin
Requires: droid-config-j9210-flashing
Requires: droid-config-j9210-bluez5
Requires: droid-hal-version-j9210

Requires: patterns-sailfish-cellular-apps

# NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-dbuslog-plugin
Requires: nfcd-mce-plugin

Requires: sailfish-content-graphics-z%{icon_res}

Requires: jolla-settings-system-flashlight
Requires: jolla-settings-networking-multisim

Requires: geoclue-provider-mlsdb
Requires: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-j9210
Pattern with packages for j9210 configurations

%files -n patterns-sailfish-device-configuration-j9210
