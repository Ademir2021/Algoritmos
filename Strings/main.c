#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	//char nome[80];
	//int tamanho;
	//printf("Digite o seu nome completo:\n");
	//gets(nome);
	//tamanho = strlen(nome);
	//printf("O comprimento do nome é: %d\n", tamanho);
	//return 0;
	char nome[80], sobrenome[80];
	printf("Digite o seu nome: ");
	gets(nome);
	printf("Digite o seu sobrenome: ");
	gets(sobrenome);
	strcat(nome, sobrenome);
	printf("Apos concatenar as strings temos que nome e: %s\n", nome);
	if (strstr(sobrenome, nome) == 0)
	{
		printf("Agora o sobrenome esta contido na variavel nome.\n");
	}
	strlwr(nome);
	printf("O nome em minusculo é: %s\n", nome);
	strupr(nome);
	printf("o nome em maiusculo é: %s\n", nome);
	return 0;
}
