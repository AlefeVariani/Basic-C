#include <stdio.h>
#include <stdlib.h>

int main()
{
	float media;
	printf("\nInforme media do aluno:\n");
	scanf("%f",&media);
	if(media>=7){
		printf("\n Esta aprovado\n");
	}else{
		if(media>=5){
			printf("\n Esta em G3 \n");
		}else{
			if (media<=5){
				printf("\nEsta reprovado: \n");
				
			}
		}
	}

	return 0;
}
