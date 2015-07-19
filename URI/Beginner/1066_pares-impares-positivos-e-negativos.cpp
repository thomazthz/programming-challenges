#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n[5]; 
	int pares, impares, positivos, negativos;

	pares = impares = positivos = negativos = 0;

	for(int i = 0; i < 5; i++){
		cin >> n[i];
		if(n[i] % 2 == 0)
			pares++;
		else
			impares++;

		if(n[i] > 0)
			positivos++;
		else if(n[i] < 0)
			negativos++;
	}
	
	cout << pares << " valor(es) par(es)\n";
	cout << impares << " valor(es) impar(es)\n";
	cout << positivos << " valor(es) positivo(s)\n";
	cout << negativos << " valor(es) negativo(s)\n";
	return 0;
}