#include<stdio.h>
#define PI 3.1415

int main()
{
	float r, vol, area;

	printf("enter the radius:\n");
	scanf("%f", &r);

	vol = (4 * PI * r * r * r) / 3;
	area = 4 * PI * r * r;

	printf("vol: %f area: %f\n", vol, area);

	return 0;
}