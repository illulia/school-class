#include <stdio.h>
int main()
{
	float quart;
	float gram = 3.000000e-23;
	
	scanf("%f", &quart);
	
	printf("%e", quart*950/gram);
	
	return 0;
}
