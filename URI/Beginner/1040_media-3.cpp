#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double n1, n2, n3, n4, ne, media;
	cin >> n1 >> n2 >> n3 >> n4;

	media = (n1*2 + n2*3 + n3*4 + n4)/10;

	cout << "Media: " << fixed << setprecision(1) << media << '\n';

	if(media >= 7.0)
		cout << "Aluno aprovado.\n";
	else if(media < 5.0)
		cout << "Aluno reprovado.\n";
	else{
		cout << "Aluno em exame.\n";
		cin >> ne;
		cout << "Nota do exame: " << ne << '\n';
		media = (media+ne)/2;

		if(media >= 5.0)
			cout << "Aluno aprovado.\n";
		else if(media < 5.0)
			cout << "Aluno reprovado.\n";

		cout << "Media final: " << fixed << setprecision(1) << media << '\n';
	}

	return 0;
}