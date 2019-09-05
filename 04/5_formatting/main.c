#include <stdio.h>

int main(void)
{
    const size_t DIFF = 1024u;
    const size_t BYTE_SIZE = 8u;

    const float KB_SIZE = DIFF;
    const float MB_SIZE = DIFF * KB_SIZE;
    const float GB_SIZE = DIFF * MB_SIZE;
    const double TB_SIZE = DIFF * GB_SIZE;
    const double PB_SIZE = DIFF * TB_SIZE;
    
    printf("Byte size: %d bits\n", BYTE_SIZE);                    /* 8 bits*/
    
    printf("KB size: %d bytes \t", DIFF);                         /* 1024 bytes */
    printf("(%.0f bytes / %3.2e bytes)\n", KB_SIZE, KB_SIZE);     /* (1024 bytes / 1.02e+03 bytes) */

    printf("MB size: %d kilobytes ", DIFF);                       /* 1024 kilobytes */
    printf("(%.0f bytes / %3.2e bytes)\n", MB_SIZE, MB_SIZE);     /* (1048576 bytes / 1.05e+06 bytes) */

    printf("GB size: %d megabytes ", DIFF);                       /* 1024 megabytes */
    printf("(%.0f bytes / %3.2e bytes)\n", GB_SIZE, GB_SIZE);     /* (1073741824 bytes / 1.07e+09 bytes) */

    printf("TB size: %d gigabytes ", DIFF);                       /* 1024 gigabytes */
    printf("(%.0f bytes / %3.2e bytes)\n", TB_SIZE, TB_SIZE);     /* (1099511627776 bytes / 1.10e+12 bytes) */

    printf("PB size: %d terabytes ", DIFF);                       /* 1024 terabytes */
    printf("(%.0f bytes / %3.2e bytes)\n", PB_SIZE, PB_SIZE);     /* (1125899906842624 bytes / 1.13e+15 bytes) */

    return 0;
}
