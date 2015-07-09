#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, teste = 1;
	long moradores, consumo, media, moradoresTotal;
	double mediaTotal;
	cin >> n;
	while(n != 0){
		map<long, long> imoveis;
		mediaTotal = moradoresTotal = 0;
		for(int i = 0; i < n; i++){
			cin >> moradores >> consumo;
			imoveis[consumo/moradores] += moradores;
			moradoresTotal += moradores;
			mediaTotal += consumo;
		}

		cout << "Cidade# " << teste++ << ":\n";
		map<long, long>::iterator it;

		for(it = imoveis.begin(); it != imoveis.end(); ++it){
			cout << it->setprecisionecond << '-' << it->first << ' ';
		}
		cout << '\n';

		cout << "Consumo medio: " << fixed << setprecision(2) << mediaTotal/moradoresTotal << " m3.\n"; 

		cin >> n;
		if(n > 0)
			cout << '\n';
	}

	return 0;
}