#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int temp[10001];
int main(int argc, char const *argv[])
{
	int a, b, i;
	int carta;
	int difConjAlice;
	int difConjBeatriz;
	while(cin >> a >> b && a != 0 && b != 0){
		set<int> cartasAlice;
		set<int> cartasBeatriz;

		for(i=0; i<a; i++){
			cin >> carta;
			cartasAlice.insert(carta);
		}

		for(i=0; i<b; i++){
			cin >> carta;
			cartasBeatriz.insert(carta);
		}

		int numeroIntersecao = set_intersection(cartasAlice.begin(), cartasAlice.end(),
		 cartasBeatriz.begin(), cartasBeatriz.end(), temp) - temp;

		difConjAlice = cartasAlice.size() - numeroIntersecao;
		difConjBeatriz = cartasBeatriz.size() - numeroIntersecao;

		if(difConjAlice < difConjBeatriz){
			cout << difConjAlice << '\n';
		}else{
			cout << difConjBeatriz << '\n';
		}
	}
	return 0;
}
