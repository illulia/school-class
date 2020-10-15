#include <stdio.h>
int main()
{
	int count,i,j;
	int arr[1001];
	
	scanf("%d", &count);
	
	for(i=0; i<count; i++)
		scanf("%d", &arr[i]);
	
	for(j=count-1; j>=0; j--)
		printf("%d ", arr[j]);
	
	return 0;
}
