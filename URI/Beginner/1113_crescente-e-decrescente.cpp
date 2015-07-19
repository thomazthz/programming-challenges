#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y;
	
	while(cin >> x >> y && x != y){
	
		if(x > y)
			cout << "Decrescente" << '\n';
		else 
			cout << "Crescente" << '\n';
	}
	
	return 0;
}