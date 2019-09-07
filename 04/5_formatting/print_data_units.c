#include <stdio.h>

#include "print_data_units.h"

static const double S_SCALE = 1024.0f;

static const double S_BYTE = 1.0f;
static const double S_KB = S_SCALE;
static const double S_MB = S_SCALE * S_KB;
static const double S_GB = S_SCALE * S_MB;
static const double S_TB = S_SCALE * S_GB;
static const double S_PB = S_SCALE * S_TB;

void print_data_units(void)
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

void print_data_units_scientific_notation(void)
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
