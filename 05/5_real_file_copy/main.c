#include <stdio.h>
#include <string.h>

#include "file_utils.h"

int main(int argc, const char* argv[])
{
    if (argc != 3) {
        FILE* out;
        
        if (argc == 2 && strcmp(argv[1], "--help") == 0) {
            out = stdout;
        } else {
            out = stderr;
        }
        
        fprintf(out, "+--------------------------------+\n");
        fprintf(out, "|       New File Copier v1       +\n");
        fprintf(out, "+--------------------------------+\n");
        fprintf(out, "  usage: copy <src> <dst>\n");

        if (out == stderr) {
            fprintf(out, "\nerror: invalid arguments\n");
        }

        return 1;
    }

    copy_file(argv[1], argv[2]);

    return 0;
}
