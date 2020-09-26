#include<stdio.h>
#include<string.h>

int main()
{
	printf("enter the number of names:\n");
	int n;
	scanf("%d", &n);

	char names[n][50];
	char sort[n][50];

	for(int i=0; i<n; i++)
	{
		scanf("%s", names[i]);
		strcpy(sort[i], names[i]); 
	}

	for (int i = 0; i < n - 1 ; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0) 
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }


	for(int i=0; i<n; i++)
		printf("%s\n", sort[i]);



	return 0;
}