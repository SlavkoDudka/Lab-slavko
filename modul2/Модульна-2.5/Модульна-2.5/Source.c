#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int setn() {
	int n;
	printf("Enter the number of rows of the array: ");
	printf("\nn = ");
	scanf_s("%d", &n);
	return n;
}
void set_arr(int n, float* a) {
	printf("\nEnter real numbers for the array:\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%f", &a[i]);
	}
	printf("\nThe given array:\n");
	printf("a = {");
	for (int i = 0; i < n; i++)
	{
		printf(" %.2f, ", a[i]);
	}
	printf("}");
}
void act(int n, float* a) {
	double s = 0;
	for (int i = 0; i < n; i++) {
		s += abs(a[i]);
	}
	printf("\nThe sum of the subsumed values of the array: %.2f\n", s);
}
int main() {
	int n = setn();
	float a['n'];
	float* pa = a;
	pa = (float*)malloc(n * sizeof(float));
	set_arr(n, pa);
	act(n, pa);
	free(pa);
	return 0;
}