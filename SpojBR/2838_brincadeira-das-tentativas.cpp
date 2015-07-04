#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{	
	const int MAX_FIG = 8;
	int n, i, figurinha;
	
	while(cin >> n && n != 0){
		vector<int> figurinhas;
		for(i=0; i<n; i++){
			cin >> figurinha;
			figurinhas.push_back(figurinha);
		}

		sort(figurinhas.begin(), figurinhas.end());

		do{
			for(vector<int>::iterator it = figurinhas.begin(); it != figurinhas.end()-1; it++){
				cout << *it << ' ';
			}
			cout << figurinhas.back() << '\n';
		}while(next_permutation(figurinhas.begin(), figurinhas.end()));
		cout << '\n';
	}
	return 0;
}
