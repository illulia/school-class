#include <stdio.h>
int main()
{
	int a,b,i;
	
	while(scanf("%d %d", &a, &b) == 2 && a<b)
	{
		long long sum = 0;
		
		for(i=a; i<=b; i++)
			sum += i*i;
		
		printf("%lld\n", sum);
	}
	
	return 0;
}
