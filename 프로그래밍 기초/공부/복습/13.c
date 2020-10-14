#include <stdio.h>
int main()
{
	float numarr[4];
	float sum;
	
	scanf("%f %f %f %f", &numarr[0], &numarr[1], &numarr[2], &numarr[3]);
	
	sum = numarr[0]+numarr[1]+numarr[2]+numarr[3];
	
	printf("%.2f%%", numarr[3]/sum*100);	
	
	return 0;
}
