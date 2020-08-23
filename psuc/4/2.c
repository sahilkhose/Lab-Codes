#include<stdio.h>

int main()
{
	printf("enter 3 numbers\n");
	int largest = 0;
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1 > num2 && num1 > num3)
		largest = num1;
	else if(num2 > num3)
		largest = num2;
	else 
		largest = num3;

	printf("larest number is : %d\n", largest);

	return 0;
}