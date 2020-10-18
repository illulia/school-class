#include <stdio.h>
int main()
{	
	int count_space,count_newline,count_char;
	char line;
	
	line = getchar();
	
	count_space = 0;
	count_newline = 0;
	count_char = 0;
	
	while(line != '#')
	{
		line = getchar();
		
		if(line == ' ')
			count_space += 1;
		else if(line == '\n')
		{	
			count_newline += 1;
		}
		else
			count_char += 1;
	}
		
	printf("%d %d %d", count_space, count_newline, count_char);
	
	return 0;
}
