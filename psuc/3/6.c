#include<stdio.h>
#include<math.h>


int fact(int i)
{
	if(i == 0)
		return 1;
	else
		return i*fact(i-1);
}

int main()
{
	int n = 10;
	long double deg;
	printf("limit to expand the Taylor series (n):\n");
	scanf("%d", &n);
	printf("enter value of x in degrees: \n");
	scanf("%Lf", &deg);

	int num = 0;
	long double sin = 0;

	long double rad = deg * 3.14/180; // converting to radians

	for(int i = 1; num<n; i+=2)
	{
		sin += pow(-1, num) * (pow(rad, i) / fact(i));
		num+=1;
	}

	printf("sin(%d degrees) = %0.4Lf\n", (int)deg, sin);

	return 0;
}