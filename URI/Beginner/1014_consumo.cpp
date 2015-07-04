#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	int dist;
	double cgasto;

	cin >> dist >> cgasto;

	cout << fixed << setprecision(3) << (dist/cgasto) << " km/l" <<'\n';

	return 0;
}