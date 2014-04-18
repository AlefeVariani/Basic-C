#include <stdio.h>
#include <stdlib.h>

soma() {
	int a,b,resp;
	printf("\nInforme 2 valores para a soma:\n");
	scanf("%d %d", &a, &b);
	
	resp=a+b;
	
	printf("\nResultado: %d\n",resp);
}
subtracao () {
	int c,d,cal;

	printf("\nInforme 2 valores para a subtracao:\n");
	scanf("%d %d", &c, &d);

	cal=c-d;

	printf("\nResultado: %d\n",cal);
}

int main () {
	char opcao;

	printf("\nInforme a operacao desejada: + ou - \n:");
	scanf("%c",&opcao);
	
	if(opcao=='+'){
		soma ();
	}
	if (opcao=='-'){
		subtracao();
	}

	return 0;
}
