#include <stdio.h>
int main(){
	const float lpg = 3.785;
	const float kpm = 1.609;
	float gal,mile;
	
	scanf("%f %f", &mile, &gal);
	
	printf("%.1f mpg or %.1f liters / 100km.", mile/gal, ((gal*lpg)/(mile*kpm))*100);
	
	return 0;
}
