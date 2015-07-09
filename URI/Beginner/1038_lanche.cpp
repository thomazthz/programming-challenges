#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	double items[6] = {0, 4.0, 4.5, 5.0, 2.0, 1.5};
	int cod, qnt;

	cin >> cod >> qnt;

	cout << "Total: R$ " << fixed << setprecision(2) << items[cod]*qnt << '\n';

	return 0;
}