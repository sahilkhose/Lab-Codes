#include<stdio.h>
#include<math.h>

int main()
{
	float p, n, r, si=0, ci=0;

	printf("enter p, n, r: \n");
	scanf("%f %f %f", &p, &n, &r);

	si = (p * n * r) / 100;
	ci = p * pow((1 + r/100), n) - p;

	printf("simple interest: %f compound interest: %f\n", si, ci);

	return 0;
}