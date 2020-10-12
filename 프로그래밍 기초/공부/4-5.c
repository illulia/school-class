#include <stdio.h>
int main()
{
	double bit, byte;
	
	scanf("%lf %lf", &bit, &byte);
	
	printf("초당 %.2f 메가비트, %.2f 메가바이트 ", bit, byte);
	printf("파일을\n%.2f초에 다운로드한다.", byte*8/bit); 
		
	return 0;
}
