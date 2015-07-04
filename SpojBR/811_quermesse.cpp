#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	int i;
	int participante;
	int teste = 1;

	while(cin >> N && N != 0){
		for(i=0; i<N; i++){
			cin >> participante;
			if(participante == i+1){
				cout << "Teste " << teste << endl;
				cout << participante << endl << endl;
				teste++;
			}
		}	
	}
	return 0;
}
