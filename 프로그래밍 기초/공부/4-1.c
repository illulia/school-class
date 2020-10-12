#include <stdio.h>

int main()
{
	char name[21], fname[21];
	
	printf("Write your name :");
	scanf("%s", &name);
	printf("Write your fitst name :");
	scanf("%s", &fname);
	
	printf("%s %s", fname, name);
		
	return 0;
}
