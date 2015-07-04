#include <iostream>
using namespace std;

const int MATRIX_SIZE = 9;
const int MASK = 1022; // 1111111110
bool verificaLinha(int *linha){
	int r = 0;

	for(int i = 0; i < MATRIX_SIZE; i++)
		r |= 1 << linha[i];

//	cout << "r = " << (r & MASK) << endl;
	return ((r & MASK) == MASK);
}

bool verificaColuna(int **matrix){
	int r = 0;

	for(int i = 0; i < MATRIX_SIZE; i++)
		r |= 1 << matrix[i][0];

//	cout << "r = " << (r & MASK) << endl;
	return ((r & MASK) == MASK);
}

// 0..2 e 0..2, 0..2 e 3..5, 0..2 e 6..8
bool verificaRegiao(int **matrix){
	
	for(int i = 0; i < MATRIX_SIZE; i+=3){
		for(int j = 0; j < MATRIX_SIZE; j+=3){
		
		
			int r = 0;
			for(int y = i; y < i+3; y++)
				for(int x = j; x < j+3; x++)
					r |= 1 << matrix[x][y];
		

			if(!((r & MASK) == MASK))
				return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int n, instancia = 1;
	int **matrix = new int*[MATRIX_SIZE];
	for(int i = 0; i < MATRIX_SIZE; i++)
		matrix[i] = new int[MATRIX_SIZE];

	cin >> n;
	for(int i = 0; i < n; i++){
		bool sol = true;

		for(int y = 0; y < MATRIX_SIZE; y++)
			for(int x = 0; x < MATRIX_SIZE; x++)
				cin >> matrix[x][y];

		for(int j = 0; j < MATRIX_SIZE; j++){
			sol &= verificaLinha(&matrix[j][0]);
			if(!sol) break;
		}

		if(sol){
			for(int j = 0; j < MATRIX_SIZE; j++){
				sol &= verificaColuna(matrix);
				if(!sol) break;
			}
		}
		
		if(sol)
			sol &= verificaRegiao(matrix);

		cout << "Instancia " << instancia++ << endl;
		cout << (sol ? "SIM" : "NAO") << endl << endl;
	}

	return 0;
}