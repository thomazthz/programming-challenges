#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{	
	int ddd;
	map<int, string> destinos;

	destinos[61] = "Brasilia";
	destinos[71] = "Salvador";
	destinos[11] = "Sao Paulo";
	destinos[21] = "Rio de Janeiro";
	destinos[32] = "Juiz de Fora";
	destinos[19] = "Campinas";
	destinos[27] = "Vitoria";
	destinos[31] = "Belo Horizonte";

	cin >> ddd;
	if(destinos.find(ddd) != destinos.end())
		cout << destinos[ddd] << '\n';
	else
		cout << "DDD nao cadastrado\n";

	return 0;
}
