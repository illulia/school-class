#include <stdio.h>

int main()
{
	float cm;
	char name[20];
	
	printf("cm단위 키, 이름 입력 :");
	scanf("%f %s", &cm, name);
	
	printf("%s씨, 당신의 키는 %.2f 입니다.", name, cm/100);
	
	return 0;
}
