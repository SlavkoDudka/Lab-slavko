#include <stdio.h>
#include <math.h>

int main() {

	int x, y, z;
	double t;
	printf("Set values of integer variables for calculations:");
	printf("\nx = ");
	scanf_s("%d", &x);
	printf("\ny = ");
	scanf_s("%d", &y);
	printf("\nz = ");
	scanf_s("%d", &z);

	
	if ((3 * (x / z - 2 * y)) < 0)
		printf("\nIt is not possible to solve the root of a negative number");
	else if (z - 2 * y == 0)
			printf("\nIt is impossible to solve, division by zero");
	
	else {
		t = sqrt(3 * ((double)x / (double)z - 2 * (double)y)) - (double)y * (double)z + pow(sin(x), 2);
		
		printf("\nResult:%.2f", t);
	}

	return 0;
}
