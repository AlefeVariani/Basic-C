#include <stdio.h>
#include <stdlib.h>

float calcula_media (float n1, float n2, float n3, char tipo){
	float media;
	
	if(tipo=='a'){
		media=(n1+n2+n3)/3;
	}else{
		
		media=(n1 * 5 + n2 * 3 + n3 * 2)/10;
		
	}
	return media;
}                           

int main (){
	float a,b,c,media;
	char opcao;
	
	printf("Informe 3 notas do aluno: \n");
	scanf("%f %f %f",&a,&b,&c);
	
	printf("Digite A para aritmetica ou P para ponderada:");
	
	fflush(stdin);
	
	scanf("%c",&opcao);
	printf("Resultado %f",calcula_media(a,b,c,opcao));
	media=calcula_media(a,b,c,opcao);
	
	return 0;
}
