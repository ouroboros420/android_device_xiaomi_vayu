#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from sm8150-common
$(call inherit-product, device/xiaomi/sm8150-common/msmnile.mk)

# Overlays
DEVICE_PACKAGE_OVERLAYS += \
    $(LOCAL_PATH)/overlay

# Device uses high-density artwork where available
PRODUCT_AAPT_CONFIG := normal
PRODUCT_AAPT_PREF_CONFIG := xhdpi

# Boot animation
TARGET_SCREEN_HEIGHT := 2400
TARGET_SCREEN_WIDTH := 1080

PRODUCT_SHIPPING_API_LEVEL := 30

# Fingerprint
PRODUCT_PACKAGES += \
    libkeymaster_messages.vendor

# Properties
TARGET_VENDOR_PROP := $(LOCAL_PATH)/vendor.prop

# Inherit from vendor blobs
$(call inherit-product, vendor/xiaomi/vayu/vayu-vendor.mk)
