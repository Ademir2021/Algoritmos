#include <stdio.h>

int main(){
float num1, num2, resultado;
int op;

//Estrutura Case em C

printf("Digite o primeiro numero:");
scanf("%f", &num1);
printf("Digite o segundo numero:");
scanf("%f", &num2);
printf("Escolha a Opereracao:\n 1 - soma\n 2 - subtracao\n 3 - Multiplicacao\n 4 - Divisao \n");
scanf("%d", &op);
switch (op)
{
case 1:
    resultado = num1 + num2;
    printf("A soma é: %.3f\n", resultado);
    break;
case 2:
    resultado = num1 - num2;
    printf("A subtracao é: %.3f", resultado);
    break;
case 3:
    resultado = num1 * num2;
    printf("A Multiplicacao é: %.3f", resultado);
    break;
case 4:
    resultado = num1 / num2;
    printf("A divisao é: %.3f", resultado);
    break;
default:
    printf("Opcao invalida. \n");
    break;

}
    return 0;
}