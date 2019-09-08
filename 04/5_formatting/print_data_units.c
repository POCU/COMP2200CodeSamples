#include <stdio.h>

#include "print_data_units.h"

#define S_SCALE (1024.0f)

#define S_BYTE (1.0f)
#define S_KB (S_SCALE)
#define S_MB (S_SCALE * S_KB)
#define S_GB (S_SCALE * S_MB)
#define S_TB (S_SCALE * S_GB)
#define S_PB (S_SCALE * S_TB)

void print_byte_conversion_chart(void)
{
    double divisor = 1.0f;

    printf("%26s %17s %17s %17s %17s %17s\n", 
        "Byte", "Kilobyte", "Megabyte", "Gigabyte", "Terabyte", "Petabyte");

    printf("Byte %21.0lf %17.0lf %17.0lf %17.0lf %17.0lf %17.0lf\n", 
        S_BYTE, S_KB, S_MB, S_GB, S_TB, S_PB);
    
    divisor *= S_SCALE;

    printf("Kilobyte %17.3lf %17.0lf %17.0lf %17.0lf %17.0lf %17.0lf\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);
    
    divisor *= S_SCALE;

    printf("Megabyte %17.6lf %17.3lf %17.0lf %17.0lf %17.0lf %17.0lf\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);

    divisor *= S_SCALE;

    printf("Gigabyte %17.9lf %17.6lf %17.3lf %17.0lf %17.0lf %17.0lf\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);

    divisor *= S_SCALE;

    printf("Terabyte %17.12lf %17.9lf %17.6lf %17.3lf %17.0lf %17.0lf\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);

    divisor *= S_SCALE;

    printf("Petabyte %17.15lf %17.12lf %17.9lf %17.6lf %17.3lf %17.0lf\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);
}

void print_byte_conversion_chart_scientific(void)
{
    double divisor = 1.0f;

    printf("%26s %17s %17s %17s %17s %17s\n", 
        "Byte", "Kilobyte", "Megabyte", "Gigabyte", "Terabyte", "Petabyte");

    printf("Byte %21.2e %17.2e %17.2e %17.2e %17.2e %17.2e\n", 
        S_BYTE, S_KB, S_MB, S_GB, S_TB, S_PB);

    divisor *= S_SCALE;

    printf("Kilobyte %17.2e %17.2e %17.2e %17.2e %17.2e %17.2e\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);

    divisor *= S_SCALE;

    printf("Megabyte %17.2e %17.2e %17.2e %17.2e %17.2e %17.2e\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);

    divisor *= S_SCALE;

    printf("Gigabyte %17.2e %17.2e %17.2e %17.2e %17.2e %17.2e\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);

    divisor *= S_SCALE;

    printf("Terabyte %17.2e %17.2e %17.2e %17.2e %17.2e %17.2e\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);

    divisor *= S_SCALE;

    printf("Petabyte %17.2e %17.2e %17.2e %17.2e %17.2e %17.2e\n", 
        S_BYTE / divisor, S_KB / divisor, S_MB / divisor,
        S_GB / divisor, S_TB / divisor, S_PB / divisor);
}
