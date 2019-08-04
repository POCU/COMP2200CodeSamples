#include <stdio.h>

enum champ {
    CHAMP_ZED,
    CHAMP_JAX,
    CHAMP_VAYNE,
    CHAMP_LULU,
    CHAMP_LEESIN
};

enum role {
    ROLE_TOP,
    ROLE_MID,
    ROLE_JUNGLE,
    ROLE_BOTTOM,
    ROLE_SUPPORTER
};

int main(void)
{
    enum champ my_champ = CHAMP_VAYNE;
    enum role my_role = ROLE_BOTTOM;

    printf("My Role: %d\n", my_role);
    printf("My Champion: %d\n", my_champ);
    printf("\n");

    my_role = CHAMP_LEESIN;
    printf("My Role: %d\n", my_role);

    return 0;
}
