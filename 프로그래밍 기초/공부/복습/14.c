#include <stdio.h>
int main()
{
	char fname[11], name[11];
	float score[3], sum;
	
	scanf("%s %s", &fname, &name);
	scanf("%f %f %f", &score[0], &score[1], &score[2]);
	
	sum = score[0]+score[1]+score[2];
	
	printf("\"%-10s %+10s\" %.1f", fname, name, sum/3);
	
	return 0;
}
