#include <stdio.h>

int main(){

int h=0, n, i=1;

printf("Informe valor");
scanf("%d", &n);

while (i <= n){

    h = h + i;
    printf("\nValor eh %d", h);
    i++;

}
 return 0;
}
