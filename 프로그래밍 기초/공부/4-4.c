#include <stdio.h>

int main()
{
	float cm;
	char name[20];
	
	printf("cm���� Ű, �̸� �Է� :");
	scanf("%f %s", &cm, name);
	
	printf("%s��, ����� Ű�� %.2f �Դϴ�.", name, cm/100);
	
	return 0;
}
