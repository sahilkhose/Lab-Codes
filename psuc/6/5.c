#include<stdio.h>

int main()
{
	printf("enter the dimensions of the array: \n");
	int n, m;
	scanf("%d%d", &n, &m);

	printf("enter the array elements:\n");
	int a[n][m];

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d", &a[i][j]);
	//copy of this:
	int b[n][m];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			b[i][j] = a[i][j];

	printf("the matrix is:\n");

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("enter the 2 row indexes that you want to swap\n");
	int r1, r2;
	scanf("%d%d", &r1, &r2);

	printf("the swapped rows matrix is:\n");
	for(int j=0; j<m; j++)
	{
		int temp = a[r1][j];
		a[r1][j] = a[r2][j];
		a[r2][j] = temp;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("enter the 2 col indexes that you want to swap\n");
	int c1, c2;
	scanf("%d%d", &c1, &c2);

	printf("the swapped col matrix is:\n");
	for(int i=0; i<n; i++)
	{
		int temp = b[i][c1];
		b[i][c1] = b[i][c2];
		b[i][c2] = temp;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	return 0;
}