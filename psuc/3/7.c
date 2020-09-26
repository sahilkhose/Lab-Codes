#include<stdio.h>

// program for identifying only positive composite numbers

int prime_fun(int n)
{
	int flag = 0;
	for(int i = 2; i<n/2; i++)
	{
		if(n%i == 0)
			flag = 1;
	}
	if(flag == 0 && n>1)
		return 1;
	else
		return 0;
}


int main()
{
	int prime=0, composite=0;

	int inp;
	printf("enter the number(-1 to quit): \n");
	scanf("%d", &inp);

	while(inp!=-1)
	{
		if(prime_fun(inp) == 1)
			prime++;
		else if(inp!=1)
			composite++;

		printf("enter the number(-1 to quit): \n");
	 	scanf("%d", &inp);

	}

	printf("prime: %d composite: %d\n", prime, composite);

	return 0;
}