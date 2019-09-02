#include <stdio.h>

int main(void)
{
    int num = 0x12345678;
    char* num_address = (char*)&num;
    size_t i = 0;
    
    for(i = 0; i < sizeof(num); ++i) {
        printf("%hhx ", *(num_address + i));
    }
    printf("\n");
    
    printf("NUM in hex form: %x", NUM);
    
    return 0;
}
