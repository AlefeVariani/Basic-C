#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void mergesort(char *matriz,int inicio,int meio,int final);
void merge(char *matriz,int inicio,int final);

int main () {
	char s[80];
	printf ("Informe uma string a ser ordenada: ");
	strcpy(s,"bcdaoertlfsqw");;
	merge (s, 0, strlen(s)-1);
	printf("\nA string ordenada eh: %s. \n", s);
	getchar();
}
void mergesort(char *matriz,int inicio,int meio,int final)
{
	int i,j,k,l,b[20];
	l=inicio;
	i=inicio;
	j=meio+1;
	int ii,iii;

	ii= strlen(matriz);
	while((l<=meio)&&(j<=final))
	{
		if(matriz[l]<=matriz[j])
		{
			b[i]=matriz[l];
			l++;
		}
		else
		{
			b[i]=matriz[j];
			j++;
		}
		i++;
		iii = 0;
		while(iii<ii)
		{
			printf("%c\t", matriz[iii]);
			iii++;
		}
		printf("\n");
	}
	if(l>meio)
	{
		for(k=j;k<=final;k++)
		{
			b[i]=matriz[k];
			i++;
		}
		iii = 0;
		while(iii<ii)
		{
			printf("%c\t", matriz[iii]);
			iii++;
		}
		printf("\n");
	}
	else
	{
		for(k=l;k<=meio;k++)
		{
			b[i]=matriz[k];
			i++;
		}
		iii = 0;
		while(iii<ii)
		{
			printf("%c\t", matriz[iii]);
			iii++;
		}
		printf("\n");
	}
	for(k=inicio;k<=final;k++)
	{
		matriz[k]=b[k];
	}

}

void merge(char *matriz,int inicio,int final)
{
	int meio;
	int ii,iii;

	ii= strlen(matriz);
	if(inicio<final)
	{
		meio=(inicio+final)/2;
		merge(matriz,inicio,meio);
		merge(matriz,meio+1,final);
		mergesort(matriz,inicio,meio,final);
	}
}
