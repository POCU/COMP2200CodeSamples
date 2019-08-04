#include <stdio.h>

enum eChamp
{
	ZED,
	JAX,
	VAYNE,
	LULU,
	LEESIN
};

enum eRole
{
	TOP,
	MID,
	JUNGLE,
	BOTTOM,
	SUPPORTER
};

int main()
{
	enum eChamp myChamp = VAYNE;
	enum eRole myRole = BOTTOM;

	printf("my role: %d\n", myRole);
	printf("my champion: %d\n", myChamp);
	printf("\n");

	myRole = LEESIN;
	printf("my role: %d\n", myRole);

	return 0;
}
