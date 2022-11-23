#include <math.h>
#include <stdio.h>

/*int main() { //1
	float a, b;
	float dobutok;
	float dilennya;
	float suma;


	printf("Enter a and b:\n");
	scanf_s("%f, %f", &a, &b);

	suma = pow(a + b, 3);
	dilennya = b / a;
	dobutok = a * b;

	printf("Result suma:%.2f\n", suma);
	printf("Result dobutok:%.2f\n", dobutok);
	printf("Result dilennya:%.2f\n", dilennya);
	return 0;
}*/
 

/*int main() { //2

	const int a = 1, b = 15, c = 7;
	float y;

	printf("Given y = (2 * a + 1 + c) / b - (3 * b + c) / c:\n");
    printf("Constant values are given a=1, b=15, c=7 :\n");
	
	y = (2 * a + 1 + c) / b - (3 * b + c) / c;
	printf("Result y=%.2f\n", y);
	return 0;
}*/


int main() { //3

	int a, y, x;
	printf("Enter a, y:\n");
	scanf_s("%d, %d", &a, &y);

	x = a * sqrt(pow(y, 2) - 2 * a);
	printf("Result:x=%d\n", x);
	return 0;
	}
