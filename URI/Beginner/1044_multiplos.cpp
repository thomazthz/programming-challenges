#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;
	cin >> a >> b;

	if(b%a == 0 || a%b == 0)
		cout << "Sao Multiplos\n";
	else
		cout << "Nao sao Multiplos\n"; 
	
	return 0;
}