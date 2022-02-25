#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *arq;
    char palavra[50];

    arq = fopen("arquivo.txt", "w");
    if (arq == NULL)
    {
        printf("O arquivo não foi aberto. Ocorreu um erro!\n");
    }
    else
    {
        printf("Digite uma palavra: ");
        scanf("%s",palavra);
        fflush(stdin);
        while ((strcmp(palavra, "fim") != 0))
        {
            fputs(palavra, arq);
            if (ferror(arq))
            {
                printf("Erro na gravação!!!\n");
            }
            else
            {
                printf("Gravacao efetuada com sucesso!\n");
            }
            printf("Digite uma palavra: ");
            scanf("%s",palavra);
            fflush(stdin);
        }       
    }
    fclose(arq);
}