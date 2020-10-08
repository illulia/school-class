#include <stdio.h>

int main()
{
	double outm, money, mpy;
	int count = 0;
	
	scanf("%lf %lf %lf", &money, &mpy, &outm);
	
	while(money>=0)
	{
		money = money + money*(mpy*0.01) - outm;
		count = count + 1;
		
		if(money*(mpy*0.01)>=outm)
			break;	
	}
	
	if(money*(mpy*0.01)>=outm)
		printf("NO");
	else
		printf("%d", count);
	
	return 0;
}
