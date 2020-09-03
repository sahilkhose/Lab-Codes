#include<stdio.h>

int main()
{
	printf("enter the sentence:\n");	
	char str[50];
	fgets(str, 50, stdin); 

	int count=1;
	for(int i=0; str[i]!='\0'; i++)
	{
			if(str[i] == ' ')
			count++;
	}

	printf("the number of words are: %d\n", count);

	return 0;
}