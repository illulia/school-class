#include <stdio.h>

int main()
{
	char some[101];
	int i;
	
	scanf("%s", &some);
	
	for(i=strlen(some)-1; i>=0; i--)
	{
		printf("%c", some[i]);
	}
	
	return 0;
}
