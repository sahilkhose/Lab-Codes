#include<stdio.h>

int main()
{
	int size;
	printf("enter the size of the array:\n");
	scanf("%d", &size);
	int arr[size];

	printf("enter the array elements:\n");
	for(int i=0; i<size; i++)
		scanf("%d", &arr[i]);	

	printf("the order of sorting assending(a) or descending(d)\n");
	char sort;
	scanf(" %c", &sort);

	switch(sort)
	{
		case 'a':
				for(int i=0; i<size-1; i++)
				{
					for(int j=i+1; j<size; j++)
					{
						if(arr[i] > arr[j])
						{
							int temp = arr[j];
							arr[j] = arr[i];
							arr[i] = temp;
						}
					}
				}
				break;

		case 'd':
				for(int i=0; i<size-1; i++)
				{
					for(int j=i+1; j<size; j++)
					{
						if(arr[i] < arr[j])
						{
							int temp = arr[j];
							arr[j] = arr[i];
							arr[i] = temp;
						}
					}
				}
	}

	for(int i=0; i<size; i++)	
		printf("%d ", arr[i]);
	
	printf("\n");

	return 0;
}