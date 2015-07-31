#include <iostream>
using namespace std;

class Rainhas 
{

public:
	int contador;
	int rainha[8];
	bool imprimeTabuleiros;
	//Construtor Padrao
	Rainhas() 
	{
		contador = 0;
		imprimeTabuleiros = false;
			 //inicia o vetor inteiro de rainhas com valor 8 em cada linha 
			 //(primeira posicao com 0)
		rainha[0] = 0;
		for (int i = 1; i<8;i++){
			rainha[i] = 8;
		}
	}

	//@fn Método de inicializacao da busca pela solucao do problema
	void start() 
	{

		cout<<"--------------------------------------------------------"<<endl;     
		cout<<"----Programa de Solucao do problema das oito Rainhas----"<<endl;
		cout<<"--------------------------------------------------------"<<endl;
		char x;
		cout<<"\nDeseja ter a opcao de visualizar o tabuleiro das solucoes? (s/n)\n"<<endl;
		cin>>x;
		if (x == 's'){imprimeTabuleiros = true;}
	   //inicio da busca      
		busca (rainha,0);
	   //impressao do numero de solucoes
		cout << "Numero total de solucoes: " << contador << endl;
	}

	/*@fn Metodo de busca */
	void busca (int rainha[], int k)
	{
		
		if (rainha[0]>7) return;//percorreu todas as posicoes possiveis ja achou solucao

		if (rainha[k]>7)
		{
			k--; //retorna para a ultima rainha
			rainha[k]++;//passa para a proxima posicao da rainha
			//nova busca
			busca(rainha, k);
		}
		
		//depois de passar por todos os campos do tabuleiro...
		if ((k==7)&&(funciona(rainha,k)))//se esta na ultima posicao e funciona, achou solucao
		{
		   	contador++; //contador de solucoes
			impressao(rainha); //impressao da solucao
			rainha[k]++;
			//nova busca
			busca(rainha,k);
		}

		if (funciona(rainha,k)){ //funciona nesta posicao, passa para a proxima
			k++; //proxima rainha
			rainha[k]=0; //comeca a partir da posicao 0
		}
		else{//senao, passa para a proxima posicao
			rainha[k]++;
		}
		//nova busca    
		busca(rainha,k);
	}

	private:          
       
	//@fn funciona Testa se a rainha pode ser colocada nesta posicao
	bool funciona (int rainha[], int k)
	{
		for (int i=0; i<k; i++){
			if (ataca(i, rainha[i], k, rainha[k])) return false;
		}
		return true;
	}

	//@fn impressao funcao de impressao das solucoes
	void impressao(int rainha[])
	{
	   //imprime valores das posicoes da solucao na mariz
	   cout<<endl<<endl;		
	   cout<<" Solucao N: "<<contador<<endl;//numero da solucao
	   for (int i=0; i<8; i++) cout << i + 1 << (1 + rainha[i]) << " ";
	   cout<<endl;
		//imprime a matriz(tabuleiro) da solucao
	   char x ='n';
	   
	   //opcao de impressao dos tabuleiros
	   if (imprimeTabuleiros){
		cout<<"Deseja imprimir matriz desta solucao (s/n)?"<<endl;
		cin>>x;
	   }
	   if (x =='s'){
		for (int i=0; i<8; i++){
			for (int j=0; j<8; j++){
				if (j == rainha[i]){
					cout<<" O"; 
				}
				else{
					cout<<" x";
				}  
			}
			cout<<endl;
		}
		cout << endl;
	   }
	}

	//@fn testa todas as posicoes de ataque
	bool ataca(int x1, int y1, int x2, int y2)
	{
		if ((x1==x2)||(y1==y2)) return true;//mesma linha ou mesma coluna

		if (x1>x2){
			if ((x1-x2 == y1-y2)||(x1-x2 == y2-y1)) return true;
		}
		if (x2>x1){
			if ((x2-x1 == y2-y1)||(x2-x1 == y1-y2)) return true;
		}

		return false;
    }
};//~Fim Rainhas

//@main solucao do problemas das oito rainhas
int main()
{
   //cria objeto rainha 
	Rainhas r;
   //inicia busca pela solução
	r.start();
   //proxima linha e' necessaria para rodar o programa no windows(para a janela nao fechar)
	//system("pause");
	return 0;
}
