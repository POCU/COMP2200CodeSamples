#include <stdio.h>

#include "byte_conversion_chart.h"

#define SCALE (1024.0f)

#define BYTE (1.0f)
#define KB (SCALE * BYTE)
#define MB (SCALE * KB)
#define GB (SCALE * MB)
#define TB (SCALE * GB)
#define PB (SCALE * TB)

#define LENGTH (6)

static const char* const DATA_STORAGE_NAMES[LENGTH] = 
    { "Byte", "Kilobyte", "Megabyte", "Gigabyte", "Terabyte", "Petabyte" };

void print_byte_conversion_chart(void)
{
    double divisor = 1.0;
    size_t i;

    printf("%9s","");

    for (i = 0; i < LENGTH; ++i) {
        printf("%17s ", DATA_STORAGE_NAMES[i]);
    }

    printf("\n%4s", "");

    for (i = 0; i < LENGTH; ++i) {
        printf("%s %17.15lf %17.12lf %17.9lf %17.6lf %17.3lf %17.0lf\n",
            DATA_STORAGE_NAMES[i], BYTE / divisor, KB / divisor, 
            MB / divisor, GB / divisor, TB / divisor, PB / divisor);

        divisor *= SCALE;
    }
}

void print_byte_conversion_chart_scientific(void)
{
    double divisor = 1.0;
    size_t i;

    printf("%9s", "");

    for (i = 0; i < LENGTH; ++i) {
        printf("%17s ", DATA_STORAGE_NAMES[i]);
    }

    printf("\n%4s", "");

    for (i = 0; i < LENGTH; ++i) {
        printf("%s %17.2e %17.2e %17.2e %17.2e %17.2e %17.2e\n",
            DATA_STORAGE_NAMES[i], BYTE / divisor, KB / divisor, 
            MB / divisor, GB / divisor, TB / divisor, PB / divisor);

        divisor *= SCALE;
    }
}
