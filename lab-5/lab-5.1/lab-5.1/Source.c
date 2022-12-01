#include <stdio.h>
#include <limits.h>

int main(void) {
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    printf("\nn = ");
    scanf_s("%d", &n);

    float a['n'];
    printf("Enter real numbers for the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf_s("%f", &a[i]);
    }
    double max1, max2, max3;
    max1 = max2 = max3 = (double)LONG_MIN;
    for (i = 0; i < n; i++) {
        if (a[i] >= max1) {
            max3 = max2;
            max2 = max1;
            max1 = a[i];
        }
        else
            if (a[i] >= max2) {
                max3 = max2;
                max2 = a[i];
            }
            else
                if (a[i] >= max3)
                    max3 = a[i];
    }
    if (max1 != (double)LONG_MIN)
        printf("\nMax1=%.0lf ", max1);
    if (max2 != (double)LONG_MIN)
        printf("\nMax2=%.0lf ", max2);
    if (max3 != (double)LONG_MIN)
        printf("\nMax3=%.0lf", max3);
    sum = max1 + max2 + max3;
    printf("\nSuma=%d", sum);
    return 0;
}