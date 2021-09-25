#include <stdio.h>

int Factorial(int n)
{
	if(n==0)
		return 1 ;
	else
		{
			return n*Factorial(n-1);
		}
}

int main ()
{
	int N;
	int answer;
		scanf("%d", &N);
	answer = Factorial(N);
	printf("%d", answer);
	
	return 0 ;
	
}