#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, capacidade;
	cin >> n >> capacidade;
	int sairam = 0, entraram = 0, pessoas = 0;
	bool excedeu = false;
	for(i=0; i<n; i++){
		cin >> sairam >> entraram;
		pessoas += entraram - sairam;

		if(pessoas > capacidade){
			excedeu = true;
		}
	}
	if(excedeu){
		cout << 'S';
	}else{
		cout << 'N';
	}
	return 0;
}
