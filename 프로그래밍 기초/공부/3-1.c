#include <stdio.h>

int main()
{
	int a = 2147483647;
	float i = 1.175494e-38;
	float j = 3.402823e+38;
	
	printf("���� �ִ밪:%d\n", a);
	printf("�����÷ο� �� ��:%d\n", a+1);
	
	printf("�Ǽ� �ִ밪:%e\n", a);
	printf("�����÷ο� �� ��:%f\n", a+1);
	
	
	printf("�Ǽ� �ּҰ�:%f\n", a);
	printf("���÷ο� �� ��:%f\n", a+1);
	
	return 0;
}
