#include <stdio.h>
int main()
{
	double origin,per,out;
	int count = 0;
	
	scanf("%lf %lf %lf", &origin, &per, &out);
	
	if(origin*(per/100) >= out)
		printf("NO");
	else
	{
		while(origin>=0)
		{
			origin += origin*(per/100)-out;
			count += 1;
		}
		
		printf("%d", count);
	}
	
	return 0;
}
