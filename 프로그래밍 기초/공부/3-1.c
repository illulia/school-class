#include <stdio.h>

int main()
{
	int a = 2147483647;
	float i = 1.175494e-38;
	float j = 3.402823e+38;
	
	printf("정수 최대값:%d\n", a);
	printf("오버플로우 후 값:%d\n", a+1);
	
	printf("실수 최대값:%e\n", a);
	printf("오버플로우 후 값:%f\n", a+1);
	
	
	printf("실수 최소값:%f\n", a);
	printf("언플로우 후 값:%f\n", a+1);
	
	return 0;
}
