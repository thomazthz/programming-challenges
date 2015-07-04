#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[])
{
    int n = 1, valor = 1;
    int I, J, K, L;
    while (true)
    {
    	I = J = K = L = 0;
        cin >> valor;

        if(valor <= 0 || valor > 10000)
            break;

        while(valor/50 >= 1)
        {
            I++;
            valor -= 50;

        }

        while(valor/10 >= 1)
        {
            J++;
            valor -= 10;
        }

        while(valor/5 >= 1)
        {
            K++;
            valor -= 5;
        }

        L = valor;

        cout << "Teste " << n << endl;
        cout << I << " " << J << " " << K << " " << L;
        cout << endl << endl;

        n++;
    }

    return 0;
}

