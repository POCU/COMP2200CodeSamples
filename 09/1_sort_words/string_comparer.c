#include <string.h>
#include "string_comparer.h"

int compare_string(const void* a, const void* b)
{
    const char** w0 = (const char**)a;
    const char** w1 = (const char**)b;

    return strcmp(*w0, *w1);
}

int compare_string_desc(const void* a, const void* b)
{
    const char** w0 = (const char**)a;
    const char** w1 = (const char**)b;

    return strcmp(*w1, *w0);
}
