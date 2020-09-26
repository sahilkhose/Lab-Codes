#include<stdio.h>

int main()
{
	printf("enter the dimensions of the first matrix: \n");
	int n, m;
	scanf("%d%d", &n, &m);

	printf("enter the array elements:\n");
	int a[n][m];

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d", &a[i][j]);

	printf("the matrix is:\n");

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("enter the dimensions of the second matrix: \n");
	int p, q;
	scanf("%d%d", &p, &q);

	printf("enter the array elements:\n");
	int b[p][q];

	for(int i=0; i<p; i++)
		for(int j=0; j<q; j++)
			scanf("%d", &b[i][j]);

	printf("the matrix is:\n");

	for(int i=0; i<p; i++)
	{
		for(int j=0; j<q; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}


	if(m != p)
	{
		printf("matrix multiplication is not possible!\n");
		return 0;
	}

	// (n, m)  (p, q) : m == p
	int c[n][q]={0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<q; j++)
		{
			int sum = 0;
			for(int k=0; k<m; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}

	printf("the final matrix is:\n");
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<q; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
	return 0;
}