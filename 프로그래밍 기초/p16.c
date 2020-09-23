#include <stdio.h>
#include <string.h>
int main(){
	char fname[10],name[10];
	float a,b,c;
	scanf("%s %s", fname, name);
	scanf("%f %f %f", &a, &b, &c);
	printf("\"%-10s%11s\"%8.1f", fname, name, (a+b+c)/3);
}
