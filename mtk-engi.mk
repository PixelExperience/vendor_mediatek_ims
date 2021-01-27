# Apps
PRODUCT_PACKAGES += \
    EngineerMode \
    libem_support_jni

# Permissions
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/permissions/privapp-permissions-mediatek-engineer.xml:$(TARGET_COPY_OUT_SYSTEM)/etc/permissions/privapp-permissions-mediatek-engineer.xml
