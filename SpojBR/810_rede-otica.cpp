#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Vertice{

public:
	Vertice() : id(++idCount) {}

	static int idCount;
	int id;
	Vertice* raiz;
	Vertice* proximo;
/*
	bool operator < (const Vertice &other) const{
		return id < other.id;
	}
*/	
};

class Aresta{

public:
	
	Aresta() : v1(NULL), v2(NULL), peso (-1) {}
	void atualiza(Vertice* vert1, Vertice* vert2, const int &w) {
		v1 = vert1;		
		v2 = vert2;
		peso = w;
	}
	
	void print(){
		cout << v1->id << ' ' << v2->id << '\n';
	}
	
	Vertice* v1;
	Vertice* v2;
	int peso;

	bool operator < (const Aresta &other) const{
		return peso < other.peso;
	}
	
};

bool comparaResultado(const Aresta& a, const Aresta& b){
	//if(a.v1->id - b.v1->id == 0)
	//	return a.v2->id < b.v2->id;
	return a.v1->id < b.v1->id;
}
/*
Vertice* getVertice(Vertice* vertices, const int &v, int &count){
	
	for(int i = 0; i < count; i++){
		if(vertices[v-1].id == v){
			cout << "VERTICE RETORNADO: " << vertices[v-1].id << endl;
			return &vertices[v-1];
		}
	}

	vertices[count].id = v;
	cout << "VERTICE INSERIDO: " << vertices[count].id << endl;
	return &vertices[count++];
}
*/
const int VERTICES = 101;
const int ARESTAS = 5000;
int Vertice::idCount = 0;

int main(){

	//int count = 0;
	int teste = 0;
	int n, m, x, y, z, i;
	int conjuntos;

	Vertice vertices[VERTICES];
	Aresta arestas[ARESTAS];

	while(cin >> n  && n != 0){
		cin >> m;
		vector<Aresta> resultado;

		conjuntos = n;
		
		// Reseta conjuntos e Vertices
		for(i = 0; i < n; i++){
			Vertice* aux = &vertices[i];
			aux->raiz = aux;
			aux->proximo = NULL;
		}

		for(i = 0; i < m; i++){
			cin >> x >> y >> z;
			if(x < y)
				arestas[i].atualiza(&vertices[x-1], &vertices[y-1], z);		
			else
				arestas[i].atualiza(&vertices[y-1], &vertices[x-1], z);
			//cout << "VX: " << vx->id << ' ';
			//cout << "VY: " << vy->id << endl;
			//cout <<"M: " << m << " I: " << i << ' ';
		}
		
		sort(arestas, arestas + m);
		
		for(i = 0; i < m; i++){
			// Se vertices da aresta pertencem a conjuntos diferentes
			if(arestas[i].v1->raiz != arestas[i].v2->raiz){

				//arestas[i].v1->raiz = arestas[i].v2->raiz;
				
				Vertice* ultimoV2 = arestas[i].v2->raiz;
					
				while(ultimoV2->proximo){
					ultimoV2 = ultimoV2->proximo;
				}
				ultimoV2->proximo = arestas[i].v1->raiz;
				

				Vertice* primeiroV1 = arestas[i].v1->raiz;
				primeiroV1->raiz = arestas[i].v2->raiz;
				while(primeiroV1->proximo){
					primeiroV1 = primeiroV1->proximo;
					primeiroV1->raiz = arestas[i].v2->raiz;
				}

				resultado.push_back(arestas[i]);	
				conjuntos--;			
			}
			
			if(conjuntos == 1) break;

		}	

		//sort(resultado.begin(), resultado.end(), comparaResultado);
		/*
		cout << "VERTICES: ";
		for(i = 0; i < n; i++){
			cout << vertices[i].id << ' ' ;
		}
		*/
		/*
		cout << "ARESTAS:\n";
		for(i = 0; i < m; i++){
			arestas[i].print();
		}		
		*/
		//cout << "RESULTADO:\n";
		cout << "Teste " << ++teste << '\n';
		for(i = 0; i < resultado.size(); i++){
			resultado[i].print();
		}
		cout << endl;/*
				cout << "ARESTAS RESULTADO: " << resultado.size();

		resultado.erase(resultado.begin(), resultado.end());
				cout << "ARESTAS RESULTADO: " << resultado.size();

*/

	}
}
