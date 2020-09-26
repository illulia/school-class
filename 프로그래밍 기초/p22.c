#include <stdio.h>
int main (){
	int day;
	long long int sum = 0;
	int count = 1;
	
	scanf("%d", &day);
	
	while(count <= day)
	{
		sum = sum + count;
		count++;	
	}
	
	printf("%lld\n", sum*1000);
	
	return 0;
}

