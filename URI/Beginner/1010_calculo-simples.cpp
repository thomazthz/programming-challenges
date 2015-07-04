#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){

	int cod, peca;
	float valor, total = 0;

	cin >> cod >> peca >> valor;
	total = peca*valor;
	cin >> cod >> peca >> valor;
	total += peca*valor;

	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << '\n'; 

	return 0;
}
