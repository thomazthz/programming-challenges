#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	const double pi = 3.14159;
	double r;
	cin >> r;
	cout << "A=" << fixed << setprecision(4) << (pi*r*r) <<'\n';

	return 0;
}