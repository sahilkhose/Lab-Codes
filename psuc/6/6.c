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

	printf("enter the number that you want to find:\n");
	int num, count=0;
	scanf("%d", &num);

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(a[i][j] == num)
				count+=1;

	printf("the number of occurrences are: %d\n", count);

	return 0;
}