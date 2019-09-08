#include <stdio.h>
#include <string.h>

#include "buffered_print.h"

#define BUFFER_LENGTH (16)

static size_t s_buffer_index = 0;
static char s_buffer[BUFFER_LENGTH];

void buffered_print(const char* src)
{
    while (*src != '\0') {

        if (s_buffer_index == 0) {
            strncpy(s_buffer, src, BUFFER_LENGTH - 1);
            s_buffer[BUFFER_LENGTH - 1] = '\0';
            src += strlen(s_buffer);
        } else {
            strncat(s_buffer, src, BUFFER_LENGTH - s_buffer_index);
            src += strlen(s_buffer) - (s_buffer_index - 1);
        }

        s_buffer_index = strlen(s_buffer) + 1;

        if (s_buffer_index == BUFFER_LENGTH) {
            printf("%s\n", s_buffer);
            s_buffer_index = 0;
        }
    }
}
