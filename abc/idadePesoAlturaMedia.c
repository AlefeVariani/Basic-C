#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, idade, cont_g=0, cont_m=0, cont_entre=0, cont=0;
	float peso, altura, media_id=0, soma_id=0, perc;

	for(i=0;i<3;i++){
		printf("Informe idade, peso e altura da pessoa:\n");
		scanf("%d %f %f",&idade, &peso, &altura);
		soma_id=(soma_id+idade);
	}               
	
	if(peso > 90 && altura < 1.50){
		cont_g++;
	}   
	
	if(altura>1.9){
		if(idade > 10 && idade < 30){
			cont_entre++;
		}                     
		cont_m++;
	}
	cont++;
	
	
	media_id = (soma_id /i);
	perc = 100*cont_entre/cont_m;
	
	printf("media de idade da pesquisa: % 0.2f\n",media_id);
	printf("pessoas acima de 90 kg e abaixo de 1.50m: %d\n",cont_g);
	printf("percentual de pessoas maiores 1.9 entre 10 e 30 anos: %0.2f\n",perc);
	
	return 0;

}
