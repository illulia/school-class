#include <stdio.h>
#include <string.h>
int main(){
	char fname[10],name[10];
	scanf("%s %s", fname, name);
	int a = strlen(fname);
	int b = strlen(name);
	printf("%s %s\n%4d %7d\n", fname, name, a, b);
	printf("%s %s\n%-4d %-7d", fname, name, a, b);
}
