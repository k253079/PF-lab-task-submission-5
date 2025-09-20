#include <stdio.h>

int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if (age>0 &&age<13){
		printf("You are a child");
	}
	else if(age>12&& age<20){
		printf("You are a teenager");
	}
	else if(age>19 && age<51){
		printf("You are an adult");
	}
	else if(age>50){
		printf("You are a senior");
	}
	else{
		printf("Invalid command");
	}
}
