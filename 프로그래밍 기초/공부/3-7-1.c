#include <stdio.h>

int main()
{
	int cm;
	float inch = 2.54;
	
	scanf("%d", &cm);
	
	printf("%.2lf", cm/inch);
	
	return 0;
}
