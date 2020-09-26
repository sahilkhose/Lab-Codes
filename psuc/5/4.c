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

	printf("enter the element to insert and position(0 index)\n");
	int ele, pos;
	scanf("%d%d", &ele, &pos);

	for(int i=size; i>=0; i--)
	{
		if(i > pos)
			arr[i + 1] = arr[i];
		else if(i == pos)
		{
			arr[i + 1] = arr[i];
			arr[i] = ele;
		}
	}
	size+=1;


	printf("the updated array is:\n");
	for(int i=0; i<size; i++)	
		printf("%d\n", arr[i]);


	return 0;
}