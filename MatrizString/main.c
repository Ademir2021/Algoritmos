#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	int i;
	char empresas[4][100];
	char busca [100];
	int encontrou = 0;
	
	printf("Digite o nome de 4 empresas de tecnoligia. \n");
	for(i=0; i<4; i++){
		gets(empresas[i]);
	}
	printf("***Empresas Cadastrada***\n");
	for(i=0; i<4; i++){
		printf("%s\n", empresas[i]);
	}
	printf("Digite o nome de uma empresa para busca. \n");
	gets(busca);
	for(i=0; i<4; i++){
	printf("encontrou %s\n", empresas[i]);
	}
	
	return 0;
}
