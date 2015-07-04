#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, temp, soma, media, teste = 1;
	bool primeiraMedia;
	pair<int, int> resultado;
	while(cin >> n >> m && n != 0 && m != 0){
		int *medicoes = new int[n];
		soma = 0;
		primeiraMedia = true;
		for(int i = 0; i < n; i++){
			cin >> temp;
			soma += temp;
			medicoes[i] = temp;
			if(primeiraMedia){
				if((i+1)%m == 0){
					media = soma / m;
					primeiraMedia = false;
					resultado = minmax({media});
				}
			}else{
				soma = (soma - medicoes[i-m]);
				media = soma / m;
				resultado = minmax({media, resultado.first, resultado.second});
			}

		}

		cout << "Teste " << teste++ << '\n';
		cout << resultado.first << ' ' << resultado.second << "\n\n";
	}

	return 0;
}