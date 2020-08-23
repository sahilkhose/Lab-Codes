#include<stdio.h>

int main()
{
	printf("enter 3 numbers\n");
	int smallest = 0;
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	smallest = (num1<num2 && num1<num3) ? num1 : (num2<num3 ? num2 : num3);

	printf("smallest number is : %d\n", smallest);

	return 0;
}