#include<stdio.h>
#include<math.h>

int main() {

	int x, y;
	float f;

	printf("Enter x,y:\n");
	scanf_s("%d, %d", &x, &y);

	f = (pow(x, 2) + pow(y, 2)) / (sqrt(x + y));
	printf("Result:%.2f\n", f);
	return 0;
}