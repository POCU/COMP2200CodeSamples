#include <stdio.h>
#include <stdlib.h>

#include "string_comparer.h"

enum { NUM_WORDS = 6 };

int main(void)
{
    size_t i;
    const char* words[NUM_WORDS] = {
        "premium", "level", "cultured",
        "moaning", "skinny", "curve"
    };

    puts("\n== sort ascending ==");

    qsort(words, NUM_WORDS, sizeof(const char*), compare_string);
    for (i = 0; i < NUM_WORDS; ++i) {
        printf("%s\n", words[i]);
    }

    puts("\n== sort descending ==");
    
    qsort(words, NUM_WORDS, sizeof(const char*), compare_string_desc);
    for (i = 0; i < NUM_WORDS; ++i) {
        printf("%s\n", words[i]);
    }

    return 0;
}
