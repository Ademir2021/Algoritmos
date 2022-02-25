#include<stdio.h>
#include<math.h>

int main(){

 float raio[20];
 float area;
 int i=0;

	for (i=0; i<5; i++)

 { printf("Digite  %d Raio. para Calcular a Area:" ,i);
	scanf("%f", &raio[i]);
	fflush(stdin);}


	for (i=0; i<5; i++){ 
		printf("\nO valores do Raio para calcular a %d area é: %3.f\n",i , raio[i]);
	}

	for (i=0; i<5; i++){
	area = raio[i] * raio[i] * 3.1415;
	printf("\n O Calculo da %d Area e: %3.f\n",i, area);
	}

	 return(0);
}
