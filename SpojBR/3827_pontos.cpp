#include <iostream>
#include <iomanip>
#include <cmath>
	
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, j, x, y;
	float dist = 0.0f;
	float menor;

	cin >> n;
	pair<int,int> pontos[n];

	for(i = 0; i < n; ++i){
		cin >> x >> y;
		pontos[i] = pair<int, int> (x,y);
	}

	menor = 6000000;
	for(i = 0; i < n - 1; ++i){
		for(j = i+1; j < n; ++j){
			dist = sqrt(pow(pontos[i].first - pontos[j].first, 2) + pow(pontos[i].second - pontos[j].second, 2));
			if(dist < menor)
				menor = dist;
		}
	}

	cout << fixed << setprecision(3) << menor << endl;

	return 0;
}


