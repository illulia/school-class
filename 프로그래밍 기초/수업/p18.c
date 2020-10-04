#include <stdio.h>
#include <string.h>
int main(){
	char fname[30],name[30];
	
	scanf("%s %s", fname, name);
	
	printf("%s %s\n", fname, name);
	printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(name), strlen(name));
	printf("%s %s\n", fname, name);
	printf("%-*d %-*d\n", strlen(fname), strlen(fname), strlen(name), strlen(name));
	
	return 0;
}
