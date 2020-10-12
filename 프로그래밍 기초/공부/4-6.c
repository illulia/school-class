#include <stdio.h>
int main()
{
	char name[20], fname[20];
	
	printf("이름을 입력해 주세요 :");
	scanf("%s", &name);
	printf("성을 입력해 주세요  :");
	scanf("%s", &fname);
	
	printf("%s %s\n", fname, name);
	printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(name), strlen(name));
	printf("%s %s\n", fname, name);
	printf("%-*d %-*d\n", strlen(fname), strlen(fname), strlen(name), strlen(name));
	
	return 0;
}
