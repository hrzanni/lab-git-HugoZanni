#include <stdio.io>
#include <math.h>


int somatoria (int x, int y) {
	int i;
	long int soma = 0;
	for (i = x; i <= y; i++) {
		soma = soma + i;
	}
}

int main(void) {
	printf("\n\n :::::::::	INICIO DO PROGRAMA ::::::::: \n\n");
	printf("\n\nDigite o número x: ");
	scanf("%d", &x);
	printf("\n\nDigite o número y: ");
	scanf("%d", &y);

	soma(x,y); 

	return 0;
}
