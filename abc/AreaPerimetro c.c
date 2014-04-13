#include <stdio.h>
#include <stdlib.h>

int main(){
	float cc,area,perimetro;

	printf("Digite o comprimento do raio do circulo:\n");
	scanf("%f",&cc);

	if(cc>0.0){
		area=3.1415*((cc,2));
		perimetro=2*3.141516*cc;
		printf("\n A area he %.2f,e o perimetro he %2f",area, perimetro);
	}else{
		printf("\nO raio he invalido\n");
	}

	return 0;
}
