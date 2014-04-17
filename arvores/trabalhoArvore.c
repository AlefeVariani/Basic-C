#include <stdio.h>
#include <stdlib.h>
/**
* @Estudantes: Alefe Variani, Lucas Dalberto e William Moterle
*
*/

int quantidadeNos = 0;
int quantidadeSubArvores = 0;

typedef struct _no{
	int chave;
	int cont;

	struct _no *esq, *dir, *pai;
}no;

no* auxPai = NULL;

void vaziaArvore(no *raiz){
	if (raiz == NULL){
		printf("   A arvore esta vazia\n\n");
	}
	else {
		printf("   A arvore nao esta vazia\n\n");
	}
}

void insere (int x, no **p){

	if (*p==NULL){
		*p=(no *)malloc(sizeof(no));
		(*p)->chave=x;
		(*p)->dir=NULL;
		(*p)->esq=NULL;
		(*p)->pai = auxPai;
		(*p)->cont=0;
		(*p)->cont++;
	}
	else{
		if (x<(*p)->chave){
			if((*p)->esq == NULL)
				auxPai = *p;
			insere(x, &(*p)->esq);
		}
		if(x>(*p)->chave){
			if((*p)->dir == NULL)
				auxPai = *p;
			insere(x, &(*p)->dir);
		}
		if(x == (*p)->chave){
			if((*p)->dir == NULL)
				auxPai = *p;
			insere(x, &(*p)->dir);
		}
	}
}

int contaNos(no *p){
	if(p == NULL)
		return 0;
	else
		return 1 + contaNos(p->esq) + contaNos(p->dir);
}

no* busca(no *arvore, int x){
	if (arvore == NULL)
		return NULL;
	if (x == arvore->chave)
		return arvore;
	if (x < arvore->chave)
		return busca(arvore->esq, x);
	else
		return busca(arvore->dir, x);
}

void consultarValor(no* raiz){
	int num;
	no* aux;
	printf("Digite o numero procurado: ");
	scanf("%d", &num);

	aux = busca(raiz, num);
	if (aux == NULL)
		printf("Nao encontrado!\n");
	else{
		printf("Encontrado!\n");
	}
}

void consultarDetalhes(no* raiz){
	int num;
	no* aux;
	printf("Digite o numero procurado: ");
	scanf("%d", &num);
	aux = busca(raiz, num);
	if (aux == NULL)
		printf("Nao encontrado!\n");
	else{
		printf("Encontrado!\n");
		if(aux->pai == NULL){
			printf("O No que contem o valor %d e a raiz da arvore.\n", num);
			if(aux->esq != NULL)
				printf("Valor contido no No filho a esquerda: %d\n", aux->esq->chave);
			if(aux->dir != NULL)
				printf("Valor contido no No filho a direito: %d\n", aux->dir->chave);
		}
		if((aux->esq == NULL)&&(aux->dir == NULL)&&(aux->pai != NULL)){
			printf("O No que contem o valor %d e uma folha da arvore.\n", num);
			printf("Valor contido no No pai: %d\n", aux->pai->chave);
		}
		if(((aux->esq != NULL)||(aux->dir != NULL))&&(aux->pai != NULL)){
			printf("O No que contem o valor %d e um no interno a arvore.\n", num);
			printf("Valor contido no No pai: %d\n", aux->pai->chave);
			if(aux->esq != NULL)
				printf("Valor contido no No filho a esquerda: %d\n", aux->esq->chave);
			if(aux->dir != NULL)
				printf("Valor contido no No filho a direito: %d\n", aux->dir->chave);
		}
	}
}

void imprime(no *p, int nivel){
	int i;
	if(p == NULL)
		return;
	imprime(p->dir, nivel+1);
	for(i=0;i<nivel;i++)
		printf("      ");
	printf("%6d\n\n",p->chave);
	imprime(p->esq,nivel+1);

}

