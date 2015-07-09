#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int cidades, estradas, cidadesRota, conserto, origem, destino;

	while(cin >> cidades >> estradas >> cidadesRota >> conserto){
		if(cidades + estradas + cidadesRota + origem <= 0)
			break;

		int m[cidades][cidades] = {};

		origem = 0;
		destino = cidadesRota-1;

		for(int i = 0; i < cidades; i++){
     	    for(int j = 0; j < cidades; j++)
     	    	m[i][j] = 63000;
     	}

     	for(int i = 0; i < cidades; i++)
     		m[i][i] = 0;
	
		int u, v, peso;
		for(int i = 0; i < estradas; i++){
			cin >> u >> v >> peso;
    		if(u > destino) m[u][v] = peso;
    		if(v > destino) m[v][u] = peso;
    		if(v-u == 1)	m[u][v] = peso;
    		if(u-v == 1)	m[v][u] = peso;	
    		//m[u][v] = peso;
    		//m[v][u] = peso;	
		}

		for(int k = 0; k < cidades; k++){
			for(int i = 0; i < cidades; i++){
				for(int j = 0; j < cidades; j++){
					if(m[i][j] > m[i][k] + m[k][j]){
						m[i][j] = m[i][k] + m[k][j];
					}
				}
			}
		}

		cout << m[conserto][destino] << endl;
	}
	return 0;
}