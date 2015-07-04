#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n;

	cin >> n;
	if(n < 0){
	 	n *= -1;	
	}
	//cout << n << endl;
	long long raiz = sqrt(n);
	//cout << raiz << endl;

	bool primo = true;

	if(n != 2){
		if(n == 0 || n == 1 || n == -1 || n%2 == 0){
			primo = false;
		}else{
			for(long long i=3; i <= raiz; i+=2){
				if(n%i==0){
					//cout << "Entrou " << endl;
					//cout << "i: " << i << endl;
					primo = false;
					break;
				}
			}
		}
	}	
	if(primo)
		cout << "sim";
	else
		cout << "nao";
	return 0;
}
//472342734872390487
