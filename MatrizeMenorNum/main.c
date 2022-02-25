#include<stdio.h>
#include<stdlib.h>

void CalculaMedia()
{
int i, j;

int CodAluno[4]={1,2,3};
char Alunos[4][50]={"Ademir","Joana","Carlos","Maria"};
float NotaAluno[4][4]={{9.8,7.3,8.4,9.8},{9.5,10,6.8,0},{8.9,8,6.8,0},{6.7,9.3,9.5,4.5}};
float MediaAluno;
//Calcula a Media Aluno
for(i=0; i<1; i++)
  for(j=0; j<5; j++){
    CodAluno[i];
    Alunos[i];
    NotaAluno[i][j];
    MediaAluno+=NotaAluno[i][j];}
    printf("\nA Média do Aluno %s Codigo %d  é: %.2f\n\n",
    Alunos[i-1], CodAluno[i-1], MediaAluno/j);
    
//Lista de notas dos Alunos
for(i=0; i<4; i++)
    for(j=0; j<4; j++){
    printf("Codigo: %d - Aluno: %s - %dª Nota : %.2f", CodAluno[i], Alunos[i], j, NotaAluno[i][j]);
    printf("\n");
    }
}
    
int main()
{
    CalculaMedia();
}



