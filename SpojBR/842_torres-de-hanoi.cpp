#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int count = 1;
	while(cin >> n && n != 0){
		int resultado = pow(2,n) - 1;
		cout << "Teste " << count++ << '\n';
		cout << resultado << "\n\n";
	}
	return 0;
}
