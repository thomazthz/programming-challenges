#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int nParticipantes, nRodadas, teste = 1;
	int participantesEmJogo;
	int ordem, acao;
	int vencedor;
	int cont;
	
	while(scanf ("%d",&nParticipantes) && scanf ("%d",&nRodadas)  && nParticipantes != 0 && nRodadas != 0){
		int *participantes = new int[nParticipantes];
		participantesEmJogo = 0;
		vencedor = 0;

		int participante;
		for(int i = 0; i < nParticipantes; i++)
			scanf("%d", &participantes[i]);
		
		for(int i = 0; i < nRodadas; i++){
			scanf("%d", &participantesEmJogo);
			scanf("%d", &ordem);
			cont = 0;
			for(int j = 0; j < participantesEmJogo; j++){
				scanf("%d", &acao);
				if(acao == ordem){
					participantes[cont++] = participantes[j];
				}
			}
		}


		cout << "Teste " << teste++ << '\n';
		cout << participantes[0] << "\n\n";
		
	}
	return 0;
}