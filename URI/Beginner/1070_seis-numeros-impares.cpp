#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, count = 0;

	cin >> n;

	while(count < 6){
		if(n % 2 != 0){
			cout << n << '\n';			
			count++;
			n += 2;
		}else
			n++;
	}
	
	return 0;
}