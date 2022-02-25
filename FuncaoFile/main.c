#include<stdio.h>
int main(){
    FILE *arq;
    char letra;
    arq = fopen("arquivo.txt", "w");
    if (arq == NULL){
    printf("O arquivo não foi aberto. ocorreu um erro!\n");
    }
    else
    {
    printf("Digite um caractere:");
    scanf("%c", &letra);
    fflush(stdin);
    while ((letra != 'f') && (letra !='F')){
    fputc(letra, arq);
    if (ferror(arq)){
    printf("erro na gravação !!!\n");
    }
    else
    {
    printf("Gravação efetuada com sucesso!\n");
    }
    printf("Digite outro caractere: ");
    scanf("%c", &letra);
    fflush(stdin);
    }
    }
    fclose(arq);
}