#include<stdio.h>

int main()
{
	printf("enter a number:\n");
	int x, y;
	scanf("%d", &x);

	if(x > 0)
		y = 1;
	else if(x == 0)
		y = 0;
	else
		y = -1;	

	printf("value of y is: %d\n", y);

	return 0;
}