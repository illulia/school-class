#include <stdio.h>
int main()
{
	float a,b;
	
	while(scanf("%f %f", &a, &b) == 2)
		printf("%.3lf\n", (a-b)/(a*b));
	
	return 0;
}
