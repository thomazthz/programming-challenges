#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned int a, b;

	while(cin >> a >> b && !cin.eof())
		cout << (a ^ b) << '\n';
	
	return 0;
}