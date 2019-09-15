#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "file_utils.h"

void copy_file(const char* src_filename, const char* dst_filename)
{
    FILE* src;
    FILE* dst;
    int c;

    src = fopen(src_filename, "rb");
    if (src == NULL) {
        perror("error while opening source file");
        return;
    }

    dst = fopen(dst_filename, "wb");
    if (dst == NULL) {
        perror("error while creating target file");
        goto close_source;
    }

    c = fgetc(src);
    while (c != EOF) {
        fputc(c, dst);
        c = fgetc(src);
    }

    if (fclose(dst) == EOF) {
        perror("error while closing target file");
    }

close_source:
    if (fclose(src) == EOF) {
        perror("error while closing source file");
    }
}
