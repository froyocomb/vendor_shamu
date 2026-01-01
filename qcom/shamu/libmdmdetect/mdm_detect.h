#ifndef MDM_DETECT_H
#define MDM_DETECT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Modem types */
typedef enum {
    MDM_TYPE_UNKNOWN = 0,
    MDM_TYPE_INTERNAL,
    MDM_TYPE_EXTERNAL
} mdm_type_t;

struct dev_info {
    int num_modems;          // audio HAL wants this
};

int get_system_mdm_type(void);

int is_ext_modem(void);

int get_system_info(struct dev_info* info);

#ifdef __cplusplus
}
#endif

#endif /* MDM_DETECT_H */

