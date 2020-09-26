#include<stdio.h>

int main()
{
	int n;
	printf("enter the number n:\n");
	scanf("%d", &n);

	int count = 1;

	printf("Floyd's Triangle:\n");

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < i+1; j++)
		{
			printf("%d ", count);
			count++;
		}
		printf("\n");
	}

	return 0;
}