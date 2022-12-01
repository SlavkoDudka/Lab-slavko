#include <stdio.h>
#include <math.h>
int main() {
	int a, c;
	float b, S, P, p;
	printf("Enter the length of the first leg a = ");
	scanf("%d", &a);
	printf("Enter the length of the hypotenuse b = ");
	scanf("%d", &b);
	if (a < c) {
		b = pow(c, 2) - pow(a, 2);
		b = sqrt(b);
		printf("The length of the second leg = %f\n", b);
	}
	else { printf("The leg cannot be longer than the hypotenuse"); }
	b = 0.5 * a * b;
	printf("Area of ​​the triangle = %f", S);
	scanf();

	P= a + b + c;

	p = P / 2;

	S = sqrt(p * (p - a) * (p - b) * (p - c));
}