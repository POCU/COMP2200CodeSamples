#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#include "simpleio.h"

static void print_int_recursive(int val)
{
    if (val == 0) {
        return;
    }

    print_int_recursive(val / 10);
    putchar('0' + val % 10);
}

void printf_simple(const char* format, ...)
{
    va_list ap;

    va_start(ap, format);
    {
        while (*format != '\0') {
            unsigned val;
            const char* str;

            switch (*format) {
                case 's':
                    str = va_arg(ap, const char*);
                    while (*str != '\0') {
                        putchar(*str++);
                    }
                    break;
                case 'c':
                    val = va_arg(ap, unsigned int);
                    putchar(val);
                    break;
                case 'd':
                    val = va_arg(ap, unsigned int);
                    print_int_recursive(val);
                    break;
                default:
                    putchar(*format);
                    break;
            }

            ++format;
        }
    }
    va_end(ap);
}
