#include <iostream>
#include <algorithm>
using namespace std;

int buscaBinaria(int x, int inicio, int l, int *v){
	if(x > v[l-1])
		return -1;
	int e, m, d;
	e = 0;
	d = l-1;
	while(e <= d){
		m = (e + d)/2;
		if(v[m] == x) return m;
		if(v[m] < x) e = m + 1;
		else d = m - 1;
	}
	
	return -1;
}
int main(int argc, char const *argv[])
{
	int n, l, i, j;
	int trocas, trocasMin, num, indice, armariosLivres;
	while(cin >> n >> l && n !=0 && l != 0){
		trocasMin = n;
		int armarios[l];
		for(i=0; i<l; i++){
			cin >> armarios[i];
		}

		for(i=0; i<l; i++){
			num = armarios[i] + n - 1;
			//cout << "NUM: " << num << endl;

			indice = buscaBinaria(num, i, l, armarios);
			//cout << "BB: " << indice << endl;
			if(indice == -1){ // num não encontrado
				int *p = upper_bound(armarios, armarios+l, num);
				armariosLivres = p - &armarios[i];
				
				//cout << "INDICE I: " << &armarios[i] << endl;
				//cout << "INDICE P: " << &p <<  endl;
				//cout << "VALOR PONTEIRO: " << *p << endl;
				//cout << "armariosLivres: " << armariosLivres << endl;
			}else{ // num encontrado
				armariosLivres = indice - i + 1;
			}
			
			trocas = n - armariosLivres;
			
			//cout << "TROCAS: " << trocas << endl;
			if(trocas < trocasMin){
				trocasMin = trocas;
				if(trocas == 0){
					break;
				}
			}
			
		}

		cout << trocasMin << endl;

	}
	return 0;
}
