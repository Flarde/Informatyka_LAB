#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void wczytaj(int *, int *);

int main(){
	int k, z;
	wczytaj(&k, &z);
	printf("%d", k + z);
	return 0;
}

void wczytaj(int *wk, int *wz){
	int a, b;
	scanf("%d%d", &a,&b);
	*wk = a;
	*wz = b;
}

