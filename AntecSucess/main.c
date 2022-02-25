#include <stdio.h>
#include <stdlib.h>

/* Sem comentarios */

int main(int argc, char *argv[]) {
	
	int ant, suc, num;
	
	printf("Digite um numero:");
	scanf("%d", &num);
	ant = num - 1;
	suc = num + 1;
	printf("\nSucesso é %d", suc);
	printf("\nAntecessor é %d", ant);
	
	return (0);
}
