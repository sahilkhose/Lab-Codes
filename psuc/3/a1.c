#include<stdio.h>

int fact(int n)
{
	if(n == 0)
		return 1;
	else 
		return n*fact(n-1);
}


int main()
{
	int num;
	printf("enter number:\n");
	scanf("%d", &num);

	int st_num=fact(num%10); // for handeling num = 0
	num/=10;

	int temp=num;

	while(num!=0)
	{
		st_num += fact(num%10);
		num/=10;
	}

	if(temp == st_num)
		printf("it is a strong number!!\n");
	else
		printf("it is not a strong number!\n");

	return 0;
}