#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, t;
	cin >> n;
	int h = (n/3600) % 3600;
	int m = (n/60) % 60;
	int s = (n-(h*60 + m*60))%60;
	cout << h << ":" << m << ":" << s <<'\n';

	return 0;
}