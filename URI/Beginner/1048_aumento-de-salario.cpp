#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double salario, novoSalario, reajuste, percentual;

	cin >> salario;

	cout << fixed << setprecision(2);

	if(salario <= 400.00){
		percentual = 15.0;
	}else if(salario <= 800.0){
		percentual = 12.0;
	}else if(salario <= 1200.0){
		percentual = 10.0;
	}else if(salario <= 2000.0){
		percentual = 7.0;
	}else{
		percentual = 4.0;
	}

	novoSalario = salario*(1 + (percentual/100.0));
	reajuste = salario*(percentual/100);

	cout << "Novo salario: " << novoSalario << '\n';
	cout << "Reajuste ganho: " << reajuste << '\n';
	cout << "Em percentual: " << (int)percentual << " %\n";
	return 0;
}
