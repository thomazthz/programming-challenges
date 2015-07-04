#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int linhas, colunas;

	cin >> linhas >> colunas;

	int campo[linhas][colunas];

	int soma = 0;
	int maior = 0;
	for(int i=0; i<linhas; i++){
		soma = 0;
		for(int j=0; j<colunas; j++){
			cin >> campo[i][j];
			soma += campo[i][j];
		}
		if(soma > maior)
			maior = soma;
	}
	for(int j=0; j<colunas; j++){
		soma = 0;
		for(int i=0; i<linhas; i++){
			soma += campo[i][j];
		}
		if(soma > maior)
			maior = soma;
	}

	cout << maior;
	
	return 0;
}
