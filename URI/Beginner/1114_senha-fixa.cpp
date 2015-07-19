#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int senha;
	
	while(cin >> senha && senha != 2002){
		cout << "Senha Invalida" << endl;
	}

	cout << "Acesso Permitido" << endl;
	
	return 0;
}