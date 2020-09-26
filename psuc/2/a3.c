#include<stdio.h>

int main()
{
	int twenty, ten, five, paisa;
	float money=0;

	printf("enter denominations of 20, 10, 5, 50 paisa: \n"); 
	scanf("%d %d %d %d", &twenty, &ten, &five, &paisa);

	money = 20 * twenty + 10 * ten + 5 * five + 0.5 * paisa;

	printf("total money is : %f rupees\n", money);

	return 0;
}