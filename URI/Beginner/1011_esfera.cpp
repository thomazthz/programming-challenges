#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	const double pi = 3.14159;
	int r;
	cin >> r;
	cout << "VOLUME = " << fixed << setprecision(3) << ((4.0/3.0)*pi*r*r*r) <<'\n';

	return 0;
}