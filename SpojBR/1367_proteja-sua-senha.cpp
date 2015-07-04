#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, a, i, j, count = 1;
	char letra;
	int associacao[10];
	while(cin >> n && n != 0){
		int digitadas[6][10];		
		for(i=0; i<6; i++){
			for(j=0; j<10; j++){
				digitadas[i][j] = 0;
			}
		}
		
		for(i=0; i<n; i++){
			for(j=0; j<10; j++){
				cin >> a;
				associacao[j] = a;
			}
			for(j=0; j<6; j++){
				cin >> letra;
				switch(letra){
					case 'A':
						digitadas[j][associacao[0]]++;
						digitadas[j][associacao[1]]++;
					break;
					case 'B':
						digitadas[j][associacao[2]]++;
						digitadas[j][associacao[3]]++;
					break;
					case 'C':
						digitadas[j][associacao[4]]++;
						digitadas[j][associacao[5]]++;
					break;
					case 'D':
						digitadas[j][associacao[6]]++;
						digitadas[j][associacao[7]]++;
					break;
					case 'E':
						digitadas[j][associacao[8]]++;
						digitadas[j][associacao[9]]++;
					break;
					
				}	
			}
		}
		cout << "Teste " << count++ << '\n';
		for(i=0; i<10; i++){
			if(digitadas[0][i] == n)
				cout << i;
		}
		for(i=1; i<6; i++){
			for(j=0; j<10; j++){
				if(digitadas[i][j] == n){
					cout << ' ' << j;
				}
		//		cout << digitadas[i][j] << ' ';
			}
		}
		cout << "\n\n";		
	}
	return 0;
}
