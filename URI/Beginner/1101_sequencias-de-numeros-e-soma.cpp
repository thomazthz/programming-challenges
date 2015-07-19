#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int m, n, soma;
	
	while(cin >> m >> n && m > 0 && n > 0){
	
		if(m > n){
			m ^= n;
			n ^= m;
			m ^= n;
		}

		soma = 0;
		for(m; m <= n; m++){
			soma += m;
			cout << m << ' ';
		}
		cout << "Sum=" << soma << '\n';
	}
	
	return 0;
}