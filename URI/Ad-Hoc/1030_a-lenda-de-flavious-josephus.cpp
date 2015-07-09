#include <iostream>
using namespace std;

class Node{
public:
	int valor;
	Node *proximo;
};

int main(int argc, char const *argv[])
{
	int n, homens, saltos, caso = 1;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> homens >> saltos;

		Node *cabeca, *node;

		cabeca = node = new Node();
		cabeca->valor = 1;
		cabeca->proximo = NULL;

		for(int j = 2; j <= homens; j++){
			node->proximo = new Node();
			node = node->proximo;
			node->valor = j;
			node->proximo = cabeca;
		}

		while(node != node->proximo){ // enquanto nao restar apenas 1
			for(int k = 1; k < saltos; k++)
				node = node->proximo;

			// o proximo cara eh o que vai morrer
			node->proximo = node->proximo->proximo; // tira o cara do encadeamento(morreu)
		}
		cout << "Case " << caso++ << ": " << node->valor << '\n';
	}	
	return 0;
}   