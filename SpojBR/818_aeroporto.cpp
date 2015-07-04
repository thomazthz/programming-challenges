#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	const int MAX = 101;
	int i, A, V, x, y, maior, teste = 0;
	int voos[MAX];

	while(cin >> A >> V && A != 0 && V != 0){
		for(i = 1; i <= A; i++)
			voos[i] = 0;
		
		for(i = 0; i < V; i++){
			cin >> x >> y;
			voos[x]++;
			voos[y]++;
		}

		maior = 0;
		for(i = 1; i <= A; i++){
			if(voos[i] > maior)
				maior = voos[i];
		}
		
		cout << "Teste " << ++teste << endl;

		for(i = 1; i <= A; i++){
			if(voos[i] == maior)
				cout << i << " ";
		}
		cout << endl << endl;

	}
	return 0;
}
