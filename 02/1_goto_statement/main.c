#include <stdio.h>

int bad_goto_statement_example(void)
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

int good_goto_statement_example(void)
{
    int y = 5;
	goto begin;
	
    begin:
        while (1) {
            --y;

            if (y == 0) {
                goto end;
		    }
        }

    end:
        return 0;	
}

int main(void)
{
    bad_goto_statement_example();
    good_goto_statement_example();

    return 0;
}
