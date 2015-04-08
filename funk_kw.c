#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
float delta(float,float,float);

float main()
{
	float a, b, c,del;
	del = 0;
	printf("Podaj parametry funkcji kwadratowej\n");
	scanf("%f%f%f", &a, &b, &c);
	printf("\nPostac funkcji kwadratowej to:");
	if (b < 0 && c < 0)
		printf("\n%.2f x^2 %.2f x %.2f", a, b, c);
	if(b < 0 && c > 0)
		printf("\n%.2f x^2 %.2f x + %.2f", a, b, c);
	if (b > 0 && c > 0)
		printf("\n%.2f x^2 + %.2f x + %.2f", a, b, c);
	del = delta(a, b, c);
	printf("\n\nDelta wynosi %.2f\n",del);
	if (del < 0)
		printf("\nFunkcja nie ma miejsc zerowych\n");
	if (del > 0)
		printf("\nx1 = %.2f\nx2 = %.2f\n", (-b - sqrt(del)) / (2 * a), (-b + sqrt(del)) / (2 * a));
	if (del = 0)
		printf("\nx0 = %.2f\n", (-b) / (2 * a));
	return 0;
}

float delta(float a, float b, float c){
	return ((b*b) - (4 * a*c));
}
