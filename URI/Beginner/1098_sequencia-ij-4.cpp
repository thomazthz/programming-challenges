#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for(double i = 0, j = 1; i <= 2.0; i+=0.2, j+=0.2){
		cout << "I=" << i << " J=" << j << '\n';
		cout << "I=" << i << " J=" << j+1 << '\n';
		cout << "I=" << i << " J=" << j+2 << '\n';		
	}
	return 0;
}