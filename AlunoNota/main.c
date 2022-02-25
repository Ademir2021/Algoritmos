#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota, soma, media;
	int cod, contador, nnota, naprovado=0, nreprovado=0;
	
	printf("Informe o numero de notas da disciplina:");
	scanf("%d", &nnota);
	do
	{
		printf("Informe o codigo do aluno:");
		scanf("%d", &cod);
		soma = 0;
		if (cod !=0)
		{
		for (contador=1; contador<=nnota; contador++)
		{
			printf("Informe a %d nota do aluno:", contador);
			scanf("%f", &nota);
			soma = soma + nota;
		}
		media = soma/nnota;
		if (media >=6)
			naprovado ++;
			else
			nreprovado ++;
	}
}
		while (cod != 0);
		printf("O Numero de Aprovado e: %d\n",naprovado);
		printf("O Numero de reprovado e: %d\n", nreprovado);
		return (0);
}
	
