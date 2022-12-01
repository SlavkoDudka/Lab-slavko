#include<stdio.h>
#include<math.h>

int main()
{
	double x, y, f;

	printf_s("Enter x: ");
	scanf_s("%lf", &x);

	printf_s("Enter y: ");
	scanf_s("%lf", &y);

	f = (pow(x, 2) + pow(y, 2)) / (sqrt(x + y));

	if (sqrt(x + y) > 0) {
		printf_s("f=(%.2lf^2 + %.2lf^2)/sqrt(%.2lf+%2lf)\n", x, y, x, y);
		printf_s("f:%.2lf\n", f);
	}
	else {
		printf_s("impossible to count\n");
	}
	return 0;
}