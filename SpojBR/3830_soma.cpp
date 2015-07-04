#include <iostream>

int main(int argc, char* argv[])
{
    int n, x, soma = 0;

    std::cin >> n;

    if(n >= 0 && n <= 50)
    {
        for(int i = 0; i < n; i++)
        {
            std::cin >> x;
            if(x >= -5000 && x <= 5000)
                soma += x;
        }


    }
    std::cout << soma;
    return 0;
}

