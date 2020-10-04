#include <stdio.h>
int main(){
	float a,b,c,d,z;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("%.2f%%",d/(a+b+c+d)*100);
}
