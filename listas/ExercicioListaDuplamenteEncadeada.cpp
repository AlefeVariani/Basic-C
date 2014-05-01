#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
// Alefe Variani e William Moterle

using namespace std;

class Contatos{
    public:
        string nome;
        string endereco;
        string email;
        int telefone;
        Contatos *cProximo;
        Contatos *cAnterior;

    public:
        Contatos(string nom, string ende, string emai, int tel) :
        nome(nom),endereco(ende), email(emai), telefone(tel), cProximo(NULL), cAnterior(NULL){ }

    void displayContatos(){
        cout << "\nNome: "<< nome << "\nEndereco: "<< endereco << "\nEmail: "<< email << "\nTelefone: "<< telefone << "\n";
    }

};

class DoublyLinkedList{
    private:
        Contatos* pFirst;
        Contatos* pLast;
    public:

    DoublyLinkedList():
        pFirst(NULL), pLast(NULL){ }

    ~DoublyLinkedList(){
            Contatos* pCurrent = pFirst;
            while(pCurrent != NULL){
                Contatos* aux = pCurrent;
                pCurrent = pCurrent->cProximo;
                delete aux;
            }
        }

    bool isEmpty(){ return pFirst==NULL; }

    void insertFirst(string nome, string endereco, string email, int telefone){

            Contatos* cNewContato = new Contatos(nome, endereco,email,telefone);

            if(isEmpty())
                pLast = cNewContato;
            else
                pFirst->cAnterior = cNewContato;

            cNewContato->cProximo = pFirst;
            pFirst = cNewContato;
        }

    void insertLast(string nome, string endereco, string email, int telefone){
            Contatos* cNewContato = new Contatos(nome, endereco, email, telefone);

           if( isEmpty() )
                pFirst = cNewContato;
            else
            {
                pLast->cProximo = cNewContato;
                cNewContato->cAnterior = pLast;
            }
            pLast = cNewContato;
        }

    void removeFirst(){
            Contatos* pTemp = pFirst;
            if(pFirst->cProximo == NULL)
                pLast = NULL;
            else
                pFirst->cProximo->cAnterior = NULL;
            pFirst = pFirst->cProximo;
            delete pTemp;
        }

    void removeLast(){
            Contatos* pTemp = pLast;
            if(pFirst->cProximo == NULL)
                pFirst = NULL;
            else
                pLast->cAnterior->cProximo = NULL;
            pLast = pLast->cAnterior;
            delete pTemp;
        }

    bool insertAfter(string key, string nome, string endereco, string email, int telefone){
            Contatos* pCurrent = pFirst;
            while(pCurrent->nome != key){
                pCurrent = pCurrent->cProximo;
                if(pCurrent == NULL)
                    return false;
            }

            Contatos* cNewContato = new Contatos(nome, endereco, email, telefone);

            if(pCurrent==pLast) {
                cNewContato->cProximo = NULL;
                pLast = cNewContato;
            }else{
                cNewContato->cProximo = pCurrent->cProximo;
                pCurrent->cProximo->cAnterior = cNewContato;
            }

            cNewContato->cAnterior = pCurrent;
            pCurrent->cProximo = cNewContato;
            return true;
        }

    bool removeKey(string key){
        Contatos* pCurrent = pFirst;
        while(pCurrent->nome != key){
            pCurrent = pCurrent->cProximo;
            if(pCurrent == NULL)
                return false;
        }
        if(pCurrent == pFirst)
            pFirst = pCurrent->cProximo;
        else
            pCurrent->cAnterior->cProximo = pCurrent->cProximo;

        if(pCurrent==pLast)
            pLast = pCurrent->cAnterior;
        else
            pCurrent->cProximo->cAnterior = pCurrent->cAnterior;
        delete pCurrent;
        return true;
    }

    void displayForward(){

        cout << "\nListar contatos em ordem crescente: \n";
        cout << "======================================\n";
        Contatos* pCurrent = pFirst;
        while(pCurrent != NULL){
            pCurrent->displayContatos();
            pCurrent = pCurrent->cProximo;
        }
        cout << endl;
    }

    void displayBackward(){
        cout << "\nListar contatos em ordem descrescente: \n";
        cout << "==========================================\n";
        Contatos* pCurrent = pLast;
        while(pCurrent != NULL){
            pCurrent->displayContatos();
            pCurrent = pCurrent->cAnterior;
        }
        cout << endl;
    }
};

void menu(DoublyLinkedList theList){

    int opcao, telefone;
    string nome,endereco,email;

    cout << "\n================MENU===================\n" ;
    cout << "\n 1. Incluir contato no inicio da lista;" ;
    cout << "\n 2. Incluir contato ao fim da lista;" ;
    cout << "\n 3. Incluir contato após outro contato desejado;" ;
    cout << "\n 4. Excluir contato desejado;" ;
    cout << "\n 5. Listar os contatos em ordem ascendente;" ;
    cout << "\n 6. Listar os contatos em ordem decrescente;" ;
    cout << "\n 0. Para sair;" ;
    cout << "\n=======================================\n";
    cout << "\nInforme opção: ";
    cin >> opcao;
    system("clear");

    switch (opcao) {
        case 1: {
            cout << "\nInforme nome:\n";
            cin >> nome;
            cout << "\nInforme endereço:\n";
            cin >> endereco;
            cout << "\nInforme email:\n";
            cin >> email;
            cout << "\nInforme telefone:\n";
            cin >> telefone;
            theList.insertFirst(nome, endereco, email, telefone);

            break;
            }
        case 2: {
            string nome,endereco,email;
            int telefone;

            cout << "\nInforme nome:\n";
            cin >> nome;
            cout << "\nInforme endereço:\n";
            cin >> endereco;
            cout << "\nInforme email:\n";
            cin >> email;
            cout << "\nInforme telefone:\n";
            cin >> telefone;
            theList.insertLast(nome, endereco, email, telefone);

            break;
            }
        case 3: {
            string key, nome,endereco,email;
            int telefone;
            cout << "\nInforme nome para inserir após:\n";
            cin >> key;

            cout << "\nInforme nome:\n";
            cin >> nome;
            cout << "\nInforme endereço:\n";
            cin >> endereco;
            cout << "\nInforme email:\n";
            cin >> email;
            cout << "\nInforme telefone:\n";
            cin >> telefone;

            theList.insertAfter(key, nome, endereco, email, telefone);

            break;
            }
        case 4: {
            string key;

            cout << "\nInforme nome a ser removido:\n";
            cin >> key;
            theList.removeKey(key);
            cout << "\nExcluido!!!\n";

            break;
            }
        case 5: {

            theList.displayForward();

            break;
            }
        case 6: {

            theList.displayBackward();
            break;
            }
        default:
            cout <<"\n***************************************";
            cout <<"\nOpção invalida!";
            cout <<"\n***************************************\n";

            break;
    }
    menu(theList);
}

int main(){
    DoublyLinkedList theList;
    menu(theList);
    return 0;
}
