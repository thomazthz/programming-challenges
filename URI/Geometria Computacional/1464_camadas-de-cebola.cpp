#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <list>
using namespace std;

struct Point
{
	int x, y;

	bool operator==(const Point &p) const{
		return x == p.x && y == p.y;
	}
};

bool compare(const Point &p1, const Point &p2){
	if(p1.x == p2.x)
		return p1.y < p2.y;
	else return p1.x < p2.x;
}

long orientacao(const Point &o, const Point &a, const Point &b){
	return (long)((a.x - o.x) * (b.y - o.y)) - (long)((a.y - o.y) * (b.x - o.x));
}

double dist(const Point &p1, const Point &p2){
	return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

int main(int argc, char const *argv[])
{
	int n;

	while(cin >> n && n != 0){
		list<Point> p(n);
		list<Point>::iterator it;
		list<Point>::reverse_iterator rit;

		vector<Point>::iterator vit;

		int parity = 0;

		for(it = p.begin(); it != p.end(); ++it)
			cin >> it->x >> it->y;

		p.sort(compare);

		while(p.size() > 3){
		vector<Point> lower;
		vector<Point> upper;

			// Cria o lower hull
			for(it = p.begin(); it != p.end(); ++it){
				while(lower.size() >= 2 && orientacao(*(lower.end()-2), *(lower.end()-1), *it) < 0)
					lower.pop_back();
				lower.push_back(*it);
			}
		
			// Cria o upper hull
			for(rit = p.rbegin(); rit != p.rend(); ++rit){
				while(upper.size() >= 2 && orientacao(*(upper.end()-2), *(upper.end()-1), *rit) < 0)
					upper.pop_back();
				upper.push_back(*rit);
			}

			for(vit = lower.begin(); vit != lower.end()-1; ++vit)
				p.remove(*vit);

			for(vit = upper.begin(); vit != upper.end()-1; ++vit)
				p.remove(*vit);

			parity++;
		}

		if(p.size() == 3){
			it = p.begin();
			Point p1 = *it;
			++it;
			Point p2 = *it;
			++it;
			Point p3 = *it;
			if(orientacao(p1, p2, p3) != 0)
				parity++;
		} 

		if(parity % 2 == 0)
			cout << "Do not take this onion to the lab!" << endl;
		else
			cout << "Take this onion to the lab!" << endl;
	}

	return 0;
}