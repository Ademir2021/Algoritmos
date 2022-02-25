#include <stdio.h>
#include <mysql/mysql.h>

void main(void)
{
     MYSQL conexao;
    char nome[30], sexo[1];
    printf("Digite seu nome:\n");
    scanf("%s", &nome);
     printf("Digite seu sexo:\n");
    scanf("%c", &sexo);

     if ( mysql_real_connect(&conexao, "localhost", "root", "", "TWDATA", 0, NULL, 0) )
     {
         printf("conectado com sucesso!\n");
       
         mysql_query(&conexao,"INSERT INTO pessoas(nome, sexo) values("'nome'", "'sexo'");");

         mysql_close(&conexao);
     }
     else
     {
         printf("Falha de conexao\n");
         printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
     }
}