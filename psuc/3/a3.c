#include<stdio.h>


int main()
{
	int num;
	printf("enter number:\n");
	scanf("%d", &num);

	int add=0;

	for(int i=1; i<=num/2; i++)
	{
		if(num%i == 0)
		{
			printf("%d\n", i);
			add+=i;
		}
	}

	if(add == num && num>0)
		printf("number is a perfect number!!\n");
	else
		printf("it is not\n");

	return 0;
}