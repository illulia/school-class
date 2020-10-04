#include <stdio.h>
int main (){
	float fah,cel;
	
	scanf("%f", &fah);
	cel = 5.0/9.0*(fah-32.0);
	
	printf("Fahrenheit: %.2f = Celsius: %.2f = Kelvin: %.2f\n", fah, cel, cel+273.16);
	return 0;
}
