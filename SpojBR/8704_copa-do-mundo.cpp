#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{	

	int nEquipes = 16;
	vector<int> equipes (nEquipes);
	int i;
	int e1;
	int e2;
	//oitavas
	int count = 0;
	for(i=0; i < nEquipes; i+=2){
		equipes[i] = i;
		equipes[i+1] = i+1;
		cin >> e1 >> e2;
		if(e1 > e2){
			equipes[count] = equipes[i];
		}else{
			equipes[count] = equipes[i+1];
		}
		count++;
	}

	//quartas
	count = 0;
	for(i=0; i < nEquipes/2; i+=2){
		cin >> e1 >> e2;
		if(e1 > e2){
			equipes[count] = equipes[i];
		}else{
			equipes[count] = equipes[i+1];
		}
		count++;	
	}

	//semi
	count = 0;
	for(i=0; i < nEquipes/4; i+=2){
		cin >> e1 >> e2;
		if(e1 > e2){
			equipes[count] = equipes[i];
		}else{
			equipes[count] = equipes[i+1];
		}
		count++;	
	}

	//final
	cin >> e1 >> e2;

	if(e1 > e2){
		cout << (char)(equipes[0]+65);
	}else{
		cout << (char)(equipes[1]+65);
	}
	return 0;
}
