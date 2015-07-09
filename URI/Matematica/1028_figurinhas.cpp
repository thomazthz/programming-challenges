#include <iostream>
using namespace std;

int mdc(int m, int n){
	if(n == 0)
		return m;
	return mdc(n, m % n);
}

int main(int argc, char const *argv[])
{
	int n, f1, f2;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> f1 >> f2;
		cout << mdc(f1, f2) << '\n';
	}
	
	return 0;
}