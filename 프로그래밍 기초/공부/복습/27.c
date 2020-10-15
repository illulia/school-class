#include <stdio.h>
int main()
{
	int count, a, i;
	long long sum = 0;
	
	scanf("%d", &count);
	
	for(i=1; i<=count; i++)
	{
		scanf("%d", &a);
		sum += a;
	}

	printf("%lld", sum);
	
	return 0;
}
