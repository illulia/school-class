#include <stdio.h>
int main()
{
	char name[20], fname[20];
	
	printf("�̸��� �Է��� �ּ��� :");
	scanf("%s", &name);
	printf("���� �Է��� �ּ���  :");
	scanf("%s", &fname);
	
	printf("%s %s\n", fname, name);
	printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(name), strlen(name));
	printf("%s %s\n", fname, name);
	printf("%-*d %-*d\n", strlen(fname), strlen(fname), strlen(name), strlen(name));
	
	return 0;
}
