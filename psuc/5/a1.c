#include<stdio.h>

int main()
{
	printf("enter the size of the array:\n");
	int size;
	scanf("%d", &size);
	

	printf("enter the array elements:\n");
	int arr[size];
	for(int i=0; i<size; i++)
		scanf("%d", &arr[i]);

	printf("enter the element to find\n");
	int ele;
	scanf("%d", &ele);

	for(int i=0; i<size; i++)
	{
		if(arr[i] == ele)
			printf("found the element at position %d\n", i+1);
	}

	return 0;
}
