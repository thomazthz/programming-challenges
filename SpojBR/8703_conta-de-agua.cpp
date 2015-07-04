#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	const int FRANQUIA = 7;
	const int PRECO1 = 1;
	const int PRECO2 = 2;
	const int PRECO3 = 5;
	
	int consumo;
	cin >> consumo;

	int conta = 0;

	if(consumo >= 11 && consumo <= 30){
		conta += (consumo-10)*PRECO1;
	}else if(consumo >= 31 && consumo <= 100){
		conta += PRECO1*20;
		conta += (consumo-30)*PRECO2;
	}else if(consumo >= 101){
		conta += PRECO1*20;
		conta += PRECO2*70;
		conta += (consumo-100)*PRECO3;
	}
	conta += FRANQUIA;

	cout << conta;
	return 0;
}
