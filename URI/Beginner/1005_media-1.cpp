#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double a, b;
	cin >> a >> b;
	cout << "MEDIA = " << fixed << setprecision(5) << (a*3.5 + b*7.5)/11.0 << '\n';
	return 0;
}