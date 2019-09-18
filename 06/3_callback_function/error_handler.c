#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>

#include "error_handler.h"

static void (*s_handler)(const char*) = NULL;

void register_error_handler(void (*handler)(const char* msg))
{
    s_handler = handler;
}

void log_error(const char* msg)
{
    if (s_handler != NULL) {
        s_handler(msg);
    }
}

void default_error_handler(const char* msg)
{
    time_t now;
    struct tm* local;

    now = time(NULL);

    local = localtime(&now);

    fprintf(stderr, "[%02d:%02d:%02d] %s\n", 
        local->tm_hour, local->tm_min, local->tm_sec,
        msg);
}
