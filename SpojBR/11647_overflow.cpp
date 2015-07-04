#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, p, q;
	char c;

	cin >> n >> p >> c >> q;

	int valor;
	if(c == '+'){
		valor = p + q;
	}else{
		valor = p * q;
	}
	//cout << valor << endl;
	if(valor > n)
		cout << "OVERFLOW";
	else 
		cout << "OK";
	return 0;
}
