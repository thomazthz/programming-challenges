#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	
	while(cin >> n && !cin.eof() && n != 0){
		string s = "a";
		cin.ignore();
		for(int i = 0; i < n; i++){
			getline (cin, s);

			for(char &c : s){
				if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
					c += 3;
			}
			
			reverse(s.begin(), s.end());
			
			string::size_type size = s.size();
			for(string::size_type j = floor(s.size()/2); j < size; j++)
				s[j] -= 1;

			cout << s << '\n';
		}
	}
	return 0;
}