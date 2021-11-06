%package -n patterns-sailfish-device-configuration-j9110
Summary: Jolla Configuration j9110
Requires: patterns-sailfish-device-configuration-common-j9110
Requires: patterns-sailfish-device-adaptation-griffin

Requires: droid-config-j9110-sailfish
Requires: droid-config-j9110-pulseaudio-settings
Requires: droid-config-j9110-policy-settings
Requires: droid-config-j9110-preinit-plugin
Requires: droid-config-j9110-flashing
Requires: droid-config-j9110-bluez5
Requires: droid-hal-version-j9110

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

%description -n patterns-sailfish-device-configuration-j9110
Pattern with packages for j9110 configurations

%files -n patterns-sailfish-device-configuration-j9110
