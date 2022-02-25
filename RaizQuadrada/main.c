#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int num;
	int quadr, raiz;
	printf("Escreva um num :");
	scanf("%d", &num);
	
	raiz = sqrt (num);
	printf("A raiz quadrada e %d\n", raiz);
	quadr = num * num;
	printf("O num elevado ao quadrado e %d\n", quadr);
	return 0;
}
