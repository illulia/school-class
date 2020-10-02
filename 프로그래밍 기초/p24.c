#include <stdio.h>
#include <string.h>
int main()
{
	char txt[21];
	int length,a,b,c;
	
	scanf("%s", &txt);
	
	length = strlen(txt);
	
	for(a=1; a<=length; a++)
	{
		printf("*");
		
		for(b=0; b<a; b++)
		{
			printf("%c", txt[b]);
		}
		
		for(c=length; a<c; c--)
		{
			printf(" ");
		}
		
		printf("*\n");
	}
	
}
