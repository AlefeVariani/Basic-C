#include <stdio.h>
#define tam 9

int parent (int i) {
    i=(i/2);
    return(i);
}

int esquerda (int i) {
    i=(2*i);
    return(i);
}
int direita (int i) {
    i=(2*i+1);
    return(i);
}

int maxheapfy(int *A, int i) {

    int esq, dir, maior, tmp;
    esq=esquerda(i);
    dir=direita(i);

    if(esq<=tam && A[esq]>A[i]){
        maior=esq;
    }else {
        maior=i;
    }

    if(dir<=tam && A[dir]>A[maior]) {
        maior = i;
    }
    if(maior!=i){
        tmp=A[i];
        A[i]=A[maior];
        A[maior]=tmp;
        maxheapfy(A, maior);
    }

}

int buildmaxheap(int *A) {
    int i;
    i=tam/2;

    while(i>=1){
        maxheapfy(A,i);
        i--;

    }

}

int heapsort(int *A) {
    int tmp, i, tamanho;
    tamanho=tam;
    buildmaxheap(A);
    i=tam;

    while(i>=2){
        tmp=A[1];
        A[1]=A[i];
        A[i]=tmp;
        tamanho--;
        maxheapfy(A,1);
        i--;

    }

}

int mostravetor(int *A) {
    int j;
    for (j=1;j<=tam;j++){
        printf("%d", A[j]);
        printf("\n");

    }

}

main() {
    int A[tam], j;
    A[1]=5;A[2]=13;A[3]=2;A[4]=25;A[5]=7;A[6]=17;A[7]=20;A[8]=8;A[9]=4;

    printf("heap inserido:\n");
    mostravetor(A);

    buildmaxheap(A);

    printf("\nheap apos ordenação:\n");
    mostravetor(A);

}






