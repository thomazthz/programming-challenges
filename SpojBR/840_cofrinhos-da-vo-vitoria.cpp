#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, count = 1;
	int joaozinho, zezinho;
	int acumuladoJ, acumuladoZ;
	while(cin >> n && n != 0){
		cout << "Teste " << count++ << '\n';
		acumuladoJ = 0;
		acumuladoZ = 0;
		for(i=0; i<n; i++){
			cin >> joaozinho >> zezinho;
			acumuladoJ += joaozinho;
			acumuladoZ += zezinho;
			cout << (acumuladoJ - acumuladoZ) << '\n';
		}
		cout << "\n\n";
	}
	return 0;
}
