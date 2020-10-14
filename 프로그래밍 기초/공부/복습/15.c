#include <stdio.h>
int main()
{
	float mbs,MB;
	
	scanf("%f %f", &mbs, &MB);
	
	printf("%.2fsec", MB*8/mbs);
	
	return 0;
}
