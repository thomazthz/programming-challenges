#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, resultado;
	string dna;
	while(cin >> n && n != 0){
		set<string> especies_diferentes;
		resultado = 0;

		for(i=0; i<n; i++){
			cin >> dna;
			sort(dna.begin(), dna.end());
			especies_diferentes.insert(dna);			
		}

		cout << especies_diferentes.size() << '\n';
	}
	return 0;
}
