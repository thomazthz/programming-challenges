#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool comparator(int x, int y){ return x > y; }
int main(int argc, char const *argv[])
{
	int n, m, p;
	vector<int> pontuacoes;

	cin >> n >> m;

	for(int i = 0; i < n; i++){
		cin >> p;
		pontuacoes.push_back(p);
	}

	sort(pontuacoes.begin(), pontuacoes.end(), comparator);

	for(vector<int>::iterator it = pontuacoes.begin(); it != (pontuacoes.begin() + m); ++it)
		cout << *it << endl;

	return 0;
}