#include <stdio.h>

int avoid_this_goto_statement(void)
{
    int x = 5;
    goto begin;

    end:
        return 0;

    begin:
        while (1) {
            --x;

            if (x == 0) {
                goto end;
            }
        }
}

int use_this_goto_statement(void)
{
    int x;
    int y;

    for (x = 0; x < 5; ++x) {
        for (y = 0; y < 5; ++y) {
            if (x == 2 && y == 2) {
                goto end;
            }
        }
    }

    end:
        return 0;
}

int main(void)
{
    avoid_this_goto_statement();
    use_this_goto_statement();

    return 0;
}
