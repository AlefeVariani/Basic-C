//demonstra a árvore binária
#include <iostream>
#include <stack>

using namespace std;

class Node
{
public:
    int iData; //item de dados (chave)
    double dData; //item de dados
    Node* pLeftChild; //filho esquerdo deste nó
    Node* pRightChild; //filho direito deste nó

    //////////////////////////////////////////////////////////////////
    //construtor
    Node():
    iData(0), dData(0.0), pLeftChild(NULL), pRightChild(NULL)
    { }
    //--------------------------------------------------------------------
    ~Node( ) //destruidor
    { cout << "x-" << iData << " "; }
    //--------------------------------------------------------------------
    void displayNode( )
    {
    	cout << '{' << iData << ", " << dData << "} ";
    }
}; //end classe Node

//////////////////////////////////////////////////////////////////
class Tree
{
private:
        Node* pRoot; //primeiro nó da árvore

    public:
    //----------------------------------------------------
    Tree( ) : pRoot(NULL) //construtor
    { }
    //----------------------------------------------------
    Node* find(int key) //encontre nó com dada chave
    {                   //(assume arvore nao vazia)
        Node* pCurrent = pRoot; //comece na raiz
        while(pCurrent->iData != key) //se não houver correspondência
        {
            if(key < pCurrent->iData) //vá para esquerda?
            	pCurrent =  pCurrent->pLeftChild;
            else
                pCurrent = pCurrent->pRightChild;// ou direita
            if(pCurrent == NULL) //se não há filhos,
                return NULL; //não encontrou
        }
        return pCurrent; //encontrou
    } // end find()

//---------------------------------------------------------

void insert(int id, double dd) //insira novo nó
{
    Node* pNewNode = new Node; //faça novo nó
    pNewNode->iData = id; //isira dados
    pNewNode->dData = dd;
    if(pRoot==NULL) //Nenhum nó na raiz
    	pRoot = pNewNode;
    else
    {
        Node* pCurrent = pRoot; //comece na raiz
        Node* pParent;
        while(true) //sai internamente
        {
        	pParent = pCurrent;
            if(id < pCurrent->iData) // vá para a esquerda
            {
            	pCurrent = pCurrent->pLeftChild;
                if(pCurrent == NULL) //se no final da linha,
                { //insira na esquerda
                	pParent->pLeftChild = pNewNode;
                	return;
                }
            } //fim if para esquerda
            else{
            	pCurrent = pCurrent->pRightChild;
                if(pCurrent == NULL) //se no final da linha
                { //insira na direita
                	pParent->pRightChild = pNewNode;
                	return;
                }
            } // fim else para direita
        }
    }//fim else não raiz
}//fim insert()
//---------------------------------------------------------------------------------------------------
void traverse(int traverseType)
{
	switch(traverseType)
	{
		case 1:
		cout << "\nPre ordem: ";
		preOrder(pRoot);
		break;
		case 2:
		cout << "\nNa ordem: ";
		inOrder(pRoot);
		break;
		case 3:
		cout << "\nPos ordem: ";
		postOrder(pRoot);
		break;
	}
	cout << endl;
}

//----------------------------------------------------------------------------------------------------
void preOrder(Node* pLocalRoot) // esquerda da árvore pai e filhos antes dos nodos direitos
{
	if(pLocalRoot != NULL)
	{
        cout << pLocalRoot->iData << " "; //exiba o nó
        preOrder(pLocalRoot->pLeftChild); //filho esquerdo
        preOrder(pLocalRoot->pRightChild); //filho direito
    }
}

//------------------------------------------------------------------------------------------------------

void inOrder(Node* pLocalRoot)// começa na folha esquerda apresenta o seu pai e os nodos contidos a direita do nodo pai
{
	if(pLocalRoot != NULL)
	{
		if(pLocalRoot != NULL)
		{
            inOrder(pLocalRoot->pLeftChild); // filho esquerdo
            cout << pLocalRoot->iData << " "; //exiba o nó
            inOrder(pLocalRoot->pRightChild); // filho direito
        }
    }
}

//-------------------------------------------------------------------------------

void postOrder(Node* pLocalRoot)
{
	if(pLocalRoot != NULL)
	{
        postOrder(pLocalRoot->pLeftChild); //filho esquerdo
        postOrder(pLocalRoot->pRightChild); //filho direito
        cout << pLocalRoot->iData << " "; //exiba o nó
    }

}

//----------------------------------------------------------------------------------

void displayTree()
{
	stack<Node*> globalStack;
	globalStack.push(pRoot);
	int nBlanks = 64;
	bool isRowEmpty = false;

	cout <<
	"..................................................................";
	cout << endl;
	while(isRowEmpty == false)
	{
		stack<Node*> localStack;
		isRowEmpty = true;

		for(int j=0; j<nBlanks; j++)
			cout << ' ';

		while(globalStack.empty()==false)
		{
			Node* temp = globalStack.top();
			globalStack.pop();
			if(temp != NULL)
			{
				cout << temp->iData;
				localStack.push(temp->pLeftChild);
				localStack.push(temp->pRightChild);

				if(temp->pLeftChild != NULL || temp->pRightChild != NULL){
					isRowEmpty = false;
				}
			}else{
				cout << "--";
				localStack.push(NULL);
				localStack.push(NULL);
			}
			for(int j=0; j<nBlanks*2-2;j++)
				cout << ' ';
        }//fim while globalstack não vazia
        cout << endl;
        nBlanks /= 2;
        while(localStack.empty() == false)
        {
        	globalStack.push( localStack.top());
        	localStack.pop();
        }
    } //fim while isRowEmpty é falso
    cout <<
    "...................................................................................";
    cout << endl;

}// fim displayTree()

void destroy() // exclui todos os nós
{
    destroyRec(pRoot); // começa na raiz
}

void destroyRec(Node* pLocalRoot) //exclui nós nesta subarvore
{
	if(pLocalRoot != NULL)
    { //usa postOrder
        destroyRec(pLocalRoot->pLeftChild); //subárvore esquerda
        destroyRec(pLocalRoot->pRightChild); //subarvore direita
        delete pLocalRoot;
    }
}

//----------------------------------------------------------------------------------------------------------

}; // end classe tree

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
	int value;
	char choice;
	Node* found;
    Tree theTree; //crie arvore

    theTree.insert(50, 5.0);
    theTree.insert(25, 2.5);
    theTree.insert(75, 7.5);
    theTree.insert(12, 1.2);
    theTree.insert(37, 3.7);
    theTree.insert(43, 4.3);
    theTree.insert(30, 3.0);
    theTree.insert(33, 3.3);
    theTree.insert(87, 8.7);
    theTree.insert(93, 9.3);
    theTree.insert(97, 9.7);
    theTree.insert(65, 7.0);
    theTree.insert(94, 9.7);
    theTree.insert(98, 7.0);
    theTree.insert(99, 7.0);

    while(choice != 'q'){
    	cout << "Entre com a letra indicada";
    	cout << "Mostrar (s), Inserir (i), Buscar (f), Ler (t), Sair (q)";
    	cin >> choice;
    	switch(choice)
    	{
    		case 's':
    		theTree.displayTree();
    		break;
    		case 'i':
    		cout << "Entre com o valor para inserir: ";
    		cin >> value;
    		theTree.insert(value, value + 0.9);
    		break;
    		case 'f':
    		cout << "Entre com o valor para encontrar: ";
    		cin >> value;
    		found = theTree.find(value);
    		if(found != NULL){
    			cout << "Resultado da busca: ";
    			found->displayNode();
    			cout << endl;
    		}else{
    			cout << "Valor não encontrado";
    		}
    		break;
    		case 't':
    		cout << "Entre com o tipo  desejado para percorrer a arvore (1=preorder, 2=inorder, 3=postorder):";
    		cin >> value;
    		theTree.traverse(value);
    		break;
    		case 'q':
    		theTree.destroy();
    		cout << endl;
    		break;
    		default:
    		cout << "Parametro invalido\n";

        }//fim switch
    }//fim while
    return 0;
}
