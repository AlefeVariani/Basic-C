#include <stdio.h>

void troca(int a, int b);

void troca(int a, int b){
	int temp;

	temp= a;
	a= b;
	b= temp;
}

int main(void)
{
	int val1, val2;
	val1= 10;
	val2= 15;

	printf("val1 = %d    val2 = %d \n", val1, val2);

	troca(val1, val2);

	printf("val1= %d     val2= %d \n", val1, val2);

	return 0;
}
