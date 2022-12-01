#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main() {
	int x[6], y[6];
	printf("Set the coordinates of the points of the first triangle:\n");
	for (int i = 0; i < 3; i++) {
		int j = i + 1;
		printf("A%d:", j);
		printf("\nx%d = ", j);
		scanf_s("%d", &x[i]);
		printf("\ny%d = ", j);
		scanf_s("%d", &y[i]);
	}
	printf("Set the coordinates of the points of the second triangle:\n");
	for (int i = 3; i < 6; i++) {
		int j = i + 1;
		printf("A%d:", j);
		printf("\nx%d = ", j);
		scanf_s("%d", &x[i]);
		printf("\ny%d = ", j);
		scanf_s("%d", &y[i]);
	}
	system("cls");
	printf("\nThe coordinates of the points of the first triangle are given:\n");
	printf("\nA1 = %d, %d", x[0], y[0]);
	printf("\nB1 = %d, %d", x[1], y[1]);
	printf("\nC1 = %d, %d\n", x[2], y[2]);
	printf("\nThe coordinates of the points of the second triangle are given:\n");
	printf("\nA2 = %d, %d", x[3], y[3]);
	printf("\nB2 = %d, %d", x[4], y[4]);
	printf("\nC2 = %d, %d", x[5], y[5]);
	int AB1[2], AC1[2], AB2[2], AC2[2], c1, c2;
	float s1, s2;
	AB1[0] = x[1] - x[0];
	AB1[1] = y[1] - y[0];
	AC1[0] = x[2] - x[0];
	AC1[1] = y[2] - y[0];
	c1 = abs((AB1[0] * AC1[1]) - (AC1[0] * AB1[1]));
	s1 = (float)c1 / 2;
	AB2[0] = x[4] - x[3];
	AB2[1] = y[4] - y[3];
	AC2[0] = x[5] - x[3];
	AC2[1] = y[5] - y[3];
	c2 = abs((AB2[0] * AC2[1]) - (AC2[0] * AB2[1]));
	s2 = (float)c2 / 2;
	printf("\nArea of the first triangle: %.2f\n", s1);
	printf("\nArea of the second triangle: %.2f\n", s2);
	if (s1 > s2) printf("\nThe area of the first triangle is larger than the second.\n");
	else if (s2 > s1) printf("\nThe area of the second triangle is larger than the first.\n");
	else printf("\nThe areas of the triangles are equal.\n");
	return 0;
}