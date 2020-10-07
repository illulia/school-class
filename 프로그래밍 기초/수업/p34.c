#include <stdio.h>

int main()
{
	int min, max, i;
	int j = 0;
	
	while(1 == 1)
	{
		scanf("%d %d", &min, &max);
		
		if(min >= max)
			break;
		
		for(i=min; i<=max; i++)
			j = j+i*i;
			
		printf("%d\n", j);
		j = 0;
	}
	
	return 0;
}
