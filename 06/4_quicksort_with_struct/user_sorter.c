#include "userdata.h"
#include "user_sorter.h"

int compare_age_id(const void* p0, const void* p1)
{
    const userdata_t* user0 = p0;
    const userdata_t* user1 = p1;

    if (user0->age == user1->age) {
        return user0->id - user1->id;
    }

    return user0->age - user1->age;
}

int compare_age_desc_sex(const void* p0, const void* p1)
{
    const userdata_t* user0 = p0;
    const userdata_t* user1 = p1;

    if (user0->age == user1->age) {
        return user0->sex - user1->sex;
    }

    return user1->age - user0->age;

}


