#include <stdio.h>

int main(){
float num1, num2, resultado;
int op;

//Estrutura case em c

printf("Digite o primeiro numero:");
scanf("%f", &num1);
printf("Digite o segundo numero:");
scanf("%f", &num2);
printf("Escolha a Opereracao:\n 1 - soma\n 2 - subtracao\n 3 - Multiplicacao\n 4 - Divisao \n");
scanf("%d", &op);
if (op == 1){
    resultado = num1 + num2;
    printf("A soma é: %3.f\n", resultado);
}
else{
    if (op == 2){
        resultado = num1 - num2;
        printf("A subtração é: %.3f\n", resultado);
    }
    else{
        if (op == 3){
            resultado = num1 * num2;
            printf("A multiplicacao e: %.3f\n", resultado);
        }
        else{
            resultado = num1 / num2;
            printf("A divisao é: %.3f\n", resultado);
        } 
    }
}
return 0;
}