#include<stdio.h>

int prime(int n)
{
	for(int i=2; i<n/2; i++)
	{
		if(n%i == 0 && n>1)
			return 0; // not prime
	}

	if(n>1)	return 1; // prime
	else return 0; 
}


int main()
{
	printf("enter the size of the array:\n");
	int n=0;
	scanf("%d", &n);
	int arr[n];

	printf("enter the array numbers:\n");
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	for(int i=0; i<n; i++)
		if(prime(arr[i]))printf("%d ", arr[i]);

	printf("\n");

	return 0;
}