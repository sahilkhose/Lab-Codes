#include<stdio.h>

int main()
{
	printf("enter the number of delay days:\n");
	int days;
	scanf("%d", &days);

	if(days == 0)
		printf("No fine! YAY!\n");
	else if(days <= 5 && days > 0)
		printf("fine is: Rupees %f\n", 0.5*days);
	else if(days >= 6 && days <= 10)
		printf("fine is: Rupees %d\n", 1*days);
	else if(days > 10 && days <= 30)
		printf("fine is: Rupees %d\n", 5*days);
	else if(days > 30)
		printf("fine is: Rupees %d\n", 10*days);
	else
		printf("enter valid number of days!\n");

	return 0;
}