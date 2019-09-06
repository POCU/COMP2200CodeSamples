#include <stdio.h>
#include <string.h>

#include "buffered_print.h"

#define BUFFER_LENGTH (32)

static int s_buffer_next_index = 0;
static char s_buffer[BUFFER_LENGTH];

void buffered_print(const char* src, size_t num)
{
    if (s_buffer_next_index == BUFFER_LENGTH) {
        printf("The buffer is full:\n%s\n", s_buffer);
        s_buffer_next_index = 0;
    }

    if (s_buffer_next_index == 0) {
        strncpy(s_buffer, src, num);
    } else {
        strncat(s_buffer, src, num);
    }

    s_buffer[BUFFER_LENGTH - 1] = '\0';
    s_buffer_next_index = strlen(s_buffer) + 1;
}
