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

	printf("enter the element to delete\n");
	int ele;
	scanf("%d", &ele);

	int flag = 1;

	while(flag)
	{
		for(int i=0; i<size; i++)
		{
			if(arr[i] == ele)
				for(int j=i; j<size-1; j++)
				{
					arr[j] = arr[j+1];
				}
		}
		size-=1;

		for(int i=0; i<size; i++)
		{
			if(arr[i] == ele)
				flag = 0;
		}

		if(flag == 0)
			flag = 1;
		else 
			flag = 0;
	}


	printf("the updated array is:\n");
	for(int i=0; i<size; i++)	
		printf("%d ", arr[i]);


	return 0;
}
