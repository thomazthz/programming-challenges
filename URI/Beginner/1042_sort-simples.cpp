#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int numeros[3];
	int menor;
	int i, j;
	cin >> numeros[0] >> numeros[1] >> numeros[2];

	int ordenados[3] = {numeros[0], numeros[1], numeros[2]};

	for(j = 1; j < 3; j++){
		menor = ordenados[j];
		i = j - 1;
		while(i >= 0 && ordenados[i] > menor){
			ordenados[i+1] = ordenados[i];
			i--;
		}
		ordenados[i+1] = menor;
	}
	
	for(i = 0; i < 3; i++)
		cout << ordenados[i] << '\n';

	cout << '\n';

	for(i = 0; i < 3; i++)
		cout << numeros[i] << '\n';
	
	return 0;
}