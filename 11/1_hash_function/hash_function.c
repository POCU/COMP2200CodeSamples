#include <stddef.h>

#include "hash_function.h"

size_t hash_int(int value)
{
    return value;
}

size_t hash_float(float value)
{
    return *((size_t*)&value);
}

size_t hash_data(const void* data, size_t length)
{
    const char* p;
	size_t i;
	size_t hash;

    p = data;
	hash = 0;
	for (i = 0; i < length; ++i) {
		hash = 65599 * hash + *p++;
	}

	return hash ^ (hash >> 16);
}
