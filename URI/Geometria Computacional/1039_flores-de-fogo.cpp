#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, x1, x2, y1, y2, r1, r2;
	double dist;
	while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2 && !cin.eof()){
		
		dist = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
		// cout << "DIST: " << dist << endl;
		// cout << "R1: " << r1 << endl;
		// cout << "R2: " << r2 << endl;
		if(r1-dist < r2)
			cout << "MORTO\n";
		else
			cout << "RICO\n";
	}
	return 0;
}