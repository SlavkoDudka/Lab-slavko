#include <stdio.h>
#include <math.h>

int main() {


    int sum = 0, low = 20, high = 30, quad;
    printf("Odd numbers in the range [20;30]:");
    while (low <= high) {

        if (low % 2 != 0)
        {
            printf("%d,", low);
            sum += pow(low, 2);
        }
        low++;
    }

    printf("\n");
    printf("\n\tSuma quad=%d\n", sum);

    return 0;
}