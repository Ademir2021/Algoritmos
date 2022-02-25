#include<stdio.h>

int main(){
    int i, NumContas;
    float soma, valores[50];

    printf("Digite o numero de contas a pagar: ");
    scanf("%d", &NumContas);

    for(i=1; i<=NumContas; i++){
        printf("Digite o valor da %dª conta: ", i);
        scanf("%f", &valores[i]);
}

    for (i=1; i<=NumContas; i++)
    soma = soma + valores[i];

    printf("Total a pagar é: R$%.3f\n", soma);

return 0;

}