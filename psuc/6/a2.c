#include<stdio.h>
#include<math.h>


int main()
{	
	float magic_num;

	printf("enter the dimension of the square array: \n");
	int n;
	scanf("%d", &n);

	magic_num = ((pow(n, 2) + 1) * n)/2;
	magic_num = int(magic_num);

	printf("enter the array elements:\n");
	int a[n][n];

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &a[i][j]);


	int rowsum=0, colsum=0;
	int flag = 1;
	for(int i=0; i<n; i++)
	{
		rowsum = 0;
		for(int j=0; j<n; j++)
			rowsum += a[i][j];
		if(rowsum != magic_num)
			flag = 0;
	}

	for(int i=0; i<n; i++)
	{
		colsum = 0;
		for(int j=0; j<n; j++)
			colsum += a[j][i];
		if(colsum != magic_num)
			flag = 0;
	}

	int diag_sum=0;

	for(int i=0; i<n; i++)
		diag_sum += a[i][i];
	if(diag_sum != magic_num)
		flag = 0;

	diag_sum = 0;
	for(int i=0; i<n; i++)
		diag_sum += a[i][n-i-1];
	if(diag_sum != magic_num)
		flag = 0;

	if(flag)
		printf("it is a magic square!\n");
	else
		printf("it is not a magic square\n");


	return 0;
}