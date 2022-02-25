#include <stdio.h>
#include <stdlib.h>

 int main(void)
 {
    int vetor[5];
    int x, i;

    printf ("digite 5 numeros :");

    for (i=0;i<5;i++)   /*Este laco faz o scan de cada elemento do vetor*/
    {
       scanf("%d", &vetor[i]);
    }
    i = 1;
    x = vetor[0];

    while (i<5) /*Este laco compara cada elemento do vetor*/
    {
        if (vetor[i] < x)
        {
           x = vetor[i];
        }
        i++;
    }

    printf("\n O menor numero que voce digitou foi %d :",x);

    return 0;
 }
