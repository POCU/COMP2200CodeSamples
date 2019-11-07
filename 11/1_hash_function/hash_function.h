#ifndef HASH_FUNCTION_H
#define HASH_FUNCTION_H

size_t hash_int(int value);
size_t hash_float(float value);
size_t hash_data(const void* data, size_t length);

#endif /* HASH_FUNCTION_H */
