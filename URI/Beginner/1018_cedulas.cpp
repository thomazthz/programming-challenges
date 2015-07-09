#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int notas[] = {100, 50, 20, 10, 5, 2};
	int n, cedulas = 0, count = 0;
	cin >> n;

	cout << n << '\n';
	do{
		cedulas = n / notas[count];
		n %= notas[count];
		cout << cedulas << " nota(s) de R$ " << notas[count++] << ",00" <<'\n';
	}while(count < 6);

	cout << n << " nota(s) de R$ 1,00" <<'\n';

	return 0;
}