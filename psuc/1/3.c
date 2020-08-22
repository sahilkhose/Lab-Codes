#include<stdio.h>

int main()
{
	float num1, num2, sum = 0, diff = 0, prod = 0, quo = 0;
	printf("enter 2 numbers: \n");	
	scanf("%f %f", &num1, &num2);

	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	quo = num1 / num2;

	printf("sum: %f diff: %f prod: %f quo: %f\n", sum, diff, prod, quo);

	return 0;
}