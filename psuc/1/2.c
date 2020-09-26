#include<stdio.h>

int main()
{
	int days_in, months=0, years=0, days_out=0;
	printf("enter the number of days:\n");
	scanf("%d", &days_in);

	// while(days_in > 364)
	// {
	// 	years++;
	// 	days_in -= 365;
	// }

	// while(days_in > 29)
	// {
	// 	months++;
	// 	days_in -= 30;
	// }

	// days_out = days_in;

	// printf("years: %d months: %d days: %d\n",years, months, days_out );


	years = days_in/365;
	days_in -= years * 365;
	months = days_in/30;
	days_in -= months * 30;
	days_out = days_in;

	printf("years: %d months: %d days: %d\n",years, months, days_out );

	return 0;
}