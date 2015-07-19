#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>
#include <sstream>

using namespace std;

class Vertice
{
public:
    int grau_entrada;
    vector<string> adjacentes;
};

int main()
{
    int n, grau_entrada, n_arestas = 0, teste = 1;
    string nome, adjacente;

    while(cin >> n && n != 0)
    {
        queue<string> fila;
        unordered_map<string, Vertice> vertices(31);
        n_arestas = 0;

        for(int i = 0; i < n; i++)
            cin >> nome;

        for(int i = 0; i < n; i++)
        {
            cin >> nome >> grau_entrada;
            vertices[nome].grau_entrada = grau_entrada;

            if(grau_entrada == 0) fila.push(nome);

            for(int j = 0; j < grau_entrada; j++)
            {
                cin >> adjacente;
                n_arestas++;
                vertices[adjacente].adjacentes.push_back(nome);
            }
        }
        stringstream saida;
        while(!fila.empty())
        {
            string u = fila.front();
            fila.pop();

            saida << u << ' ';

            for(const auto &el : vertices[u].adjacentes)
            {
                grau_entrada = --vertices[el].grau_entrada;
                n_arestas--;
                if(grau_entrada == 0)
                    fila.push(el);
            }
        }


        cout << "Teste " << teste++ << '\n';
        if(n_arestas == 0) cout << saida.str() << "\n\n";
        else cout << "impossivel\n\n";
    }

    return 0;
}

