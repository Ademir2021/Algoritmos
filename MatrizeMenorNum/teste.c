#include<stdio.h>

int main()
{
int cont=0;
int desbalanceada;
float Vetor[5]={3000,490,670,720,890};

for(cont=0; cont<5; cont++)
if (Vetor[cont] < desbalanceada){
    desbalanceada=Vetor[cont];
}
printf("O Menor Numero é o: %d \n", desbalanceada);
}