#include <stdio.h>
int main(){
	float a;
	scanf("%llf", &a);
	printf("Fixed-point notation: %f\n", a);
	printf("Exponential notation: %e\n", a);
	printf("p notation: %a", a);
	return 0;
}
