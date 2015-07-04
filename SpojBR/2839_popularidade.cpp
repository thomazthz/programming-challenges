#include <iostream>
#define MAX_VALUE 100

int main(int argc, char const *argv[])
{
	int n = 10;
	int aux;
	int i, j;

	while(std::cin >> n && n != 0){

		int votos[MAX_VALUE] = {};

		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				std::cin >> aux;
				votos[j] += aux;
			}
		}

		aux = 0;
		for(i=0; i<n; i++){
			if(votos[i] > aux)
				aux = votos[i];
		}

		std::cout << aux << std::endl;
	}

	return 0;
}
