#include <stdio.h>
int main()
{
	double r1,r2,r3,r4,r5;
	
	scanf("%lf %lf %lf %lf %lf", &r1, &r2, &r3, &r4, &r5);
	
	printf("%.5lf", ((r2+r3)*r4)/(r2+r3+r4)+r1+r5);

	return 0;
}
