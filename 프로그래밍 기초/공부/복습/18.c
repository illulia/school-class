#include <stdio.h>
int main()
{
	long int sec;
	int hour, minute;
	
	scanf("%d", &sec);
	
	hour = sec%86400/3600;
	minute = sec/60%60;
	
	printf("%d %d %d %d", sec/86400, hour, minute, sec%60);
	
	return 0;
}
