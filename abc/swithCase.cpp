#include <stdio.h>

int main ()
{
	int  i;
	do
	{
		printf ("\n\nEscolha a sua opiniao sobre o filme:\n\n");
		printf ("\t(1)...Otimo\n");
		printf ("\t(2)...Bom\n");
		printf ("\t(3)...Regular\n");
		printf ("\t(4)...Ruim\n");
		printf ("\t(5)...Pessimo\n");
		scanf("%d", &i); 
	} while ((i<1)||(i>5));

	switch (i)
	{
		case 1:
		printf ("\t\tVoce escolheu Otimo.\n");
		break;
		
		case 2:
		printf ("\t\tVoce escolheu Bom.\n");
		break;
		
		case 3:
		printf ("\t\tVoce escolheu Regular.\n");
		break;   	
		
		case 4:
		printf ("\t\tVoce escolheu Ruim.\n");
		break; 
		
		case 5:
		printf ("\t\tVoce escolheu Pessimo.\n");            	
		break;
	}
	return 0;
}
