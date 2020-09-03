#include<stdio.h>

int main()
{
	printf("enter the string:\n");
	char str[50];
	fgets(str, 50, stdin); 

	int diff = int('a') - int('A');

	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff;
	}

	printf("%s\n", str);
	

	return 0;
}