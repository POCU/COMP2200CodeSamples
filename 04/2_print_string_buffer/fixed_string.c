#include <stdio.h>
#include <string.h>

#include "fixed_string.h"

static int s_is_called;
static char s_buffer[BUFFER_LENGTH];

int copy_string(const char* src, size_t num)
{
    if (!s_is_called) {
        strncpy(s_buffer, src, num);
        s_is_called = TRUE;
    } else {
        strncat(s_buffer, src, num);
    }

    s_buffer[BUFFER_LENGTH - 1] = '\0';
    
    if (strlen(s_buffer) == BUFFER_LENGTH - 1) {
        s_is_called = FALSE;
        printf("The buffer is full:\n%s\n", s_buffer);
        return FALSE;
    }

    return TRUE;
}
