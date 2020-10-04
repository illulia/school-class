#include <stdio.h>
#include <string.h>
int main(){
	char fn[30];
	char name[30];
	int age;
	scanf("%s %s\n",fn,name);
	scanf("%d",&age);
	printf("%d %d", strlen(fn)+strlen(name), age);
}
