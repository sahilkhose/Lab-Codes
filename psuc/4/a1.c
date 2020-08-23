#include<stdio.h>

int main()
{
	printf("enter a number:\n");
	int x;
	scanf("%d", &x);

	if(x > 0)
		printf("number is positive!\n");
	else if(x == 0)
		printf("number is zero!\n");
	else
		printf("number is negative!\n");

	return 0;
}