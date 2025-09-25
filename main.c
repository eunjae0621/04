#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int total_seconds, minutes, seconds;
	printf("input the second : ");
	scanf("%d",  &total_seconds);
	
	minutes = total_seconds / 60;
	seconds = total_seconds % 60;
	
	printf("the time is %d : %d\n", minutes, seconds);

	return 0;
}
