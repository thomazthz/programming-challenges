a#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, voto;

	cin >> n;

	map<int, long> votos;

	for(i=0; i<n; i++){
		cin >> voto;
		votos[voto] += 1;
	}

	map<int, long>::iterator it = votos.begin();
	int vencedor = 0;
	long maiorVotos = 0;
	for(it; it != votos.end(); it++){
		long a = it->second;
		if(a > maiorVotos){
			maiorVotos = a;
			vencedor = it->first;
		}
	}
	cout << vencedor << endl;
	return 0;
}
