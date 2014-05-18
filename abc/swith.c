#include <stdio.h>

int main(){

	int op;
	int a=0,b=0,c=0,d=0,e=0,f=0;

	while(op!=0){    
		printf("\nDigite 1 para votar no primeiro candidato\n");
		printf("\nDigite 2 para votar no segundo candidato\n");
		printf("\nDigite 3 para votar no terceiro candidato\n");
		printf("\nDigite 4 para votar no quarto candidato\n");
		printf("\nDigite 5 para votar nulo\n");
		printf("\nDigite 6 para votar em branco\n");
		printf("\nDigite 0 para sair\n");
		scanf("%d",&op);
		switch(op){

			case 1:
			a = a+1;
			break;

			case 2:
			b++;
			break;

			case 3:
			c++;
			break;

			case 4:
			d++;
			break;

			case 5:
			e++;
			break;    

			case 6:
			f++;
			break;
		}                        
	}

	printf("\nCandidato A fez : %d\n", a);
	printf("\nCandidato B fez : %d\n", b);
	printf("\nCandidato C fez : %d\n", c);
	printf("\nCandidato D fez : %d\n", d);
	printf("\nVotos Nulos : %d\n", e);
	printf("\nVotos em Branco : %d\n", f);

	return 0;
}
