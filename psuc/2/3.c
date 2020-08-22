#include<stdio.h>

int main()
{
	float far, cent;
	printf("enter temp in farenheit: \n");
	scanf("%f", &far);

	cent = (5.0/9.0) * (far - 32);

	printf("centigrade: %f farenheit: %f\n", cent, far);

	return 0;
}