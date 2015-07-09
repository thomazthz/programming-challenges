#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int digito;
	string numero;

	while(cin >> digito >> numero){
		if(digito == 0 && numero == "0")
			break;

		string::iterator c;
		int d = digito+48;
		c = find(numero.begin(), numero.end(), d);
		*c = 'x';
		while(c != numero.end()){
			c = find(c, numero.end(), d);
			*c = 'x';
		}

		c = find_if_not(numero.begin(), numero.end(), [](char x){return x == '0' || x == 'x';} );
		if(c == numero.end()){
			cout << "0\n";
		}else{
			for(c; c != numero.end(); ++c){
				if(*c != 'x')
					cout << *c;
			}
			cout << '\n';
		} 
		//cout << "Numero processado " << numero << endl;
	}
	return 0;
}