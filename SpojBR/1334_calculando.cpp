#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int operandos = 0;
	int i, count = 1;
	int b, resultado;
	char operador;
	while(cin >> operandos && operandos != 0){
		resultado = 0;
		cin >> resultado;
		for(i=0; i < operandos-1; i++){
			cin >> operador;
			cin >> b;
			if(operador == '+'){
				resultado += b;
			}else if(operador == '-'){
				resultado -= b;
			}
		}
		cout << "Teste " << count++ << '\n';
		cout << resultado << "\n\n";
	}
	return 0;
}
