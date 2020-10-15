#include <stdio.h>
int main()
{
	int year;
	
	scanf("%d", &year);
	
	printf("%c%d",(year-4)%12+65 ,(year-4)%10 );
	
	return 0;
}
