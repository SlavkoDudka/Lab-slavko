#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, S;

	printf_s("Enter the length of the hypotenuse a: ");
	scanf_s("%lf", &a);

	printf_s("Enter the length of the first leg b: ");
	scanf_s("%lf", &b);

	c = sqrt(pow(a, 2) - pow(b, 2));

	S = (b * c) / 2;
	
	if (a>b && a>c && c>0 && b>0) {
		printf_s("Leg c = sqrt(%.0lf^2 - %.0lf^2)\n", a, b);
		printf_s("c = % .2lf\n", c);

		printf_s("Triangle's square = (%.1lf * %.1lf)/2\n", b, c);
		printf_s("Square = %.2lf\n", S);
	}
	else 
	{
		printf_s("Inpossible to build a triangle");
	}
	return 0;
}