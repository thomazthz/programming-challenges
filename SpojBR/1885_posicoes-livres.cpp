#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int largura, altura, subpartes;
	int i, j, x, y;
	int x1, x2, y1, y2;
	int resultado;
	while(cin >> largura >> altura >> subpartes){
		if(largura == 0 && altura == 0 && subpartes == 0)
			break;

		int tabuleiro[largura+1][altura+1];
		resultado = 0;
		largura++;
		altura++;
		for(i=1; i<largura; i++){
			for(j=1; j<altura; j++){
				tabuleiro[i][j] = 0;
			}
		}
		for(i=0; i<subpartes; i++){
			cin >> x1 >> y1 >> x2 >> y2;
			int maiorX;
			int menorX;
			int maiorY;
			int menorY;
			if(x1 > x2){
				maiorX = x1;
				menorX = x2;
			}else{
				maiorX = x2;
				menorX = x1;
			}
			if(y1 > y2){
				maiorY = y1;
				menorY = y2;
			}else{
				maiorY = y2;
				menorY = y1;
			}

			for(x=menorX; x<maiorX+1; x++){
				for(y=menorY; y<maiorY+1; y++){
					tabuleiro[x][y] = 1;
				}
			}
		}

		for(i=1; i<largura; i++){
			for(j=1; j<altura; j++){
				if(tabuleiro[i][j] == 0)
					resultado++;
			}
		}
		
		if(resultado == 0){
			cout << "There is no empty spots." << '\n';		
		}else if(resultado == 1){
			cout << "There is one empty spot." << '\n';
		}else{
			cout << "There are " << resultado << " empty spots." << '\n';
		}
	}
	return 0;
}
