#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double salario, imposto = 0;
	cin >> salario;
	cout << fixed << setprecision(2);
	if(salario <= 2000.0){
		cout << "Isento\n";
		return 0;
	}
	else if(salario <= 3000.0)
		imposto += (salario-2000.0)*0.08;
	else if(salario <= 4500.0){
		imposto += 1000.0*0.08;
		imposto += (salario-3000)*0.18;
	}else{
		imposto += 1000.0*0.08;
		imposto += 1500.0*0.18;
		imposto += (salario-4500)*0.28;
	}

	cout << "R$ " << imposto << '\n';
	return 0;
}