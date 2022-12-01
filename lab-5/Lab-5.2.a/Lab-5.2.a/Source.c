#include <stdio.h>

int setn() {
    int n;
    printf("Enter the number of rows of the array: ");
    printf("\nn = ");
    scanf_s("%d", &n);
    return n;
}

void elementsSum(float array[], int size) {
    float min = array[0];
    float sum = 0;
    int flag = 0;

    for (int i = 0; i < size; i++) {
        if (min > array[i]) {
            min = array[i];
        }
        if (array[i] < 0) {
            flag += 1;
        }
        if (flag == 1 && array[i] >= 0) {
            sum += array[i];
        }
    }
    printf("min=%0.2f\n", min);
    if (flag > 1) {
        printf("sum=%0.2f\n", sum);
    }
    else {
        printf("There aren't enough negative elements!\n");
    }
}

int main() {
    int n = setn();

    if (n > 0) {
        float array['n'];

        printf("Enter elements:\n");
        for (int i = 0; i < n; i++) {
            scanf_s("%f", &array[i]);
        }

        elementsSum(array, n);
    }
    else {
        printf("Size must be > 0\n");
    }

    return 0;
}