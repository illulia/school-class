#include <stdio.h>
int main()
{
	double bit, byte;
	
	scanf("%lf %lf", &bit, &byte);
	
	printf("�ʴ� %.2f �ް���Ʈ, %.2f �ް�����Ʈ ", bit, byte);
	printf("������\n%.2f�ʿ� �ٿ�ε��Ѵ�.", byte*8/bit); 
		
	return 0;
}
