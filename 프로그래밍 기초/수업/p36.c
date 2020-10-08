#include <stdio.h>

int main()
{
	int num, i;
	float sum1, sum2;
	
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		sum1 = sum1 + 1.0/i;
		
		if(i%2!=0)
			sum2 = sum2 + 1.0/i;
		else
			sum2 = sum2 + 1.0/i*-1;
	}
	
	printf("%.5lf %.5lf", sum1, sum2);
	
	return 0;
}
