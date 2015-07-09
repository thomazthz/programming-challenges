#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{	
	const int MAX = 500001;
	int cidades, acordos, consultas;
	int x, y, h;
	int m[501][501];
	while(scanf("%d %d", &cidades, &acordos) != EOF  && cidades + acordos > 0){
		cidades++;

		for(int i = 1; i < cidades; i++){
     	    for(int j = 1; j < cidades; j++){
     	    	if(i != j)
     	    		m[i][j] = MAX;
     	    }
     	}
	
		for(int i = 0; i < acordos; i++){
			scanf("%d %d %d", &x, &y, &h);
    		m[x][y] = h;
			if(m[x][y] != MAX && m[y][x] != MAX)
				m[x][y] = m[y][x] = 0;
		}

		/*for(int i = 1; i < cidades; i++){
			for(int j = 1; j < cidades; j++){
				if(m[i][j] != MAX && m[j][i] != MAX)
					m[i][j] = m[j][i] = 0;
			}
		}*/

		for(int k = 1; k < cidades; k++){
			for(int i = 1; i < cidades; i++){
				for(int j = 1; j < cidades; j++){
					if(m[i][j] > m[i][k] + m[k][j]){
						m[i][j] = m[i][k] + m[k][j];
					}
				}
			}
		}

		/*for(int i = 0; i < cidades; i++){
			for(int j = 0; j < cidades; j++){
				cout << m[i][j] << " ";
			}
			cout << endl;
		}*/

		scanf("%d", &consultas);

		for(int i = 0; i < consultas; i++){
			scanf("%d %d", &x, &y);
			if(m[x][y] != MAX)
				printf("%d\n", m[x][y]);
			else
				printf("Nao e possivel entregar a carta\n");
		}

		printf("\n");
	}
	return 0;
}