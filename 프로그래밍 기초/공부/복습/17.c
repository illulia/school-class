#include <stdio.h>
int main()
{
	float mile, gallon;
	
	scanf("%f %f", &mile, &gallon);
	
	const float mpg = mile/gallon;
	const float lpk = (gallon*3.785)/(mile*1.609)*100;
	
	printf("%.1f mpg or %.1f liters / 100km.", mpg, lpk);
	
	return 0;
}
