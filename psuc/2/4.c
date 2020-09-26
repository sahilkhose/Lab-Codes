#include<stdio.h>

int main()
{
	float a = 30, b = 10, c = 5, d = 15;

	float sum1 = (a + b) * c / d;
	float sum2 = ((a + b) * c) / d;
 	float sum3 = a + (b * c) / d;
	float sum4 = (a + b) * (c / d);

	printf("%f %f %f %f \n", sum1, sum2, sum3, sum4);

	return 0;
}