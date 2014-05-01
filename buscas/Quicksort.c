#include <string.h> 
#include <stdio.h> 
#include <stdlib.h> 



 
// Quicksort 
void qs(char *matriz, int esq, int dir) { 
    register int i, j; 
    char x, y; 
    int ii,iii;
    
    ii = strlen(matriz);
    i=esq; 
    j=dir; 
    x=matriz[(esq+dir)/2]; 

    do { 
        while (matriz[i]<x && i<dir) i++; 
            while (x<matriz[j] && j>esq) j--; 
            if (i<=j) { 
                
                iii = 0;
                while(iii<ii)
                {
                    printf("%c\t", matriz[iii]);
                    iii++;
                }
                printf("\n");
                y=matriz[i]; 
                matriz[i]=matriz[j]; 
                matriz[j]=y;
                i++; 
                j--; 
 
                
            } 
    } while (i<=j); 

    if (esq<j) 
        qs(matriz, esq, j); 
    if (i<dir) 
        qs(matriz, i, dir); 
}

// funcao de inicializacao do quicksort 
void quick (char *matriz, int numEle) { 
        qs (matriz, 0, numEle-1); 
} 
 
int main () { 
    char s[80]; 
    printf ("Informe uma string a ser ordenada: "); 
    gets(s); 
    quick (s, strlen(s)); 
    printf("\nA string ordenada eh: %s. \n", s); 
    getchar(); 
}