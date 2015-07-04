#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i;
	string palavra;
	bool ordenado;
	cin >> n;
	for(i=0; i<n; i++){
		ordenado = true;
		cin >> palavra;
		if(!palavra.empty()){
			for(string::iterator it = palavra.begin()+1; it != palavra.end(); it++){
				char c1 = *(it-1);
				char c2 = *it;
				c1 = tolower(c1);
				c2 = tolower(c2);
				//cout << c1 << ' ' << c2 << endl;
				if(c1 >= c2){
					ordenado = false;
					break;
				}
			}
		}

		cout << palavra << ": ";
		if(ordenado){
			cout << 'O' << '\n';
		}else{
			cout << 'N' << '\n';
		}
	}
	return 0;
}
