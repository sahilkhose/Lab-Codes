#include<stdio.h>
#include<math.h>

int main()
{
	int num, temp;
	printf("enter the number:\n");
	scanf("%d", &num);

	temp = num;

	int check=0;

	while(num!=0)
	{
		check += ((num%10) * (num%10) * (num%10));
		num/=10;
	}

	if(check == temp)
		printf("number is armstrong!\n");
	else
		printf("it is not!\n");

	return 0;
}