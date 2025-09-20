#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if (num%3==0 && num%5==0){
		printf("Your number is divisble by 3 and 5");
	}
	else{
		printf("Your number is not divisible by 3 and 5");
	}
}
