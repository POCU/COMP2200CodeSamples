#include <stdio.h>

void calculate_factorial(const int n)
{
    int result = n;
    int i = n - 1;
    goto begin_loop;

exit_loop:
    printf("%d factorial: %d\n", n, result);
    return;

begin_loop:
    while (1) {
        result *= i;
        --i;

        if (i <= 1) {
            goto exit_loop;
        }
    }
}

void find_number_in_2d_array(int arr[3][3], const int n)
{
    size_t i;
    size_t j;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            if (arr[i][j] == n) {
                goto exit_loop;
            }
        }
    }
    /* if n is not found in arr */
    printf("Number not found");

exit_loop:
    printf("Number: %d\n", n);
    printf("Index positions: (%zu, %zu)\n", i, j);
}

int main(void)
{
    int square_matrix[3][3] = {
        { 0, 1, 2 },
        { 3, 4, 5 },
        { 6, 7, 8 }
    };
    
    calculate_factorial(3);
    find_number_in_2d_array(square_matrix, 0);
    
    return 0;
}
