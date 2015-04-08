#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20
void wczytaj(int tab[], int);
void wypisz(int tab[], int);
void szukaj(int tab[], int *, int*);

int main(){
	int tab1[MAX], n,*k,*z;
	printf("Podaj d³ugosc tablicy \n");
	scanf("%d", &n);
	printf("\nTablica ma wymiary [%d] \n\n", n);
	wczytaj(tab1, n);
	printf("Tablica 1\n");
	wypisz(tab1, n);
	printf("blad 1\n");
	szukaj(tab1, n,&k, &z);
	printf("\nNajwieksza wartosc = %d\nNajmniejsza wartosc = %d",k,z);
	return 0;
}

void wczytaj(int tab[], int n){
	int i;
	for (i = 0; i < n; i++)
		tab[i] = rand() % 5;
}

void wypisz(int tab[], int n){
	int i;
	for (i = 0; i < n; i++){
			printf("%3d\t", tab[i]);
		printf("\n");
	}
}
void szukaj(int tab[], int n, int *max, int*min){
	int i;
	*min = tab[0];
	*max = tab[0];
	for (i = 0; i < n; i++){
		// Warunek zamiany wartosci MAX
		if (tab[i]>*max) 
			*max = tab[i];
		if (tab[i]<*min)
			*min = tab[i];
	}
}
