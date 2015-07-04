#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){

	int func, horas;
	float valor;
	cin >> func >> horas >> valor;
	cout << "NUMBER = " << func << '\n';
	cout << "SALARY = U$ " << fixed << setprecision(2) << (horas*valor) << '\n'; 

	return 0;
}
