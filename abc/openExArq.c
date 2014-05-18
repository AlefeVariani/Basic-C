#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int matricula [100];
	char nome [100];
	FILE * alunos;


	alunos = fopen("arquivo.txt","w");

	printf("\nDigite numero da matricula\n");
	scanf("%d",&matricula);

	printf("\nDigite o nome do aluno\n");
	scanf("%s",&nome);

	fclose (alunos);

	return 0;
}
