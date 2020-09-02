#include<stdio.h>

int main()
{
	printf("enter the dimensions of the array: \n");
	int n, m;
	scanf("%d%d", &n, &m);

	if(n!=m)
	{
		printf("not a symmetric matrix!\n");
		return 0;
	}

	printf("enter the array elements:\n");
	int a[n][m];

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d", &a[i][j]);


	int flag = 1;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j] != a[j][i])
				flag = 0;
		}
	}

	if(flag)
		printf("it is a symmetric matrix!\n");
	else
		printf("it is not a symmetric matrix!\n");

	printf("the matrix is:\n");

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}