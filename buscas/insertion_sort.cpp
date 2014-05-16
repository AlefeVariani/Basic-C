#include<stdio.h>
#include<iostream>

using namespace std;

void insertion(int a[], int t) {
    int i,j,chave;
    for (int i=1; i< t; i++){
        chave = a[i];
        j = i-1;
        while (chave<a[j] && j>=0) {
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = chave;
    }
    for(i=0;i<t;i++){
        cout<<a[i];
    }
}
main(){
    int i,t,j;
    cout<<"\nDigite tamanho do vetor: ";
    cin>>t;
    int a[t];
    for(i=0;i<t;i++){
        cout<<"\nDigite valor: ";
        cin>>a[i];
    }
    cout<<"Ordenado: ";
    insertion(a, t);
    cout<<"\n\n";
}
