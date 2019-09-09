#include <stdio.h>

#include "print_data_units.h"

#define SCALE (1024.0f)

#define BYTE (1.0f)
#define KB (SCALE)
#define MB (SCALE * KB)
#define GB (SCALE * MB)
#define TB (SCALE * GB)
#define PB (SCALE * TB)

#define LENGTH (6)

static const char* const S_DATA_UNITS[LENGTH] = 
    { "Byte", "Kilobyte", "Megabyte", "Gigabyte", "Terabyte", "Petabyte" };

void print_byte_conversion_chart(void)
{
    double divisor = 1.0f;
    size_t i;

    printf("%9s","");

    for (i = 0; i < LENGTH; ++i) {
        printf("%17s ", S_DATA_UNITS[i]);
    }

    printf("\n%4s", "");

    for (i = 0; i < LENGTH; ++i) {
        printf("%s %17.15lf %17.12lf %17.9lf %17.6lf %17.3lf %17.0lf\n",
            S_DATA_UNITS[i], BYTE / divisor, KB / divisor, MB / divisor,
            GB / divisor, TB / divisor, PB / divisor);

        divisor *= SCALE;
    }
}

void print_byte_conversion_chart_scientific(void)
{
    double divisor = 1.0f;
    size_t i;

    printf("%9s", "");

    for (i = 0; i < LENGTH; ++i) {
        printf("%17s ", S_DATA_UNITS[i]);
    }

    printf("\n%4s", "");

    for (i = 0; i < LENGTH; ++i) {
        printf("%s %17.2e %17.2e %17.2e %17.2e %17.2e %17.2e\n",
            S_DATA_UNITS[i], BYTE / divisor, KB / divisor, MB / divisor, 
            GB / divisor, TB / divisor, PB / divisor);

        divisor *= SCALE;
    }
}
