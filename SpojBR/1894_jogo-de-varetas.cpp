#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i;
	int c, v;
	int varetas;
	int retangulos;
	while(cin >> n && n != 0){
		varetas = 0;
		retangulos = 0;
		for(i=0; i< n; i++){
			cin >> c >> v;
			// temp == acumulador de varetas
			if(v%2 == 1)
				v--;

			varetas += v;
		}
		
		cout << (varetas/4) << '\n';
	}
	return 0;
}
