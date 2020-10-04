#include <stdio.h>

int main()
{
	char a;
	int i,j,k,l;
	
	scanf("%c", &a);
	
	for(i=1; i<=a-64; i++)
	{
		for(j=a-64; j>i; j--)
		{
			printf("-");
		}
		
		for(k=65; k<=i+64 ; k++)
		{
			printf("%c", k);
		}
		
		for(l=k-2; l>64 ; l--)
		{
			printf("%c", l);
		}
		
		printf("\n");
	}
	
	return 0;
}
