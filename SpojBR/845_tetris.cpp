#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 12;

struct jogador{
	int pontuacao;
	char nome[16];
};

bool compare(jogador a, jogador b){
	if(a.pontuacao - b.pontuacao == 0)
		return strcmp(b.nome, a.nome) > 0 ? true : false;
	return a.pontuacao > b.pontuacao;
}

int main(int argc, char const *argv[])
{	
	int J, i, j, soma, maior, menor, pontos, pontoAnterior, pos, teste = 0;

	while(cin >> J && J != 0){
		vector<jogador> jogadores;	
		for(j = 0; j < J; j++){
			soma = 0;
			maior = 0;
			menor = 1000;
			jogador jog;
			cin >> jog.nome;
			
			for(i = 0; i < N; i++){
				cin >> pontos;
				soma += pontos;

				if(pontos > maior)
					maior = pontos;
				if(pontos < menor)
					menor = pontos;
			}

			soma -= (maior + menor);
			jog.pontuacao = soma;

			jogadores.push_back(jog);
		}
		sort(jogadores.begin(), jogadores.end(), compare);
		
		cout << "Teste " << ++teste << '\n';

		pos = 0;
		pontoAnterior = 0;
		for(i = 0; i < J; i++){
			if(jogadores[i].pontuacao != pontoAnterior)
				pos = i+1;

			cout << pos << ' ' << jogadores[i].pontuacao << ' ' << jogadores[i].nome << '\n';

			pontoAnterior = jogadores[i].pontuacao;	
		}
		cout << '\n';

	}

}
