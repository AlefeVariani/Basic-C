#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	printf("\nDigite idade\n");
	scanf("%d",&idade);
	if((idade>=5) && (idade<=7)){
		printf("\nInfantil A \n");
	}else{
		if((idade>=8) && (idade<=10)){
			printf("\nInfantil B \n");
		}else{
			if((idade>=11) && (idade<=13)){
				printf("\nJuvenil A \n");
			}else{
				if((idade>=14) && (idade<=17)){
					printf("\nJuvenil B \n");
				}else{if (idade>=18){
					printf("\n adulto  \n");
				}
			}
		}
	}
}
return 0;
}
