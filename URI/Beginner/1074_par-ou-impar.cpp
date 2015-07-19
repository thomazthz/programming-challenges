#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, x;

	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x;

		if(x % 2 == 0){
			if(x > 0)
				cout << "EVEN POSITIVE\n";
			else if(x < 0)
				cout << "EVEN NEGATIVE\n";
		}
		else{
			if(x > 0)
				cout << "ODD POSITIVE\n";
			else if(x < 0)
				cout << "ODD NEGATIVE\n";
		}
		
		if(x == 0)
			cout << "NULL\n";
	}
	
	
	return 0;
}
