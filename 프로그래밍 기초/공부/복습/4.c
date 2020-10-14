#include <stdio.h>
int main()
{
	int age;
	
	scanf("%d", &age);
	
	printf("An age of %d years is %d days.", age, age*365);
	
	return 0;
}
