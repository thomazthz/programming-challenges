#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, quantidade, cobaias = 0, ratos = 0, coelhos = 0, sapos = 0;
	char tipo;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> quantidade >> tipo;
		cobaias += quantidade;

		switch(tipo){
			case 'C':
				coelhos += quantidade;
			break;
			case 'R':
				ratos += quantidade;
			break;
			case 'S':
				sapos += quantidade;
			break;
		}
	}

	cout << "Total: " << cobaias  << " cobaias\n";
	cout << "Total de coelhos: " << coelhos << '\n';
	cout << "Total de ratos: " << ratos << '\n';
	cout << "Total de sapos: " << sapos << '\n';
	cout << fixed << setprecision(2);
	cout << "Percentual de coelhos: " << ((double)coelhos/(double)cobaias)*100.0 << " %\n";
	cout << "Percentual de ratos: " << ((double)ratos/(double)cobaias)*100.0 << " %\n";
	cout << "Percentual de sapos: " << ((double)sapos/(double)cobaias)*100.0 << " %\n";
	return 0;
}