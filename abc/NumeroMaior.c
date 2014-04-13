#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1,n2,n3;
	printf ("\n Informe 3 numeros:\n");
	scanf ("%f %f %f",&n1, &n2, &n3);
	if (n1>n2){
		if(n1>n3){
			printf ("\n O numero: %f he o maior \n",n1);
		}else{
			printf ("\n O numero 3: %f he o maior \n",n3);
		}
	}else{
		if (n2>n3){
			printf ("\n O numero 2: %f he o maior \n",n2);
		}else{
			printf ("\n O numero 3: %f he o maior \n",n3);
		}
	}  

	return 0;
}
