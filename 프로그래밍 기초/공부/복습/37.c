#include <stdio.h>
int main()
{
	int num;
	double sum1=0.0,sum2=0.0;
	int count1=0,count2=0;
	
	while(scanf("%d", &num) == 1 && num != 0)
	{
		if(num%2==0)
		{
			count1++;
			sum1 += num;
		}
		else
		{
			count2++;
			sum2 += num;
		}
	}
	
	if(sum1 != 0)
		sum1 = sum1/count1;
	if(sum2 != 0)
		sum2 = sum2/count2;
		
	printf("%d %.2lf %d %.2lf", count1, sum1, count2, sum2);
	
	return 0;
}
