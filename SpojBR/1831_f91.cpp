#include <stdio.h>

int f91(int n){
	if(n <= 101)
		return 91;
	else
		return n - 10;
}

int main(int argc, char const *argv[])
{	
	int n;
	while(scanf("%d",&n) && n){
		printf("f91(%d) = %d\n", n, f91(n));
	}

	return 0;
}
