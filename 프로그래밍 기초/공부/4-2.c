#include <stdio.h>

int main()
{
	char name[21];
	
	scanf("%s", &name);
	
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%s   \"", name);
	
	return 0;
}
