#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int setn() {
    int n;
    printf("Enter the number of rows of the array: ");
    printf("\nn = ");
    scanf_s("%d", &n);
    return n;
}

void rar(int n, int* a)
{

    system("cls");
    srand(time(NULL));

    printf("Sformurovanui massuv: \n");
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100 - 50;
        printf("%d ", a[i]);
    }
}
void minimal(int n, int* a) {
    int min = abs(a[0]), imin = 1;
    for (int i = 0; i < n; i++) {
        if (min > abs(a[i])) {
            min = abs(a[i]);
            imin = i + 1;
        }
    }
    printf("\nThe number of the minimum array element behind the module: %d (%d)\n", imin, min);
}
int main()

{

    const int SIZE = 100;
    int array[SIZE];
    int count = 0;
    for (int k = 0; k < SIZE; ++k)
    {
        array[k] = rand() - rand();
        if (array[k] > 0)
            ++count;
    }
    for (int k = 0; k < SIZE; ++k)
    {
        count << array[k] << "  ";
    }

    printf("количество положительных элементов массива:" ,count);

    return 0;
}