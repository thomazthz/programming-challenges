#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double n[6], media = 0; 
	int count = 0;

	for(int i = 0; i < 6; i++){
		cin >> n[i];
		if(n[i] > 0){
			count++;
			media += n[i];
		}
	}

	media /= count;

	cout << fixed << setprecision(1);
	cout << count << " valores positivos\n";
	cout << media << '\n';
	return 0;
}