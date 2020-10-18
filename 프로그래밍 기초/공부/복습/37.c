#include <stdio.h>
int main()
{
	long long num;
	long double sum1=0.0,sum2=0.0;
	long long count1=0,count2=0;
	long double an1,an2;
	
	while(scanf("%lld", &num)  0 && num != 0)
	{
		if(num%2==1)
		{
			count1 += 1;
			sum1 += num;
		}
		else
		{
			count2 += 1;
			sum2 += num;	
		}
		
	}
	
	an1 = (float)sum1/count1;
	an2 = (float)sum2/count2;
	
	if(count1 == 0)
		an1 = 0;
	if(count2 == 0)
		an2 = 0;
	
	printf("%lld %.2Lf %lld %.2Lf", count2, an2, count1, an1);
	
	return 0;
}
