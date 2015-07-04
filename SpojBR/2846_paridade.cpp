#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned int num;
	stack<int> binario;
	while(cin >> num && num != 0){
		int acumulador = 0;
		unsigned int temp = num;
		while(temp > 0){
			int resto = temp % 2;
			acumulador += resto;
			binario.push(resto);
			temp /= 2;
		}
		cout << "The parity of ";
		int tamanho = binario.size();
		for (int i = 0; i < tamanho; ++i)
		{
			cout << binario.top();
			binario.pop();
		}
		cout << " is " << acumulador << " (mod 2)." << endl;
	}
	return 0;
}

