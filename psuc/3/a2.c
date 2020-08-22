#include<stdio.h>


int add(int n)
{
	int temp=0;
	while(n!=0)
	{
		temp+=n%10;
		n/=10;
	}

	return temp;
}

int main()
{
	int num;
	printf("enter number:\n");
	scanf("%d", &num);

	int root=num;

	while(root/10 != 0)
	{
		root = add(root);
		printf("%d\n", root);
	}

	printf("generic root of %d is %d\n", num, root);


	return 0;
}