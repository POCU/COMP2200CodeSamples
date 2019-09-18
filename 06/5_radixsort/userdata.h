#ifndef USERDATA_H
#define USERDATA_H

typedef enum {
    SEX_MALE,
    SEX_FEMALE,
    SEX_UNKNOWN
} sex_t;

typedef struct {
    unsigned short id;
    unsigned char age;
    sex_t sex;
} userdata_t;

typedef struct {
    unsigned int sort_key;
    userdata_t user;
} radix_userdata_t;

#endif /* USERDATA_H */
