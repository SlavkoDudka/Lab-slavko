#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main() {

	int n, m, x = 0, y = 0;
	printf("Enter the number of rows of the array: ");
	printf("\nn = ");
	scanf_s("%d", &n);
	printf("Enter the number of array columns: ");
	printf("\nm = ");
	scanf_s("%d", &m);

	int a['n']['m'];
	printf("\nEnter integers for the array:");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("\nA[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	system("cls");
	printf("The given array %dx%d\n", n, m);
	printf("A = ");
	for (int i = 0; i < n; i++) {
		printf("\t{");
		for (int j = 0; j < m; j++) {
			printf("\t%d,", a[i][j]);
		}
		printf("\t}\n");
	}

	float max, min;
	int imax = 0, jmax = 0, imin = 0, jmin = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (i == 0) {
				min = a[i][j];
				max = a[i][j];
			}
			if (a[i][j] > max) max = a[i][j];
			if (min > a[i][j]) min = a[i][j];
		}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (a[i][j] == max) y++; 
			if (a[i][j] == min) x++; 
			continue;

		}
	printf("\ncount_max%.2f", max);
	printf("\ncount_min%.2f", min);
	for (i = 0; i < 3; i++) {
		max = arr[0][j];
		for (j = 0; j < 4; j++)
			if (arr[i][j] > max)
				max = arr[i][j];
}
