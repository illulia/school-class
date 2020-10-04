#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	printf("%d %d %d %d",a/86400 ,a/3600-a/86400*24 ,a/60-a/3600*60 ,a%60 );
}
