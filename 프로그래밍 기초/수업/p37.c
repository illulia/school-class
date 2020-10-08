#include <stdio.h>

int main()
{
	double origin, ypm;
	double sum;
	int year, i;
	
	scanf("%lf %lf %d", &origin, &ypm, &year);
	
	sum = origin;
	
	for(i=1; i<=year; i++)
	{
		sum = sum + sum * ypm;
	}
	
	printf("%.5lf", sum);
	
	return 0;
}
