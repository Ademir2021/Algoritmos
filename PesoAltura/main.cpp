#include <stdio.h>

int main()
{
    float altura, peso;
    char sexo;

    printf("Digite o sexo (M/F) :");
    scanf("%c", &sexo);
    printf("Digite a altura :");
    scanf("%f", &altura);

    if ((sexo=='F') || (sexo=='M'))
        {
        peso = (62.1 * altura) - 44.7;
        }
        else
        {
        peso = (72.7 * altura) - 58;
        }
        printf("o sexo é: %c\n", sexo);
        printf("A altura é: %.2f\n", altura);
        printf("O peso ideal é: %.2f\n", peso);
    return 0;
}
