#include<stdio.h>

int main()
{
	printf("enter 2 numbers:\n");
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("the numbers are: %d %d\n", num1, num2);

	num2 += num1;
	num1 = num2 - num1;
	num2 -= num1;

	printf("the numbers are: %d %d\n", num1, num2);

	return 0;
}