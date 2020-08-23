#include<stdio.h>
#include<math.h>

int main()
{
	float b=0, a=0, c=0;
	float root1, root2, img;
	printf("enter a, b, c from your quadratic equation:\n");
	scanf("%f%f%f", &a, &b, &c);

	float disc = pow(b, 2) - 4 * a * c;

	switch(disc > 0)
	{
		case 1:
			// discriminant positive
			root1 = (-b + sqrt(disc) ) / (2 * a);
			root2 = (-b - sqrt(disc) ) / (2 * a); 	
			printf("the roots are: %f and %f\n", root1, root2);
			break;
		case 0:
			switch(disc < 0)
			{
				case 1:
					// discriminant negative
					root1 = root2 = -b / (2 * a);
					img = sqrt(-disc) / (2 * a);
					printf("the imaginary roots are: %f + %f i and %f - %f i\n", root1, img, root2, img);
					break;

				case 0:
					// discriminant zero
					root1 = root2 = -b / (2 * a);
					printf("the repeated roots are: %f and %f \n", root1, root2);
					break;
			}
 
	}

	return 0;
}