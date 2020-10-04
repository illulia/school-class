#include <stdio.h>
int main(){
	double a;
	scanf("%lf", &a);
	printf("%lf cups are equivalent to each of the following:\n", a);
	printf("%lf pints\n", a/2);
	printf("%lf tablespoons\n", a*16);
	printf("%lf teaspoons", a*48);
}
