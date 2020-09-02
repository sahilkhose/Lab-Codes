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

	printf("the matrix is:\n");

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}


	int rowsum=0, colsum=0;
	printf("the rowsum is:\n"); 
	for(int i=0; i<n; i++)
	{
		rowsum = 0;
		for(int j=0; j<m; j++)
			rowsum += a[i][j];
		printf("%d ", rowsum);
	}
	printf("\n");

	printf("the colsum is:\n"); 
	for(int i=0; i<m; i++)
	{
		colsum = 0;
		for(int j=0; j<n; j++)
			colsum += a[j][i];
		printf("%d ", colsum);
	}
	printf("\n");


	return 0;
}