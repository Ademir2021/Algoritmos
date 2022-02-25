#include<stdio.h>

int main(){
 int num;

printf("Digite um numero inteiro:");
scanf("%d", &num);

if(num > 10)
{
    printf("O Numero é maior que 10");
}
else
{
    printf("O Numero não e maior que 10");
}

    return 0;
}