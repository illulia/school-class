#include <stdio.h>
int main()
{
	int year ;
	
	scanf("%d", &year);
	
	printf("%c%d", (year+8)%12+'A', (year+6)%10);
}
