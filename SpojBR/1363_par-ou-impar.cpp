#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i;
	string jogadorPar;
	string jogadorImpar;

	int a;
	int b;
	int count = 1;
	while(cin >> n && n != 0){
		cin >> jogadorPar;
		cin >> jogadorImpar;

		cout << "Teste " << count++ << '\n';
		for(i=0; i<n; i++){
			cin >> a >> b;
			
			if((a+b)%2 == 0){
				cout << jogadorPar << '\n';
			}else{
				cout << jogadorImpar << '\n';
			}
		}
	}
	return 0;
}
