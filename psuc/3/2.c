#include<stdio.h>

int main()
{
	int num1, num2;

	printf("enter the limits:\n");
	scanf("%d %d", &num1, &num2);

	int num = num1;

	while(num<num2)
	{
		int flag = 0;
		int i = 2;
		while(i<num)
		{
			if(num%i == 0)
				flag = 1;
			i++;
		}
		if(flag == 0 && num > 2)
			printf("%d ", num);
		num++;
	}
	printf("\n");

	return 0;
}