#include <stdio.h>
int main()
{
	char fname[31],name[31];
	int age;
	
	scanf("%s %s", &fname, &name);
	scanf("%d", &age);
	
	printf("%d %d", strlen(fname)+strlen(name), age);
	
	return 0;
}
