#include "mdm_detect.h"

int get_system_mdm_type(void) {
    return MDM_TYPE_UNKNOWN; // always return unknown
}

int is_ext_modem(void) {
    return 0; // no external modem
}

int get_system_info(struct dev_info* info) {
    if (!info) return -1;
    info->num_modems = 0; // no modems
    return 0; // success
}

