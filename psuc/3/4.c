#include<stdio.h>

int main()
{
	int n, k;
	printf("enter n and k: \n");
	scanf("%d %d", &n, &k);

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < k; j++)
		{
			printf("%d x %d = %d\t", (i+1), (j+1), (i+1)*(j+1));
		}
		printf("\n");
	}

	return 0;
}