#include <stdio.h>
#include <string.h>

#include "buffered_print.h"

#define BUFFER_LENGTH (32)

static size_t s_buffer_index = 0u;
static char s_buffer[BUFFER_LENGTH];

void buffered_print(const char* src)
{
    size_t num_left;
    const char* p = src;

    num_left = strlen(src);

    while (num_left > 0) {
        size_t num_chars_to_buffer = BUFFER_LENGTH - 1 - s_buffer_index;

        const int buffer_empty = s_buffer_index == 0;

        if (num_left < num_chars_to_buffer) {
            num_chars_to_buffer = num_left;
        }

        s_buffer_index += num_chars_to_buffer;
        num_left -= num_chars_to_buffer;

        if (buffer_empty) {
            strncpy(s_buffer, p, num_chars_to_buffer);
            s_buffer[s_buffer_index] = '\0';  
        } else {
            strncat(s_buffer, p, num_chars_to_buffer);
        }

        p += num_chars_to_buffer;

        if (s_buffer_index == BUFFER_LENGTH - 1) {
            printf("%s\n", s_buffer);
            s_buffer_index = 0;
        }
    }
}
