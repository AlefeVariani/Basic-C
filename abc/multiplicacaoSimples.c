#include <stdio.h>
#include <stdlib.h>

int multiplica(int a, int b){
	
	int multiplica,n1;
	
	n1=100;
	
	multiplica=a*b*n1;
	
	return multiplica;
}

int main(){
	int n1, n2, m;
	printf("informe 2 numero\n");
	scanf ("%d%d",&n1, &n2);
	
	m = multiplica(n1, n2);
	
	printf("O resultado da multiplicacao eh:%d\n",m);
	
	return 0;
}
