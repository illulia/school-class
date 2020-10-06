#include <stdio.h>

int main()
{
	int inch;
	float cm = 0.393701;
	
	scanf("%d", &inch);
	
	printf("%.2lf", inch/cm);
	
	return 0;
}
