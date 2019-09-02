#include <stdio.h>

int main(void)
{
    const int NUM = 0x12345678;
    const char* NUM_ADDRESS = (char*)&NUM;
    size_t i;

    for (i = 0; i < sizeof(NUM); ++i) {
        printf("%hhx ", *(NUM_ADDRESS + i));
    }
    printf("\n");

    printf("NUM in hex form: 0x%x", NUM);

    return 0;
}
