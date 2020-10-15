#include <stdio.h>
int main()
{
	int i,j,k;
	char word[21];
	
	scanf("%s", &word);
	
	for(i=1; i<=strlen(word); i++)
	{
		printf("*");
		
		for(j=0; j<i; j++)
			printf("%c", word[j]);
		
		for(k=strlen(word); k>i; k--)
			printf(" ");
		
		printf("*\n");
	}
	
	return 0;
}
