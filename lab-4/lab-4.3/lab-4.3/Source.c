#include <stdio.h>
#include <math.h>

int main() {

	int j, i, s, p=0;
	for (i = 2; i <= 7; i++) {
		for (s = 1, j = i - 1; j <= i - 1; j++) s *= j;
	
			p += i / j;
		}
	

	printf("\nSuma = %d\n ", s);

	return 0;
}