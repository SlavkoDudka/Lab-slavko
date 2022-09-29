#include <math.h>	
#include <stdio.h>

 /*int main() { //1
	
	 int a, b;
	 int dobutok, dilennya, suma;

	printf("Enter a and b:\n");
	scanf_s("%d, %d", &a, &b);

	suma = pow(a, 3) + pow(b, 3);
	dilennya = b / a;
	dobutok = a * b;

	printf("Result suma:%d\n", suma);
	printf("Result dobutok:%d\n", dobutok);
	printf("Result dilennya:%d\n", dilennya);
	return 0;
}
 */

/*int main() { //2

	int a, b, c, y;
	printf("Enter a, b, c:\n");
	scanf_s("%d, %d, %d", &a, &b, &c);

	y = (2 * a + 1 + c) / b - (3 * b + c) / c;
	printf("Result:y=%d\n", y);
	return 0;
}
*/

int main() { //3

	int a, y, x;
	printf("Enter a, y:\n");
	scanf_s("%d, %d", &a, &y);

	x = a * sqrt(pow(y, 2) - 2 * a);
	printf("Result:x=%d\n", x);
	return 0;
}
