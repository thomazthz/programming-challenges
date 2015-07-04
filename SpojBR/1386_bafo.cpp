#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int r;
	int aldo, beto;
	int a, b;
	int i;
	int cont = 1;
	while(cin >> r && r != 0){
		aldo = 0;
		beto = 0;
		for(i=0; i<r; i++){
			cin >> a >> b;
			aldo += a;
			beto += b;
		}
		cout << "Teste " << cont++ << '\n';
		if(aldo > beto)
			cout << "Aldo" << '\n';
		else
			cout << "Beto" << "\n\n";
	}
	return 0;
}
