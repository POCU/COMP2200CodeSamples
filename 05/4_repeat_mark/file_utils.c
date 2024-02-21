#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "file_utils.h"

#define TRUE (1)
#define FALSE (0)

void print_with_repeats(const char* filename)
{
    long pos = -1L;
    int repeating = FALSE;
    int c;
    FILE* file;

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("error while opening");
        return;
    }

    c = fgetc(file);
    while (c != EOF) {
        if (c != ':') {
            putchar(c);
            goto next_char;
        }

        if (!repeating) {
            if (pos < 0) {
                /* start mark */
                pos = ftell(file);
                if (pos < 0) {
                    perror("error while getting start position");
                    break;
                }
            } else {
                /* end mark */
                repeating = TRUE;
                
                if (fseek(file, pos, SEEK_SET) != 0) {
                    perror("error while fseek() to start position");
                    break;
                }
            }

            goto next_char;
        }

        /* revisited end mark */
        repeating = FALSE;
        pos = -1;

next_char:
        c = fgetc(file);
    }

    if (fclose(file) == EOF) {
        perror("error while closing");
    }
}
