#include <iostream>
#include <algorithm>

using namespace std;
/* classificacao dos triangulos


    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES


*/
int main(int argc, char const *argv[])
{
	double lados[3];

	cin >> lados[0] >> lados[1] >> lados[2];

	sort(lados, lados + 3);

	double a, a2, b, b2, c, c2;
	// para n precisar ordenar em ordem decrescente basta inverter os indices
	a = lados[2];
	a2 = lados[2]*lados[2];
	b = lados[1];
	b2 = lados[1]*lados[1];
	c = lados[0];
	c2 = lados[0]*lados[0];

	if(a >= b + c)
		cout << "NAO FORMA TRIANGULO\n";
	else {
		if(a2 == b2 + c2)
			cout << "TRIANGULO RETANGULO\n";
		if(a2 > b2 + c2)
			cout << "TRIANGULO OBTUSANGULO\n";
		if(a2 < b2 + c2)
			cout << "TRIANGULO ACUTANGULO\n";
		if(a == b && b == c)
			cout << "TRIANGULO EQUILATERO\n";
		else if(a == b || b == c)
			cout << "TRIANGULO ISOSCELES\n";
	}

	return 0;
}