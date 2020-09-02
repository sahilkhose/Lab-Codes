#include<stdio.h>
#include<math.h>

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


	int trace=0;
	float norm=0;

	for(int i=0; i<n; i++)
		trace += a[i][i];

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			norm += pow(a[i][j], 2);

	norm = sqrt(norm);

	printf("the trace is: %d and the norm is: %f\n", trace, norm);

	return 0;
}