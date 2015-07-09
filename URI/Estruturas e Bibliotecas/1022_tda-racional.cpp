#include <iostream>
#include <iomanip>
using namespace std;

/* OPERACOES
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
*/
class Rational{
public:
	int num;
	int den;

	Rational operator+(const Rational& other){
		Rational r;
		r.num = (num*other.den + other.num*den);
		r.den = (den*other.den);
		return r;
	}

	Rational operator-(const Rational& other){
		Rational r;
		r.num = (num*other.den - other.num*den);
		r.den = (den*other.den);
		return r;
	}

	Rational operator*(const Rational& other){
		Rational r;
		r.num = (num*other.num);
		r.den = (den*other.den);
		return r;
	}

	Rational operator/(const Rational& other){
		Rational r;
		r.num = (num*other.den);
		r.den = (other.num*den);
		return r;
	}

	Rational simplificado(){
		Rational r;
		r.num = num;
		r.den = den;

		int div = mdc(num, den);
		
		while(r.num % div == 0 && r.den % div == 0 && div != 1){
			r.num /= div;
			r.den /= div;
		}
		
		return r;
	}

	void print(){
		Rational r = simplificado();
		if(den < 0)
			cout << -1*num << '/' << -1*den << " = ";
		else
			cout << num << '/' << den << " = ";

		if(r.den < 0)
			cout << -1*r.num << '/' << -1*r.den << '\n';
		else
			cout << r.num << '/' << r.den << '\n';
	}

private:
	int mdc(int m, int n){
		if(n == 0)
			return m;
		return mdc(n, m % n);
	}
};

int main(int argc, char const *argv[]){

	int n;
	char barra, op;
	Rational x, y, r;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> x.num >> barra >> x.den >> op >> y.num >> barra >> y.den;

		switch(op){
			case '+':
			r = x + y;
			break;
			case '-':
			r = x - y;
			break;
			case '*':
			r = x * y;
			break;
			case '/':
			r = x / y;
			break;
		}
		r.print();
	}

	return 0;
}
