#include<stdio.h>

int main()
{
	printf("enter the number:\n");
	int n;
	scanf("%d", &n);

	if(n % 2 == 0 and n >= 0)
		printf("number is even\n");
	else if(n > 0)
		printf("number is odd\n");
	else printf("enter whole number\n");

	return 0;
}