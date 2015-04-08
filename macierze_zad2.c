#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 7


void wczytaj(int tab[][MAX], int, int);
void wypisz(int tab[][MAX], int, int);
double sumowanie(int t1[][MAX], int, int);

void main(){

	int tab1[MAX][MAX], n, m,x;
	x = 0;
	printf("Podajwymiary tablicy \n");
	scanf("%d%d", &n, &m);
	printf("\nTablica ma wymiary [%d][%d] \n\n", n, m);
	wczytaj(tab1, n, m);
	printf("Tablica 1\n");
	wypisz(tab1, n, m);
	sumowanie(tab1, n, m);
		return 0;

}
void wczytaj(int tab[][MAX], int n, int m){
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			tab[i][j] = rand() % 10;
}

void wypisz(int tab[][MAX], int n, int m){
	int i, j;
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++)
			printf("%3d\t", tab[i][j]);
		printf("\n");
	}
}

double sumowanie(int tab[][MAX], int n, int m)
{
	int i, j, t, y;
	t = 0;
	y = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == j)
				t += tab[i][j];
		}
	}
	for (i = n-1; i+1 !=0; i--)
	{
		for (j = 0; j < m; j++)
		{
			if (i + j == n-1)
			{
				t += tab[i][j];
			}
		}


	}
	printf("\n\nSuma przekatnych to: %d", t);
}