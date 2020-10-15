#include <stdio.h>
int main()
{
	double fahr;
	
	scanf("%lf", &fahr);
	
	const double cel = 5.0/9.0*(fahr-32.0);
	const double kel = cel+273.16;
	
	printf("Fahrenheit: %.2lf = Celsius: %.2lf = Kelvin: %.2lf", fahr, cel, kel);
	
	return 0;
}
