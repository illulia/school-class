#include <stdio.h>

int main()
{
	int st, end, i;
	
	scanf("%d %d", &st, &end);
	
	for(i=st; i<=end; i++)
	{
		printf("%lld %lld %lld\n", i, i*i, i*i*i);
	}
	
	return 0;
}
