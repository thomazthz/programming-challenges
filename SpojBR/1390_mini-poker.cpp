#include <iostream>
#include <algorithm>
using namespace std;

bool compara(const int& a, const int& b){
	return a > b;
}
int main(int argc, char const *argv[])
{
	const int CARTAS = 13;
	const int MAO = 5;
	int n, i, j, count = 1;
	int cartas[CARTAS];
	int cartaRecebida, pontuacao, cartaX, cartaY;

	cin >> n;
	for(i=0; i<n; i++){
		cout << "Teste " << count++ << '\n';

		pontuacao = 0;
		cartaX = 0;
		cartaY = 0;

		for (j = 0; j < CARTAS; ++j){	
			cartas[j] = 0;
		}
		for (j = 0; j < MAO; ++j){	
			cin >> cartaRecebida;
			cartas[cartaRecebida-1] += 1;
		}

		// procura por sequencia de 5 cartas
		bool sequencia = false;
		for(j = 0; j < 9; ++j){ // só precisa verificar até 7 (8 = 13 - 5)
			if(cartas[j] > 1){
				break;
			}else if(cartas[j] == 1){
				if(cartas[j+1] == 1 && cartas[j+2] == 1 && cartas[j+3] == 1 && cartas[j+4] == 1){
					sequencia = true;		
					cartaX = j;
					break;
				}else{
					break;
				}
			}
		}

		if(sequencia){
			pontuacao += cartaX+1 + 200;
		}else{
			//sort(cartas, cartas+CARTAS, compara);
			bool quadra = false;
			bool trinca = false;
			bool par = false;
			bool doisPares = false;

			for(j=0; j<CARTAS; ++j){
				if(cartas[j] == 4){ // é quadra?
					quadra = true;
					cartaX = j;
					break;
				}else if(cartas[j] == 3){ // é trinca?
					trinca = true;
					cartaX = j;
				}else if(cartas[j] == 2 && !par){ // é o primeiro par?
					par = true;
					cartaY = j;
				}else if(cartas[j] == 2 && par){ // é o segundo par?
					doisPares = true;
					cartaX = j;
				}
			}

			if(quadra){
				pontuacao += cartaX+1 + 180;
			}else if(trinca && par){
				pontuacao += cartaX+1 + 160;
			}else if(trinca && !par){
				pontuacao += cartaX+1 + 140;
			}else if(doisPares){
				pontuacao += 3*(cartaX+1) + 2*(cartaY+1) + 20;
			}else if(par && !doisPares){
				pontuacao += cartaY+1;
			}
		}
		
		cout << pontuacao << "\n\n";
	}
	return 0;
}
