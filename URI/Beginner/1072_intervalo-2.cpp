#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, x, in = 0;

	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x >= 10 && x <= 20)
			in++;
	}
	
	cout << in << " in\n";
	cout << n-in << " out\n";
	return 0;
}
