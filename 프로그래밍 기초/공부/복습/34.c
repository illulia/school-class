#include <stdio.h>
int main()
{
	double origin,per,sum;
	int year,i;
	
	scanf("%lf %lf %d", &origin, &per, &year);
	
	sum = origin;
	
	for(i=1; i<=year; i++)
		sum += sum*per;
	
	printf("%.5lf", sum);
	
	return 0;
}
