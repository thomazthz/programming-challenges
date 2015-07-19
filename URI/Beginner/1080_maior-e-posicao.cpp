#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, maior = -1, idx = 0;

	for(int i = 1; i <= 100; i++){
		cin >> n;
		if(n > maior){
			maior = n;
			idx = i;
		}
	}

	cout << maior << '\n';
	cout << idx << '\n';
	return 0;
}