#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int h1, m1, h2, m2;

	while(true){
		cin >> h1 >> m1 >> h2 >> m2;

		if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
			break;
		}

		int minutosTotal = 0;
		int difHora = 0;
		int somaMinutos = 0;
		if(!(h1 == h2 && m1 == m2)){
			if(h1 < h2){ // mesmo dia hora diferente
				difHora = h2 - h1;
			}else if(h1 > h2){ // dia seguinte	
				difHora = 24 - h1 + h2;
			}else if(h1 == h2 && m1 > m2){ // dia seguinte mesma hora
				difHora = 24;
			}else if(h1 == h2 && m1 < m2){ // mesmo dia mesma hora
				difHora = 0;
			}
			somaMinutos = 60 - m1 + m2;
			difHora--;
			if(somaMinutos >= 60){
				difHora++;
				somaMinutos -= 60;	
			}
		}
		minutosTotal += (difHora * 60) + somaMinutos;

		cout << minutosTotal << endl;
	}
	return 0;
}
