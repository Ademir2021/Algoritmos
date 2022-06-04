#include<stdio.h>
#include<locale.h>

#define tam 8

//variaveis Globais
int i;
int NumContas;
float soma, valores[tam];
char contas[tam][200]={
    "Àgua",
    "Luz",
    "Internet",
    "Das Mei",
    "Evolusoft",
    "Prest. Celular",
    "Outros"
    };
float previsto[tam]={
    89.00,
    150.00,
    55.00,
    65.00,
    32.00,
    328.00,
    20.00
};

//Prototipação
void contasPagar();
void pagarContas();
void contasPrevista();
void contasPagas();

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    contasPagar();
    pagarContas();
    contasPrevista();
    contasPagas();

return (0);
getchar();
}

void contasPagar() {
   printf("\nContas a pagar por ordem de Prioridades:");
   printf("\n[ ");
   for (i = 0; i<tam; i++) {
       printf("| %s ", contas[i]);
   }
   printf("| ]\n\n");
}

void pagarContas() {
    printf("Digite o numero de contas a pagar: ");
    scanf("%d", &NumContas);
    for(i=0; i<NumContas; i++) {
        printf("\nDigite o valor da %dª conta de %s: ", i+1, contas[i]);
        scanf("%f", &valores[i]);
        printf("Conta de %s Paga: %3f \n", contas[i], valores[i]);
    }
}

void contasPrevista() {
    printf("\nContas Previstas:");
    for(i=0; i<valores[i]; i++) {
        printf("\n%s: R$%3f",contas[i], previsto[i]);
    }
}

void contasPagas() {
    printf("\n\nContas Pagas:");
    for(i=0; i<valores[i]; i++) {
        printf("\n%s: R$%3f",contas[i], valores[i]);
    }
    for (i=0; i<NumContas; i++)
    soma += + valores[i];
    printf("\nTotal de pagamentos: R$%.3f\n\n", soma);
}