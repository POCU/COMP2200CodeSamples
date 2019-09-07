#include <stdio.h>
#include <string.h>

#include "buffered_print.h"

#define BUFFER_LENGTH (16)

static int s_buffer_chars = 0;
static char s_buffer[BUFFER_LENGTH];

void buffered_print(const char* src)
{
    if (s_buffer_chars == BUFFER_LENGTH - 1) {
        printf("%s\n", s_buffer);
        s_buffer_chars = 0;
    }

    if (s_buffer_chars == 0) {
        strncpy(s_buffer, src, BUFFER_LENGTH - 1);
        s_buffer[BUFFER_LENGTH - 1] = '\0';
    } else {
        strncat(s_buffer, src, BUFFER_LENGTH - s_buffer_chars - 1);
    }

    s_buffer_chars = strlen(s_buffer);
}
