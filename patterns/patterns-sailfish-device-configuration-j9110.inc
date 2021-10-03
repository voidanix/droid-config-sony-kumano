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

Requires: sailfish-content-graphics-z%{icon_res}

Requires: jolla-settings-networking-multisim
Requires: jolla-settings-system-nfc
Requires: jolla-settings-system-flashlight

Requires: geoclue-provider-mlsdb
Requires: mapplauncherd-booster-silica-qt5-media

Requires: patterns-sailfish-consumer-generic
Requires: patterns-sailfish-store-applications
Requires: patterns-sailfish-rnd
# dev-tools pattern will be fixed in the next release
# for now we'll use its 'exploded' version:
#Requires: patterns-sailfish-dev-tools
Recommends: jolla-developer-mode
Requires: strace
Requires: gdb
Requires: gdb-gdbserver
Requires: vim-enhanced
Requires: less
Requires: valgrind
Requires: lipstick-qt5-tools
Requires: libhybris-tests
Requires: busybox-static
Requires: openssh-server
Requires: zypper


%description -n patterns-sailfish-device-configuration-j9110
Pattern with packages for j9110 configurations

%files -n patterns-sailfish-device-configuration-j9110
