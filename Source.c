#include <stdio.h>
#include <math.h>

int main() { //a


    int sum = 0, square;
    printf("Odd numbers in the range [20;30]:");
    for (int i = 20; i <= 30; i++)
    {
        if (i % 2 == 0)
            continue;
        printf("%d,", i);

        sum += pow(i, 2);
    }
    printf("\n");
    printf("\n\tSuma square=%d\n", sum);

    return 0;
}