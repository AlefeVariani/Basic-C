#include <string.h> 
#include <stdio.h> 
#include <stdlib.h> 

void shell (char *matriz, int numEle); 

int main () { 
	char s[80]; 
	printf ("Informe uma string a ser ordenada: "); 
 strcpy(s,"bcdaoertlfsqw");//informa caracteres 
 shell(s, strlen(s)); 
 printf("\nA string ordenada eh: %s. \n", s); 
 getchar(); 
} 

/* Shellsort */ 
void shell (char *matriz, int numEle) 
{ 
	register int i, j, h, aux; 
	int ii,iii;
	ii = strlen(matriz);
	
    h=1; //inicia o incremento final em 1 

    do { 
    	h = 3 * h + 1; 
    } while (h < numEle);  
    do { 
    	h=h/3; 
    	for (i=h; i<numEle; i++) { 
    		aux=matriz[i]; 
    		j=i-h; 
    		while (j>=0 && aux<matriz[j]) { 
    			matriz[j+h]=matriz[j]; 
    			j=j-h; 
    		} 
    		matriz[j+h]=aux;
    		iii = 0;
    		while(iii<ii)
    		{
    			printf("%c\t", matriz[iii]);
    			iii++;
    		}
    		printf("\n");
    		
    	} 
    }while (h>1); 
} 
