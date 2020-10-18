#include <stdio.h>
int main()
{
	int num,i;
	double sum1,sum2 = 0;
	
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		sum1 +=	1.0/i;
		if(i%2 == 1)
			sum2 += 1.0/i;
		else
			sum2 += 1.0/(-1*i);
	}
	
	printf("%.5lf %.5lf", sum1, sum2);
	
	return 0;
}
