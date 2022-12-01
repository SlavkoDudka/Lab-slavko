#include <stdio.h>
#include <math.h>
#define M_E 2.71828182845904523536


int main() {

	int x, y;
	float a;
	printf("Enter x and y");
	printf("\nx = ");
	scanf_s("%d", &x);
	printf("\ny = ");
	scanf_s("%d", &y);

	while ((x - 2 * y) <= 0)
	{
		printf("\nFor the given numbers x and y, it is not possible to solve the function, because the number under the root will be a negative number\n");
		printf("Enter other values:");
		printf("\nx = ");
		scanf_s("%d", &x);
		printf("\ny = ");
		scanf_s("%d", &y);
	}

	a = (1 + y) * (x + y / (pow(x, 2) + 4)) / (pow(M_E, -x - 2) + 1 / (pow(x, 2) + 4));
	printf("\nCalculation result: %2.f\n", a);

	return 0;
}