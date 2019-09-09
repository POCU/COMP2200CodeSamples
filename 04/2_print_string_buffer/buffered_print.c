#include <stdio.h>
#include <string.h>

#include "buffered_print.h"

#define BUFFER_LENGTH (32)

static size_t s_buffer_index = 0u;
static char s_buffer[BUFFER_LENGTH];

static int min(int a, int b);

void buffered_print(const char* src)
{
    size_t num_left;
    const char* P = src;

    num_left = strlen(src);

    while (num_left > 0) {
        const size_t NUM_CHARS_TO_BUFFER = min(BUFFER_LENGTH - 1 - s_buffer_index, num_left);

        const int BUFFER_EMPTY = s_buffer_index == 0;

        s_buffer_index += NUM_CHARS_TO_BUFFER;
        num_left -= NUM_CHARS_TO_BUFFER;

        if (BUFFER_EMPTY) {
            strncpy(s_buffer, P, NUM_CHARS_TO_BUFFER);
            s_buffer[s_buffer_index] = '\0';  
        } else {
            strncat(s_buffer, P, NUM_CHARS_TO_BUFFER);
        }

        P += NUM_CHARS_TO_BUFFER;

        if (s_buffer_index == BUFFER_LENGTH - 1) {
            printf("%s\n", s_buffer);
            s_buffer_index = 0;
        }
    }
}

static int min(int a, int b)
{
    return a < b ? a : b;
}
