#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y, soma = 0;

	cin >> x >> y;

	if(x > y){
		x ^= y;
		y ^= x;
		x ^= y;
	}
	
	for(int i = x+1; i < y; i++){
		if(i % 2 != 0)
			soma += i;
	}
	
	cout << soma << '\n';
	return 0;
}
