#include <stdio.h>

int main()
{
	int a = 2147483647;
	
	printf("정수 최대값:%d\n", a);
	printf("오버플로우 후 값:%d\n", a+1);

	return 0;
}
