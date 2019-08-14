#include <stdio.h>

void calculate_factorial(const unsigned int n)
{
	unsigned int result = 1;
	unsigned int i = 1;

	goto begin_loop;

	/* this is a bad practice */
exit_loop:
	printf("%d factorial: %d\n", n, result);
	return;

begin_loop:
	while (i <= n) {
		result *= i;
		++i;
	}

	goto exit_loop;
}

void find_number(int arr[3][3], const int n)
{
    size_t i;
    size_t j;
    int default_matrix[4][4] = {
        { 4, 1, 3, 1 },
        { 9, 2, -1, 6 },
        { 6, 0, 10, 5 },
        { 1, 2, 3, 3 },
    };

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            if (arr[i][j] == n) {
                printf("%d found in arr.", n);
                goto found;
            }
        }
    }

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {
            if (default_matrix[i][j] == n) {
                printf("%d found in default_matrix.", n);
                goto found;
            }
        }
    }

found:
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
    
    calculate_factorial(4);
    find_number(square_matrix, 0);
    find_number(square_matrix, -1);
    
    return 0;
}
