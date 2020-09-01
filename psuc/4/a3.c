// Perfect number
#include<stdio.h>

int div_sum(int n)
{
	int sum = 0;
	for(int i=1; i<n; i++)
	{
		if(n % i == 0)
			sum += i; 
	}

	return sum;
}


int main()
{
	int num;
	printf("enter the number: \n");
	scanf("%d", &num);
	if(num == div_sum(num))
		printf("it is a perfect number!\n");
	else
		printf("it is not a perfect number\n"); 

	return 0;
}