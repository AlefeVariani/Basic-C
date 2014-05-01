/*
 * Programa: Listas Duplamente Encadeadas
 * Arquivo : lde.c
 * Autor   : Enzo Ferber 'Slackware_10'
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(a) (a*)malloc(sizeof(a))

struct node{
   int info;
   struct node *next;
   struct node *prior;
};

struct node *head;
struct node *last;

void display(void);
void menu(void);
void push(int);
void pop(int);
void ins(void);
void del(void);
void clear(void);
void flush(void);

int length(void);

void push(int valor){
   struct node *novo;
   struct node *current;

    current = head;
   novo = MALLOC(struct node);

   if(!head){
      novo->info = valor;
      novo->next = NULL;
      novo->prior = NULL;
      head = last = novo;
   }
   if(valor > last->info){
      novo->info = valor;
      novo->next = NULL;
      novo->prior = last;
      last->next = novo;
      last = novo;
      return;
   }
   if(valor < head->info){
      novo->info = valor;
      novo->next = head;
      novo->prior = NULL;
      head->prior = novo;
      head = novo;
      return;
   }
   while(current){
      if(current->info > valor){
         novo->info = valor;
         novo->next = current;
         novo->prior = current->prior;
         current->prior->next = novo;
         current->prior = novo;
      }
      current = current->next;
   }
}

void pop(int valor){
   struct node *current;

   current = head;

   if(valor == head->info){
      head = head->next;
      free(head->prior);
      return;
   }
   if(valor == last->info){
      last = last->prior;
      free(last->next);
      return;
   }
   while(current){
      if(current->info == valor){
         current->prior->next = current->next;
         current->next->prior = current->prior;
         free(current);
         return;
      }
      current = current->next;
   }
}

void display(void){
   struct node *aux;
   aux = head;
   if(!head){
      clear();
      printf("Pilha vazia.");
      getchar();
      getchar();
      return;
   }
   clear();
   while(aux){
      printf("%d\n", aux->info);
      aux = aux->next;
   }
   getchar();
   getchar();
}

void ins(void){
    int valor;
    clear();
    printf("Valor: ");
    flush();
    scanf("%d", &valor);
    push(valor);
}

void del(void){
    int valor;
    clear();
    printf("Valor: ");
    flush();
    scanf("%d", &valor);
    pop(valor);
}

void flush(void){
   fflush(stdin);
}

void clear(void){
   system("cls");
}

void menu(void){
    int op;
    while(1){
        clear(); //limpa a tela
        printf("\n\tLitas duplamente encadeadas\n\n");
        printf("\t1. Inserir\n");
        printf("\t2. Retirar\n");
        printf("\t3. Mostar\n");
        printf("\t4. Sair\n\n");
        printf("\tSua opcao: ");
        flush(); //limpa o buffer de entrada do teclado
        scanf("%d", &op); //le de 'stdin' um valor inteiro e armazena em 'op'
        switch(op){ //faz um 'switch' com o valor de op
            case 1:
                ins();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                free(head);
                free(last);
                exit(0);
            default:
                clear();
                printf("Opcao invalida");
                getchar();
        }
    }
}

int main(void){
   head = last = NULL;
   menu();

   return 0;
}
