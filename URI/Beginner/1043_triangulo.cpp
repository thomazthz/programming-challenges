#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	double a, b, c;
	cin >> a >> b >> c;

	if(abs(b-c) < a && a < b+c)
		cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << '\n';
	else
		cout << "Area = " << fixed << setprecision(1) << ((a+b)*c)/2 << '\n';
	
	return 0
}