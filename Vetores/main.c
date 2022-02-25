#include <stdio.h>
#include <stdlib.h>

int main() 
	{
	int vetorA[5];
	int i, acha, busca;
	for (i=0;i<5;i++)
	{
		printf("Digite o %d elemento", i);
		scanf("%d", &vetorA[i]);
	}
		printf("Digite o elemento que deseja buscar");
		scanf("%d", &busca);
		i = 0;
		acha = 0;
		while ((acha == 0)&&(i < 5))
		{
		if (vetorA[i] == busca)
		{
			acha = 1;
		}
		else
		{
		i++;
		}
	}
	if (acha == 1)
	printf("O elemento %d foi encontrado na posicao %d", busca, i);
	else
	printf("O elemento n�o foi encontrado.");
	
	system("pause");
	
	return (0);
}
