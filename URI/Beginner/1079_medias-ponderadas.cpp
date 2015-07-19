#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	double a[3];

	cin >> n;
	cout << fixed << setprecision(1);

	for(int i = 0; i < n; i++){
		cin >> a[0] >> a[1] >> a[2];
		cout << (a[0]*2 + a[1]*3 + a[2]*5)/10 << '\n';	
	}
	
	
	return 0;
}
