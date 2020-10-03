#include <stdio.h>

int main()
{
	int size, num, a;
	long long sum = 0;
	
	scanf("%d", &size);
	
	for(a=1; a<=size; a++)
	{
		scanf("%d", &num);
		
		sum = sum + num;
	}
	
	printf("%lld", sum);
	
	return 0;
}
