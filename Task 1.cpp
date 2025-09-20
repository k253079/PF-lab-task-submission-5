#include <stdio.h>

int main()
{
	int color;
	printf("Enter R for Red\n");
	printf("Enter Y for Yellow\n");
	printf("Enter G for Green:");
	scanf("%c",&color);
	if (color=='R'){
		printf("Stop");
	}
	else if(color=='Y'){
		printf("Caution");
	}
	else if(color=='G'){
		printf("Go");
	}
	else{
		printf("Invalid command");
	}
}
