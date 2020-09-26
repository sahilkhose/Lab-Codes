#include<stdio.h>

int main()
{
	printf("enter the size of the array:\n");
	int n=0;
	scanf("%d", &n);
	int arr[n];

	printf("enter the array numbers:\n");
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	int smallest=arr[0], largest=arr[0];

	for(int i=0; i<n; i++)
	{
		if(arr[i]<smallest)
			smallest = arr[i];
		if(arr[i]>largest)
			largest=arr[i];
	}

	printf("smallest: %d  largest: %d\n", smallest, largest);

	return 0;
}