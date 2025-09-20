#include <stdio.h>
int main ()
{
	int limit=5000,amount;
	printf("Enter the amount you want to withdraw in $:");	
	scanf("%d",&amount);
	if (amount<=limit){
		if (amount%20==0){
			printf("Withdrawal Approved");
		}
		else{
			printf("withdrawal Denied");
		}
	}
	else{
		printf("Withdrwal Approved");
	}
}
