#include <stdio.h>
#include <stdlib.h>

		int main() {

#define TAM 5

		int B[TAM];
	//int B[TAM] = {111, 222, 333, 444, 555};
		int i, soma=0;
		
		for(i=0; i<5; i++){
			printf("Digite a nota %d.\n", i+1);
			scanf("%d", &B[i]);
		}
	//Exemplo5
		//printf("Digite o Primeiro valor:");
		//scanf("%d", &B[0]);
		//fflush(stdin);
		//printf("O valor e: %d\n", B[0]);
		
		//printf("Digite o Segundo valor:");
		//scanf("%d", &B[1]);
		//fflush(stdin);
		//printf("O valor e: %d\n", B[1]);
		
		//printf("Digite o Terceiro valor:");
		//scanf("%d", &B[2]);
		//fflush(stdin);
		//printf("O valor e: %d\n", B[2]);
		
		//printf("Digite o Quarto valor:");
		//scanf("%d", &B[3]);
		//fflush(stdin);
		//printf("O valor e: %d\n", B[3]);
		
		//printf("Digite o Quinto valor:");
		//scanf("%d", &B[4]);
		//fflush(stdin);
		//printf("O valor e: %d\n\n", B[4]);
			
	//Exemplo1
		printf("O valor investido foi de %d\n", B[0]);
		printf("O valor investido foi de %d\n", B[1]);
		printf("O valor investido foi de %d\n", B[2]);
		printf("O valor investido foi de %d\n", B[3]);
		printf("O valor investido foi de %d\n\n", B[4]);
		
	//Exemplo2
		soma = soma + B[0]+B[1]+B[2]+B[3]+B[4];
		printf("A soma dos valores é: %d\n", soma);
		
		
	return 0;
}
