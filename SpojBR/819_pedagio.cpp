#include <iostream>
#include <queue>

using namespace std;

class Vertice{
public:
	Vertice() : id(idCount++), cor('b'), dist(-1){}

	int id;
	char cor;
	int dist;
	Vertice *pai;
	static int idCount;
};
int Vertice::idCount = 0;	


int main(int argc, char const *argv[])
{

	const int cMax = 51;
	int estradas, cidades, origem, pedagios, resultado;
	int teste = 1;
	while(cin >> cidades >> estradas >> origem >> pedagios){
		
		if(estradas+cidades+origem+pedagios <= 0)
			break;

		Vertice::idCount = 0;
		resultado = 0;
		int adj[cMax][cMax] = {}; // = {} zera todos os elementos
		Vertice vertices[cMax];
		queue<Vertice> fila;

		int a, b;		
		for(int i = 0; i < estradas; i++){
			cin >> a >> b;
			//cout << "adj " << a << ' ' << b << endl;
			adj[a][b] = adj[b][a] = 1;
		}

		
		vertices[origem].cor = 'c'; 
		vertices[origem].dist = 0;
		vertices[origem].pai = NULL;

		fila.push(vertices[origem]);

		cout << "Teste " << teste++ << '\n';
		while(!fila.empty()){
			Vertice *u = &fila.front(); fila.pop();
			//cout << "Retirando da fila " << u.id << endl;
			u->cor = 'p';

			for(int i = 1; i <= cidades; i++){
				if(adj[u->id][i] == 1 && vertices[i].dist == -1){
					Vertice *v = &vertices[i];
					v->cor = 'c';
					v->dist = u->dist + 1;
					v->pai = u;
					fila.push(*v);

				}
			}
		}
		for(int i = 1; i <= cidades; i++){
			if(vertices[i].id != origem && vertices[i].dist > 0 && vertices[i].dist <= pedagios)
				cout << vertices[i].id << ' ';
		}
		cout << "\n\n";
	}
	return 0;
}
