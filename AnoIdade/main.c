#include <stdio.h>
#include <stdlib.h>

int main ()
{
char nome[50];
int idade, ano;
float altura;

printf("Digite seu nome: ");
scanf("%s", &nome);
printf("Digite sua altura: ");
scanf("%f", &altura);
printf("Digite sua idade: ");
scanf("%d", &idade);
ano = 2021 - idade;
printf ("===================resultado==========================");
printf("\nNome: %s", nome);
printf("\nAltura: %.4f", altura);
printf("\nIdade: %d", idade);
printf("\nnascimentos: %d", ano);

return(0);
}
