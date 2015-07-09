#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int dias, t;
	cin >> dias;
	int a = (dias/365);
	int m = (dias - (a*365))/30 % 12;
	int d = (dias- (m*30 + a*365));
	cout << a << " ano(s)" << '\n';
	cout << m << " mes(es)" << '\n';
	cout << d << " dia(s)" << '\n';

	return 0;
}