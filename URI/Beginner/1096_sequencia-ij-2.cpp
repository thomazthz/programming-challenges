#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for(int i = 1, j = 7; i < 10; i+=2){
		cout << "I=" << i << " J=" << 7 << '\n';
		cout << "I=" << i << " J=" << 6 << '\n';
		cout << "I=" << i << " J=" << 5 << '\n';		
	}
	return 0;
}