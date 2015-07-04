#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){

	string nome;
	double salario, montante;
	cin >> nome >> salario >> montante;

	cout << "TOTAL = R$ " << fixed << setprecision(2) << (salario + montante*0.15) << '\n'; 

	return 0;
}