void consultaNivel(no *p){
	int i, nivel;
	if(p == NULL)
		return;
	imprime(p->dir, nivel+1);
	for(i=0;i<nivel;i++)
		printf("      ");
	printf("%6d\n\n",p->chave);
	imprime(p->esq,nivel+1);
}

void preordem (no *arvore){
	if(arvore != NULL){
		printf("%d\n",arvore->chave);
		preordem(arvore->esq);
		preordem(arvore->dir);
	}
}

void emordem(no *arvore){
	if(arvore != NULL){
		emordem(arvore->esq);
		printf("%d\n",arvore->chave);
		emordem(arvore->dir);
	}
}

void posordem(no *arvore){
	if(arvore != NULL){
		posordem(arvore->esq);
		posordem(arvore->dir);
		printf("%d\n",arvore->chave);
	}
}

int maior(int a, int b){
	if(a > b)
		return a;
	else
		return b;
}

int altura(no *arvore){
	if((arvore == NULL) || (arvore->esq == NULL && arvore->dir == NULL))
		return 0;
	else
		return 1 + maior(altura(arvore->esq), altura(arvore->dir));
}

int contarFolhas(no *arvore){
	if(arvore == NULL)
		return 0;
	if(arvore->esq == NULL && arvore->dir == NULL)
		return 1;
	return contarFolhas(arvore->esq) + contarFolhas(arvore->dir);
}

int contarSubArvores(no *arvore){
	if(arvore == NULL)
		return 0;
	if(arvore != NULL){
		if (arvore->pai != 0){
			if(arvore->esq != NULL && arvore->dir != NULL){
				quantidadeSubArvores ++;
			}
		}
	}
	contarSubArvores(arvore->esq);
	contarSubArvores(arvore->dir);
	return quantidadeSubArvores;
}

int menu(){
	int op;

	printf("\nMENU\n\n");
	printf("1 - Inserir noh\n");
	printf("2 - Exibir arvore\n");
	printf("3 - Buscar noh\n");
	printf("4 - Imprimir pre ordem\n");
	printf("5 - Imprimir em ordem\n");
	printf("6 - Imprimir pos ordem\n");
	printf("7 - Altura arvore\n");
	printf("8 - Total de nos da arvore\n");
	printf("9 - Total de folhas da arvore\n");
	printf("10 - Total de subarvores\n");
	printf("Digite sua opcao: ");
	scanf("%d", &op);

	return op;
}

int main(){
	int n,a,b;
	no *raiz, *aux;
	raiz = NULL;
	int opcao;

	while(opcao!=12){

		opcao = menu();
		switch(opcao){

			case 1:
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("Digite -1 para terminar\n");
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			do{
				printf("Digite um numero: ");
				scanf("%d", &n);
				if(n!=-1){
					insere(n, &raiz);
				}
			}while (n!=-1);

			break;

			case 2:
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("ARVORE BINARIA\n");
			imprime(raiz,0);
			break;

			case 3:
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			consultarDetalhes(raiz);
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			break;

			case 4:
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("------> Pre-Ordem <------\n");
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			preordem(raiz);
			break;

			case 5:
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("------> Em-Ordem <------\n");
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			emordem(raiz);
			break;

			case 6:
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("------> Pos-Ordem <------\n");
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			posordem(raiz);
			break;

			case 7:
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("Altura da arvore: %d\n", altura(raiz));
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			break;

			case 8:
			b=contaNos(raiz);
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("  A arvore possui %d nos!\n",b);
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			break;

			case 9:
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("Total de folhas da arvore: %d\n", contarFolhas(raiz));
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			break;

			case 10:
			quantidadeSubArvores = 0;
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("Total de sub arvores: %d\n", contarSubArvores(raiz));
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			break;

			default :
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			printf("opcao nao existe! tente novamente\n");
			printf("\n>>>>>>>>>>>>><<<<<<<<<<<<<\n\n");
			break;
		}

	}
	return 0;
}
