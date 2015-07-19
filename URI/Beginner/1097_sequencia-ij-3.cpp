#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for(int i = 1, j = 7; i < 10; i+=2, j+=2){
		cout << "I=" << i << " J=" << j << '\n';
		cout << "I=" << i << " J=" << j-1 << '\n';
		cout << "I=" << i << " J=" << j-2 << '\n';		
	}
	return 0;
}