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

	int flag = 1;

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(j>i && a[i][j] != 0)
				flag=0;
	
	if(flag)
		printf("the matrix is lower triangular\n");
	else
		printf("the matrix is not lower triangular\n");

	return 0;
}