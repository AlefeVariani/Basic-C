#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char operador;
	float resultado;
	float valor1;
	float valor2;
}calculadora;

calculadora c;

void soma();
void divisao();
void multiplicacao();
void subtracao();

main()
{

	printf("\nDigite dois valores para fazer a conta \n");
	printf("Valor1: ");
	scanf("%f", &c.valor1);

	printf("Valor2: ");
	scanf("%f", &c.valor2);

	printf("\n Digite o sinal desejado para fazer a conta \n");
	printf("\n +  para a soma, -  para a subtracao, *  para a multiplicacao, /  para a divisao \n");
	scanf("%s" ,&c.operador);

	if(c.operador=='-'){
		subtracao();
	}
	if(c.operador=='+'){
		soma();
	}
	if(c.operador== '*'){
		multiplicacao();
	}
	if(c.operador== '/'){
		divisao();
	}

	return 0;
}

void subtracao(){
	c.resultado=(c.valor1-c.valor2);
	printf("O resultado da operacao e %11.2f\n", c.resultado);
}
void soma(){

	c.resultado=(c.valor1+c.valor2);
	printf("O resultado da operacao e %11.2f\n", c.resultado);
}

void multiplicacao(){
	c.resultado=(c.valor1*c.valor2);
	printf("O resultado da operacao e %11.2f\n", c.resultado);
}

void divisao(){
	c.resultado=(c.valor1/c.valor2);
	printf("O resultado da operacao e %11.2f\n", c.resultado);
}
