#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float raio;
	float area, perimetro;
	int sair;

	while(sair != 0)
	{
    printf("Informe o valor do raio:");
	scanf("%f", &raio);
	raio++;
	perimetro = 2 * 3.14 * raio;
	area = 3.14 * raio * raio;
	}
	printf("\nO perimetro � %.2f", perimetro);
	printf("\nA area � %.2f", area);

	return (0);
}
