#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double a, b, c;
	cin >> a >> b >> c;
	cout << "MEDIA = " << fixed << setprecision(1) << (a*2 + b*3 + c*5)/10.0 << '\n';
	return 0;
}