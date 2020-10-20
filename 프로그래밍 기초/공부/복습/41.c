#include <stdio.h>
#include <ctype.h>
int main()
{
	int cs;
	double get,tax;
	const int solo_LOW = 17850;
	const int head_LOW = 23900;
	const int toge1_LOW = 29750;
	const int toge2_LOW = 14875;
	
	scanf("%d %lf", &cs, &get);
	
	switch(cs)
	{
		case 1:
		{
			if(get<=solo_LOW)
				tax = get*0.15;
			else
				tax = solo_LOW*0.15+(get-solo_LOW)*0.28;
				
			break;
		}
		case 2:
		{
			if(get<=head_LOW)
				tax = get*0.15;
			else
				tax = head_LOW*0.15+(get-head_LOW)*0.28;
			
			break;		
		}
		case 3:
		{
			if(get<=toge1_LOW)
				tax = get*0.15;
			else
				tax = toge1_LOW*0.15+(get-toge1_LOW)*0.28;
		
			break;
		}
		case 4:
		{
			if(get<=toge2_LOW)
				tax = get*0.15;
			else
				tax = toge2_LOW*0.15+(get-toge2_LOW)*0.28;
		
			break;
		}
	}
	
	printf("%.2lf", tax);
	
	return 0;
}
