#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int inicio, termino, duracao = 0;
	cin >> inicio >> termino;

	if(inicio == termino)
		cout << "O JOGO DUROU 24 HORA(S)\n";
	else if(inicio > termino){
		duracao = 24 - inicio;
		duracao += termino;		
		cout << "O JOGO DUROU " << duracao << " HORA(S)\n";
	}else{
		duracao = termino - inicio;
		cout << "O JOGO DUROU " << duracao << " HORA(S)\n";
	}


	
	return 0;
}