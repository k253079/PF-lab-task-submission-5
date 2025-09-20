#include <stdio.h>

int main(){
	int rating;
	printf("How much would you rate this movie on a scale of (1-5):");
	scanf("%d",&rating);
	if (rating==5){
		printf("5:Excellent");
	}
	else if (rating==4){
		printf("4:Good");
	}
	else if (rating==3){
		printf("3:Average");
	}
	else if (rating==2){
		printf("2:Poor");
	}
	else if (rating==1){
		printf("1:Terrible");
	}
	else{
		printf("Invalid Command");
	}
}
