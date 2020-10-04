#include <stdio.h>

int main()
{
	int a,b,c;
	
	scanf("%d", &a);
	
	for(b=1; b<=a; b++)
	{
		for(c=0; c<b; c++)
		{
			printf("%c", a+64-c);
		}
		
		printf("\n");
	}
	
	return 0;
}
