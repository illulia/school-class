#include <stdio.h>
int main()
{
	double cup;
	
	scanf("%lf", &cup);
	
	printf("%lf cups are equivalent to each of the following:\n", cup);
	printf("%lf pints\n", 0.5*cup);
	printf("%lf tablespoons\n", 16*cup);
	printf("%lf teaspoons\n", 48*cup);
	
	return 0;
}
