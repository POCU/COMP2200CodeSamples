#include <stdio.h>

int x = 100;

void IncreaseNumber()
{
	int y = 200;
	y += 100;
	x += 100;
}

int main()
{
	printf("%d\n", x);
	IncreaseNumber();
	printf("%d\n", x);
	printf("%d\n", y);
	return 0;
}
