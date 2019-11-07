#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#include "hash_function.h"

typedef struct {
    unsigned char age;
    unsigned int id;
    char name[64];
} employee_t;

int main(void)
{
    employee_t person;
    size_t hash;
    float fvalue;

    hash = hash_int(10);
    printf("int    %u\n", hash);
    
    hash = hash_int(-10);
    printf("int    %u\n", hash);
    
    hash = hash_int('A');
    printf("char   %u\n", hash);
    
    hash = hash_float(3.2f);
    printf("float  %u\n", hash);

    hash = hash_data("Pope Kim", strlen("Pope Kim"));
    printf("string %u\n", hash);

    fvalue = 3.2f;
    hash = hash_data(&fvalue, sizeof(float));
    printf("float  %u\n", hash);

    memset(&person, 0, sizeof(employee_t));
    person.age = 23;
    person.id = 18274192;
    strcpy(person.name, "Pope Kim");

    hash = hash_data(&person, sizeof(employee_t));
    printf("struct %u\n", hash);

    return 0;
}
