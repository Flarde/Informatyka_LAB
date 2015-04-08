#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(a, b, i, x)
{
	a = 0;
	i = 0;
	// funkcja SWITCH
	printf("Wpisz cyfre petli \nFOR 1\nWHILE 2\nDO ... WHILE 3\n");
	scanf("%d", &x);
	switch (x)
	{
	case 1:
	{
		// funkcja FOR
		printf("PETLA FOR\n");
		for (i = 0; i <= 10; i++)
		{
			a += 1;
		}
		printf("Wynik to: %d\n\n", a);
		break;
	}
	case 2:
	{
		// funkcja WHILE
		printf("PETLA WHILE\n");
		printf("Podaj 10 liczb\n");
		while (i < 10)
		{
			scanf("%d", &b);
			a += b;
			i++;
		}
		printf("Wynik to: %d\n", a);
		break;
	}
	case 3:{
		// petla DO ... WHILE
		printf("PETLA DO ... WHILE\n");
		printf("Podaj 10 liczb\n");
		do
		{
			scanf("%d", &b);
			a += b;
			i++;
		} while (i < 10);
		printf("Wynik to: %d\n", a);
	}
	}
	return 0;

}