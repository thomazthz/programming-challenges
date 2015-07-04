#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int a, d, i, j;

	while(true){
		cin >> a >> d;

		if(a == 0 && d == 0)
			break;

		int atacantes[a];
		int defensores[d];

		for(i=0; i<a; i++)
			cin >> atacantes[i];

		for(i=0; i<d; i++)
			cin >> defensores[i];

		sort(atacantes, atacantes + a);
		sort(defensores, defensores + d);

		bool impedido = atacantes[0] < defensores[1];

		if(impedido){
			cout << 'Y' << '\n';
		}else{
			cout << 'N' << '\n';
		}

	}
	return 0;
}
