#include <stdio.h>
#include <stdlib.h>

struct produto
{
	int codigo;
	char descricao[50];
	float preco;
	int saldo;
	
};
int main()
{
	struct produto ficha;
	
	printf("Digite o codigo do produto:");
	scanf("%d", &ficha.codigo);
	printf("Digite a descrição do produto:");
	scanf("%s", &ficha.descricao);
	printf("Digite o preço do produto:");
	scanf("%f", &ficha.preco);
	printf("Digite o saldo do produto");
	scanf("%d", &ficha.saldo);
	
	printf("Codigo : %d\n", ficha.codigo);
	printf("Descriçao : %s\n", ficha.descricao);
	printf("Preço : %f\n", ficha.preco);
	printf("Saldo : %d\n", ficha.saldo);
		
	return 0;
}
