#include<stdio.h>
#include<math.h>

int main()
{
	int num, rev_num=0;

	printf("enter the number:\n");
	scanf("%d", &num);

	int len=0, temp;
	temp = num;

	while(temp!=0)
	{
		temp/=10;
		len++;
	}
	temp = num;
	while(num!=0)
	{
		rev_num += (num % 10) * pow(10, len-1);
		len--;
		num /= 10;
	}

	printf("num: %d rev_num: %d\n", num, rev_num);

	if(temp - rev_num == 0)
	{
		printf("number is palindrome\n");
	}
	else
		printf("number is not palindrome\n");

	return 0;
}