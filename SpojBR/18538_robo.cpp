#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	const int N = 1;
	const int L = 2;
	const int S = 3;
	const int O = 4;

	int l, c, x, y;
	int i, j;
	int anterior;

	cin >> l >> c;
	cin >> y >> x;
	y--; x--;

	int matriz[l][c];

	for(i = 0; i < l; ++i){
		for(j = 0; j < c; j++){
			cin >> matriz[i][j];
		}
	}	

	anterior = 0;	
	while(true){
		if(anterior != N && y-1 >= 0 && matriz[y-1][x] == 1){
			--y;
			anterior = S;
		}else if (anterior != L && x+1 < c && matriz[y][x+1] == 1){
			++x;
			anterior = O;
		}else if (anterior != S && y+1 < l && matriz[y+1][x] == 1){
			++y;
			anterior = N;
		}else if (anterior != O && x-1 >= 0 && matriz[y][x-1] == 1){
			--x;
			anterior = L;
		}else
			break;
	}

	cout << ++y << ' ' << ++x;


	return 0;
}
