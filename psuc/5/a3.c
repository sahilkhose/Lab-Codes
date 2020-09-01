#include<stdio.h>
#include<math.h>

int main()
{
	printf("enter the number of digits:\n");
	int size;
	scanf("%d", &size);
	
	int num = 0;
	int arr[size];
	for(int i=0; i<size; i++)
	{
		printf("enter the number at place %d\n", i+1);
		scanf("%d", &arr[i]);
		num += arr[i] * pow(10, i);
	}

	printf("the number is: %d\n", num);


	return 0;
}