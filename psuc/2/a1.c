#include<stdio.h>

int main()
{
	int sec_in;
	int hr, min, sec;

	printf("enter the number of seconds:\n");
	scanf("%d", &sec_in);

	hr = sec_in/3600;
	sec_in -= hr * 3600;

	min = sec_in/60;
	sec_in -= min * 60;

	sec = sec_in;

	printf("hr: %d min: %d sec: %d\n", hr, min, sec);

	return 0;
}