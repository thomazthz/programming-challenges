#include <iostream>
#include <vector>
using namespace std;

bool subconjunto(){
	int valor, nMoedas;

	cin >> valor >> nMoedas;
	bool armazenados[valor+10];
	vector<int> somas(valor+10);
	vector<int> moedas(nMoedas);
	int moeda;
	
	for(int i = 0; i < valor+10; i++){
		armazenados[i] = false;
	}

	for(int i = 0; i < nMoedas; i++){
		cin >> moeda;
		moedas.push_back(moeda);
	}

	vector<int>::iterator mIt;
	vector<int>::reverse_iterator sIt;
	
	bool r = false;
	for(mIt = moedas.begin(); mIt != moedas.end(); ++mIt){
		int moedaAtual = *mIt;
		if(moedaAtual == valor){
			return true;
		}

		if(moedaAtual < valor){
			if(!armazenados[moedaAtual]){ // ainda nao foi armazenado 
				armazenados[moedaAtual] = true;
				somas.push_back(moedaAtual);
				 //cout << "Adicionando soma " << moedaAtual << endl;

			}
			
			for(sIt = somas.rbegin()+1; sIt != somas.rend(); ++sIt){ //somas.end()-1 pra não considerar o ultimo incluido
				int somaAtual = *sIt + moedaAtual;
				if(somaAtual == valor){
					return true;
				}

				if(somaAtual < valor){
					if(!armazenados[somaAtual]){
						armazenados[somaAtual] = true;
						somas.push_back(somaAtual);
						//cout << "Adicionando soma " << (somaAtual) << endl;
					}
				}
			}
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{
	cout << (subconjunto() ? 'S' : 'N') << endl;
	return 0;
}