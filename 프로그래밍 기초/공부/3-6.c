#include <stdio.h>

int main()
{
	int quart;
	int gram = 950;
	
	scanf("%d", &quart);
	
	printf("%lld", quart*gram/3.000000e-26);	
	
	return 0;
}
