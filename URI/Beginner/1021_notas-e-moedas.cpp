#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double n, restante;
	int aux;
	cin >> n;

	cout << "NOTAS:\n";
	aux = n/100; // 5
	cout << aux << " nota(s) de R$ 100.00" << '\n';

	restante = n - aux*100; // 76
	aux = floor(restante/50); // 1
	cout << aux << " nota(s) de R$ 50.00" << '\n';
	
	restante = restante - aux*50;
	aux = floor(restante/20); // 1
	cout << aux << " nota(s) de R$ 20.00" << '\n';

	restante = restante - aux*20;
	aux = floor(restante/10);
	cout << aux << " nota(s) de R$ 10.00" << '\n';

	restante = restante - aux*10;
	aux = floor(restante/5);
	cout << aux << " nota(s) de R$ 5.00" << '\n';

	restante = restante - aux*5;
	aux = floor(restante/2);
	cout << aux << " nota(s) de R$ 2.00" << '\n';

	cout << "MOEDAS:\n";

	restante = restante - aux*2;
	aux = floor(restante/1);
	cout << aux << " moeda(s) de R$ 1.00" << '\n';

	restante = restante - aux*1;
	aux = floor(restante/0.50);
	cout << aux << " moeda(s) de R$ 0.50" << '\n';

	restante = restante - aux*0.5;
	aux = floor(restante/0.25);
	cout << aux << " moeda(s) de R$ 0.25" << '\n';

	restante = restante - aux*0.25;
	aux = floor(restante/0.10);
	cout << aux << " moeda(s) de R$ 0.10" << '\n';

	restante = restante - aux*0.10;
	aux = floor(restante/0.05);
	cout << aux << " moeda(s) de R$ 0.05" << '\n';

	restante = restante - aux*0.05;
	aux = floor(restante/0.01);
	cout << aux << " moeda(s) de R$ 0.01" << '\n';
	return 0;
}
/*
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1,00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
*/

/*
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
*/