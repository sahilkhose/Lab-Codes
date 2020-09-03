#include<stdio.h>

int main()
{
	printf("enter the string:\n");
	char str[50];
	fgets(str, 50, stdin); 

	int len=0;
	for(int i=0; str[i]!='\0'; i++)
		len++;
	len--;

	int flag=1;
	for(int i=0; i<len; i++)
	{
		if(str[i] != str[len-i-1])
			flag = 0;
	}
	
	if(flag)
		printf("palindrome!\n");
	else
		printf("not palindrome!\n");

	

	return 0;
}