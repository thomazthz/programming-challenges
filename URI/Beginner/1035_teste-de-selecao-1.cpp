#include <iostream>
using namespace std;

bool teste(int a, int b, int c , int d){
	if(b <= c)
		return false;
	if(d <= a)
		return false;
	if(c+d <= a+b)
		return false;
	if(c < 0 || d < 0)
		return false;
	if(a % 2 != 0)
		return false;
	return true;
}
int main(int argc, char const *argv[])
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (teste(a, b, c, d) ? "Valores aceitos\n" : "Valores nao aceitos\n");
	return 0;
}