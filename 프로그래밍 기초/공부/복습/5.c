#include <stdio.h>
int main()
{
	const char hello[14] = "Hello, World.";
	const char kyung[22] = "Kyungsung University.";
	const char dept[27] = "Dept. of Computer Science.";
	int i;
	
	for(i=1; i<=2; i++)
		printf("%s\n", hello);
		
	printf("%s ", hello);
	
	for(i=1; i<=2; i++)
		printf("%s\n", kyung);
		
	printf("%s %s\n", kyung, dept);
	printf("%s %s %s\n", hello, kyung, dept);
	
	return 0;
}
