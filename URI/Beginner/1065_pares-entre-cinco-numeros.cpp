#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n[5]; 
	int count = 0;

	for(int i = 0; i < 5; i++){
		cin >> n[i];
		if(n[i] % 2 == 0)
			count++;
	}
	cout << count << " valores pares\n";
	return 0;
}