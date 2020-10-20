#include <stdio.h>
int main()
{
	const float artichokes = 2.05;
	const float beets = 1.15;
	const float carrots = 1.09;
	const float sale = 0.95;
	const float less5 = 6.5;
	const float less20 = 14.0;
	const float more20 = 0.5;
	char ch[2];
	int pound, num, pound_sum,i, a=0, b=0, c=0;
	double sum;
	
	scanf("%d", &num);
	
	for(i=0; i<num; i++)
	{
		scanf("%s %d", &ch, &pound);
		
		switch(ch[0])
		{
			case 'a':
			{	
				a += pound;
				break;
			}
			case 'b':
			{
				b += pound;	
				break;
			}
			case 'c':
			{
				c += pound;
				break;
			}
		}

	}
	
	sum = a*artichokes + b*beets + c*carrots;
	pound_sum = a+b+c;
	
	if(sum>=100)
		sum = sum*sale;
	
	if(pound_sum<5)
		sum += less5;
	else if(pound_sum<20)
		sum += less20;
	else
		sum += less20+pound_sum*more20;
		
	printf("%.2lf\n", sum);
	
	return 0;
 } 
