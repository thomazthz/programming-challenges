#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for(int i = 1, j = 60; j >= 0; i+=3, j-=5){
		cout << "I=" << i << " J=" << j << '\n';
	}
	return 0;
}