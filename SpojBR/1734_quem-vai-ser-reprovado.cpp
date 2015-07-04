#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{	
	string alunos[100];
	string aluno;
	int n;
	int menor_nota;
	int nota;
	int count;
	int i;
	int instancia = 1;

	while(cin >> n){
		menor_nota = 10;
		count = 0;

		for(i=0; i<n; i++){
			cin >> aluno >> nota;
			if(nota < menor_nota){
				count = 0;
				alunos[count] = aluno;
				menor_nota = nota;
				count++;
			}else
			if(nota == menor_nota){
				alunos[count] = aluno;
				count++;
			}
		}

		aluno = alunos[0]; 
		for(i=1; i<count; i++){
			if(alunos[i].compare(aluno) > 0) 
				aluno = alunos[i];
		}
		cout << endl << "Instancia " << instancia << endl;
		cout << aluno << endl << endl;
		instancia++;
	}

	return 0;
}
