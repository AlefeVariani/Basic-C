#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,m,mc;
	printf("\nInforme 3 numeros:\n");
	scanf("%d %d %d",&a,&b,&c);
	m=0;
	mc=0;
	if((a==b) && (b==c)){
		printf("\nTodos sao iguais\n");
	}else{
		if((a!=b) && (b!=c) && (a!=c)){
			printf("\nTodos sao diferente\n");
		}else{
			printf("\nDois deles sao iguais\n");
		}
	}
	if((a%2)==0){
		m=m+a;
		mc=mc+1;
	}
	if((b%2)==0){
		m=m+b;
		mc=mc+1;
	}
	if((c%2)==0){
		m=m+c;
		mc=mc+1;
	}
	printf("\nA media dos pares eh:\n %.2d",m/mc);                                           
	
	return 0;
}
