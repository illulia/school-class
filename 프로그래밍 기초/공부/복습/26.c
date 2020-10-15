#include <stdio.h>
int main()
{
	int i, j ,k ,l;
	char code;
	
	scanf("%c", &code);
	
	for(i=1; i<=code-64; i++)
		{
			for(j=code-64-i; j>=1; j--)
				printf("-");
			
			for(k=65; k<=64+i; k++)
				printf("%c", k);
				
			for(l=63+i; l>=65; l--)
				printf("%c", l);
			
		printf("\n");
		}
	
	return 0;
}
