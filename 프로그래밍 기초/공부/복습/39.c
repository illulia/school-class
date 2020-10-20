#include <stdio.h>
#define LOW 300
#define MIDDLE 450
int main()
{
	double time, gross_pay, taxes, net_pay;
	
	scanf("%lf", &time);
	
	if(time > 40)
		gross_pay = (40.0*10.0)+(time-40.0)*15.0;
	else
		gross_pay = time*10.0;
			
	if(gross_pay<=LOW)
		taxes = gross_pay*0.15;
	else if(gross_pay<=MIDDLE)
		taxes = 300*0.15+(gross_pay-300)*0.2;
	else
		taxes = 300*0.15+150*0.2+(gross_pay-450)*0.25;
		
	net_pay = gross_pay - taxes;	
		
	printf("%.2lf %.2lf %.2lf", gross_pay, taxes, net_pay);
	
	return 0;
}
