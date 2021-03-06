/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_msmnile.h>

static const variant_info_t vayu_global_info = {
    .hwc_value = "GLOBAL",
    .sku_value = "vayu",

    .brand = "POCO",
    .device = "vayu",
    .marketname = "M2102J20SG",
    .model = "POCO X3 Pro",

    .nfc = true,
};

static const variant_info_t vayu_eea_info = {
    .hwc_value = "EEA",
    .sku_value = "vayu",

    .brand = "POCO",
    .device = "vayu",
    .marketname = "M2102J20SG",
    .model = "POCO X3 Pro",

    .nfc = true,
};

static const variant_info_t bhima_info = {
    .hwc_value = "INDIA",
    .sku_value = "bhima",

    .brand = "POCO",
    .device = "bhima",
    .marketname = "POCO X3 Pro",
    .model = "M2102J20SI",

    .nfc = false,
};

static const std::vector<variant_info_t> variants = {
    vayu_global_info,
    vayu_eea_info,
    bhima_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
