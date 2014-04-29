#include <stdio.h>
#define NUM 10
typedef struct mercadorias{
    char nome[10];
    int codigo;
    int estoque;
    float preco;

} Func;

main(){

Func merca[NUM];
 int i, cod;
 for(i = 1; i <= NUM; i++){

    printf("Informe o codigo do produto:");
    scanf("%d",&merca[i].codigo);

    printf("Informe o nome do produto:");
    scanf("%s",&merca[i].nome);

    printf("Informe o preco do produto:");
    scanf("%f",&merca[i].preco);

    printf("Informe a quantidade de estoque do produto:");
    scanf("%d",&merca[i].estoque);

    printf("\n*********************************************\n");

 }
 cod = 1;
 while(cod != 0){

    printf("Informe o codigo para busca do produto");
    scanf("%d",&cod);
    for(i = 1; i <= NUM; i++){
        if(cod == merca[i].codigo){

            printf("\ncodigo do produto: %d\n", merca[i].codigo);

            printf("\nnome do produto: %s\n",merca[i].nome);

            printf("\npreco do produto: %f\n",merca[i].preco);

            printf("\nquantidade de estoque do produto: %d\n", merca[i].estoque);
            printf("********************************");
        }
    }

 }
return 0;

}
