#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t; // numeros de instancias
	int n; // tamanho da sequencia
	int i, j; // contadores

	int seq[10001];
	int result;
	int aux;
	
	cin >> t;

	for(i=0; i<t; i++){
		result = 0;
		cin >> n;

		for(j=1; j<=n; j++){
			cin >> seq[j];
		}

		for(j=1; j<=n; j++){
			while(seq[j] != j){
				aux = seq[j];
				seq[j] = seq[aux];
				seq[aux] = aux; 
				result++;
			}
		}
		cout << result << endl;
	}	

	return 0;
}
