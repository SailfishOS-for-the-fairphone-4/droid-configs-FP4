# Feel free to disable non-critical HA parts during devel by commenting lines out
# Generated in hadk by executing: rpm/dhd/helpers/add_new_device.sh

%package -n patterns-sailfish-device-adaptation-FP4
Summary: Jolla HW Adaptation FP4
Requires: droid-hal-FP4
Requires: droid-hal-FP4-img-boot
Requires: droid-hal-FP4-kernel-modules
Requires: droid-config-FP4-sailfish
Requires: droid-config-FP4-pulseaudio-settings
Requires: droid-config-FP4-policy-settings
Requires: droid-config-FP4-preinit-plugin
Requires: droid-config-FP4-flashing
Requires: droid-config-FP4-bluez5
Requires: droid-hal-version-FP4
Requires: hidl-audio-FP4
Requires: dummy_netd

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: libngf-qt5-qtfeedback

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl

# The -dummy-af is needed for newer devices that run the main
# audiosystem-passthrough in qti mode (e.g. >=Android 9 Qualcomm),
# to fix non-responding Camera app and/or voice during a phone call:
Requires: audiosystem-passthrough-dummy-af

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

# USB mode controller
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# Enable home encryption
#Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
Requires: jolla-mediaplayer-radio

# NFC support
# 1. binder plugin requires Android 8 or a newer base
# 2. pn54x plugin talks directly to pn54x driver
# These plugins are mutually exclusive, you need to pick one:
Requires: nfcd-binder-plugin
#Requires: nfcd-pn54x-plugin

# Super-partition support
Requires: parse-android-dynparts

# Fingerprint support
Requires: sailfish-fpd-community
Requires: sailfish-fpd-community-test

# Use screenlock supporting FPD
Requires: sailfish-devicelock-fpd

# Without FPD: enable device lock and allow to select untrusted software
#Requires: jolla-devicelock-daemon-encsfa

# Bluetooth support
Requires: bluebinder

%description -n patterns-sailfish-device-adaptation-FP4
Pattern with packages for FP4 HW Adaptation

%files -n patterns-sailfish-device-adaptation-FP4
