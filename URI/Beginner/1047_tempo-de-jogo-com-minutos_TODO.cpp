#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int hInicial, hFinal, mInicial, mFinal, duracaoHora=0, duracaoMinuto=0;
	cin >> hInicial >> mInicial >> hFinal >> mFinal;

	if(hInicial > hFinal){ // dia seguinte
		duracaoHora = 24 - hInicial + hFinal;
	}else if(hInicial < hFinal){  // mesmo dia, hora diferente
		duracaoHora = hFinal - hInicial;
	}else if(hInicial == hFinal && mInicial > mFinal){ // dia seguinte, mesma hora
		duracaoHora = 24;
	}else if(hInicial == hFinal && mInicial < mFinal){ // mesmo dia, mesma hora
		duracaoHora = 0;
	}

	duracaoMinuto = 60 - mInicial + mFinal;
	duracaoHora--;

	if(duracaoMinuto >= 60){
		duracaoHora++;
		duracaoMinuto -= 60;
	}

	cout << "O JOGO DUROU " << duracaoHora << " HORA(S) E " << duracaoMinuto << " MINUTO(S)\n";

	
	return 0;
}