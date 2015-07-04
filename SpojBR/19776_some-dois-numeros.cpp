#include <iostream>
#include <math.h>
#include <stack>
#include <cstring>
using namespace std;

int base36 = 36;
int base10 = 10;
stack<char> resultado;

int base36para10(char *num){
	int tamanho = 0;
	tamanho = (int)strlen(num);
	int numDecimal = 0;
	int i, count;
	for(i = tamanho - 1, count = 0; i >= 0; i--, count++){
		if(num[i] >= 'A' && num[i] <= 'Z')
			numDecimal += pow(base36, count)*(num[i] - 55);
		else if(num[i] >= '0' && num[i] <= '9'){
			numDecimal += pow(base36, count)*(num[i] - 48);
		}
	}
	return numDecimal;
}

void base10para36(int num){
	int resto = 0;
	//resultado.push('\0');
	while(num > 0){
		resto = num % base36;

		if(resto < 10){	
			resultado.push((char)(resto + 48));
		}else{
			resultado.push((char)(resto + 55));
		}
		num /= base36;
	}

	
}


int main(int argc, char const *argv[])
{
	while(true){
		char a[12];
		char b[12];

		cin >> a;
		cin >> b;
		if(a[0] == '0' && b[0] == '0'){
			break;
		}
		int numeroA = base36para10(a);
		int numeroB = base36para10(b);
		//cout << "A: " << numeroA << endl;	
		//cout << "B: " << numeroB << endl;

		int soma = numeroA + numeroB;	
		//cout << "A + B: " << soma << endl;

		base10para36(soma);

		int tamanho = resultado.size();
		for(int i = 0; i < tamanho; i++){
			cout << resultado.top();
			resultado.pop();
		}
		cout << endl;
	}
	return 0;
}
