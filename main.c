#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int total_seconds, hour, minute, second;
	printf("input the second : ");
	scanf("%d", &total_seconds);
	
	hour = total_seconds / 3600;
	minute = (total_seconds % 3600) / 60;
	second = total_seconds % 60;
	
	printf("The time for %d second is %d : %d : %d\n", total_seconds, hour, minute, second);
	return 0;
}
