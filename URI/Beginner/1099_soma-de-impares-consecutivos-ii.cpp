#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, x, y, soma = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> x >> y;

		if(x > y){
			x ^= y;
			y ^= x;
			x ^= y;
		}

		if(x % 2 == 0)
			x += 1;
		else
			x += 2;

		for(; x < y; x+=2){
			soma += x;
		}
		
		cout << soma << '\n';		

		soma = 0;
	}
	
	return 0;
}