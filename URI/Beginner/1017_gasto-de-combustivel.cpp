#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, v;
	cin >> t >> v;
	cout << fixed << setprecision(3) << (t*v/12.0) <<'\n';

	return 0;
}