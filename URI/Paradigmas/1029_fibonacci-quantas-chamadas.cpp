#include <iostream>
using namespace std;

int countCalls = 0;
int count = 0;
int fib(int n){
	if(n == 1)
		count++;
	countCalls++;
	if(n < 2)
		return n;
	return fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[])
{
	int n, num;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> num;
		fib(num);
		cout << "fib("<< num << ") = " << countCalls-1 << " calls = " << count << '\n';
		count = countCalls = 0;
	}
	
	return 0;
}