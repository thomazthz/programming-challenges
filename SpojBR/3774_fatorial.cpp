#include <iostream>

int main(int argc, char* argv[])
{
    int n, i, fat = 1;

    std::cin >> n;

    if(n >= 0 && n <= 12)
    {
            for(i = n; i > 1; i--)
            {
                fat = fat * i;
            }
        std::cout << fat;
    }
    return 0;
}

