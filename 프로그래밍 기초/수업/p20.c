#include <stdio.h>
int main (){
	const int std = 60;
	int time;
	
	while (std == 60)
	{
		scanf("%d", &time);
		
		if (time <= 0)
			break;
			
		printf("Time in minute(s): %d = %d hour(s) and %d minute(s)\n", time, time/std, time%std);	
	}
}
