#include <stdio.h>
int main()
{
	int day, i;
	long long sum = 0;
	long long pay = 0;
	
	scanf("%d", &day);
	
	for(i=1; i<=day; i++)
	{
		pay += 1000;
		sum += pay;
	}
	
	printf("%lld", sum);
	
	return 0;
}
