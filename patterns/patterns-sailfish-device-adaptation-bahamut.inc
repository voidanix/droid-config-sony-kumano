%package -n patterns-sailfish-device-adaptation-bahamut
Summary: Jolla HW Adaptation bahamut
Requires: droid-hal-bahamut
Requires: droid-hal-bahamut-img-boot
Requires: droid-hal-bahamut-img-recovery
Requires: droid-hal-bahamut-tools
Requires: droid-hal-bahamut-kernel-dtbo

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Bluetooth
Requires: bluebinder

# Telephony
Requires: ofono-ril-binder-plugin
Requires: dummy_netd

# NFC
Requires: nfcd-binder-plugin

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: libngf-qt5-qtfeedback

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# For camera dummy audioflinger is needed
Requires: audiosystem-passthrough-dummy-af

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable fingerprint reader
Requires: sailfish-devicelock-fpd
Requires: sailfish-fpd-community

# for fpd-community as we are using keymaster 4
Requires: droid-fake-crypt

# Enable home encryption
Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For suspend to work with enabled Wi-Fi on newer Qualcomm devices
Requires: sailfish-connman-plugin-suspend

# Splash screen
Requires: yamuisplash

%description -n patterns-sailfish-device-adaptation-bahamut
Pattern with packages for bahamut HW Adaptation

%files -n patterns-sailfish-device-adaptation-bahamut
