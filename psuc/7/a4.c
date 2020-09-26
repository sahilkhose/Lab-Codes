#include<stdio.h>

int main()
{
	printf("enter the string:\n");
	char str[50];
	fgets(str, 50, stdin); 

	int small_char=0, capital_char=0, num=0;
	int count=0;

	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			small_char++;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			capital_char++;
		else if(str[i] >= '0' && str[i] <= '9')
		{
			num++;
			count += int(str[i] - '0');
		}
	}

	printf("small char: %d capital char: %d numbers: %d count: %d\n", small_char, capital_char, num, count);
	

	return 0;
}