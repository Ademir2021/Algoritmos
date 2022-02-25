#include<stdio.h>
#include<mysql/mysql.h>

void main (void)
{
    MYSQL conexao;

    mysql_init(&conexao);
    if (mysql_real_connect(&conexao, "localhost","root","","TWDATA",0,NULL,0))
    {
        printf("Conectado com sucesso!\n");
        mysql_close(&conexao);
    }
    else
    {
        printf("Falha na conexao\n");
        printf("Erro %d:%s\n", mysql_errno(&conexao), mysql_error(&conexao));
    }

    if (mysql_query(&conexao, "INSERT INTO pessoas VALUES(nome,'sexo')")) {
      //mysql_error(&conexao);