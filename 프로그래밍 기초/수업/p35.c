#include <stdio.h>

int main()
{
	int num,i;
	int array[1001];
	
	
	scanf("%d", &num);
	
	for(i=0; i<num; i++)
	{
		scanf("%d", &array[i]);
	}
	
	for(i=i-1; i>=0; i--)
	{
		printf("%d ", array[i]);
	}
	
	return 0;
}
