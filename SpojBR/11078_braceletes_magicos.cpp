#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i;
	string seq, bracelete;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> seq >> bracelete;

	    bracelete.append(bracelete);
		size_t busca = bracelete.find(seq);
		reverse(bracelete.begin(), bracelete.end());
		size_t buscainvertida = bracelete.find(seq);

		if(busca != string::npos || buscainvertida != string::npos){
			cout << 'S' << '\n';
		}else{
			cout << 'N' << '\n';
		}
	}

	return 0;
}
