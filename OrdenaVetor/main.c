#include <stdio.h>
#include <stdlib.h>

int main()

{
	int vetorA[10];
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("Digite o %d elementos do vetor: \n", i);
		scanf("%d", &vetorA[i]);
	}
	printf ("Vetor preenchido\n");
	for (i=0;i<10;i++)
	{
		printf("O elemento da posi��o %d �: %d \n", i, vetorA[i]);
	}
	return (0);
}
