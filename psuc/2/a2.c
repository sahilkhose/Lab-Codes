#include<stdio.h>

int main()
{
	float u, t, a, b;
	float term1, term2;

	printf("enter u, t, a, b: \n");
	scanf("%f %f %f %f", &u, &t, &a, &b);

	term1 = u * t + (1.0/2.0) * a * t * t;
	term2 = a * a + 2 * a * b + b * b;

	printf("term1: %f term2: %f\n", term1, term2);

	return 0;
}