#include <stdio.h>

int main ()
{
	int a,b;
	printf("Enter number 1:");
	scanf("%d",&a);
	printf("Enter number 2:");
	scanf("%d",&b);
	printf("The max number between the two numbers is ");
	(a>b)? printf("%d",a):printf("%d",b);
}
