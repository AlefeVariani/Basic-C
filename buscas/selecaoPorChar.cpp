#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void select (char *matriz, int numEle);

int main () {
     char s[80];
     printf ("Informe uma string a ser ordenada: ");
     fgets(s, sizeof(s), stdin);
     select(s, strlen(s));
     printf("\nA string ordenada eh: %s. \n", s);

}

/* ordenação por seleção */
void select (char *matriz, int numEle)
{
     register int a, b, c;
     int troca;
     register char t;
     //register cria variaveis de CPU que sao mais rapidas que variaveis de memoria

     for (a=0; a<numEle-1; ++a){
         troca=0;
         c=a;
         t=matriz[a];
         for (b=a+1; b<numEle; ++b) {
             if (matriz[b]<t) {
                c=b;
                t=matriz[b];
                troca=1;
             }
         }
         if (troca) {
            matriz[c]=matriz[a];
            matriz[a]=t;
         }
     }
}
