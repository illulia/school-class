#include <stdio.h>
int main()
{
	char ch,f,l;
	int count = 0 ;
	
	ch = getchar();
	
	while(ch != '#')
	{
		f = ch;
		
		if(f == 'i')
		{
			if(l == 'e')
				count += 1;
		}
		
		l = f;
		ch = getchar();
	}
	
	printf("%d", count);
	
	return 0;
}
