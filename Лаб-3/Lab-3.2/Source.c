#include <stdio.h>
#include <math.h>
#include <locale.h>
#pragma warning(disable : 4996)
/*int main() { //A
	float x1, x2, x3, y1, y2, y3;
	printf("Enter:x1,y1\n");
	scanf_s("%f, %f,", &x1, &y1);
	printf("Enter:x2,y2\n");
	scanf_s("%f, %f,", &x2, &y2); 
	printf("Enter:x3,y3\n");
	scanf_s("%f, %f,", &x3, &y3);
	float a = sqrt(pow(x2- x1, 2) + pow(y2 - y1, 2));

	float b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	float c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));

	printf("Given a=%.2f,\nGiven b=%.2f, \nGiven c=%.2f\n", a, b, c);

	float S, P, p;

	P = a + b + c;

	p = P / 2;

	S = sqrt(p * (p - a) * (p - b) * (p - c));

	printf("S = %.2f\n", S);
	
	
	if (S == 0) {
		printf("\n The points lie on the same line");
	}
	else if (S > 0) { 
		printf("\n The points do not lie on the same line"); }
	else if (S < 0) {
		printf("\n The points do not lie on the same line"); }

	return 0;
}*/



int main() { //B
	setlocale(LC_CTYPE, "ukr");
	int n;
	printf("Enter your age: ");
	scanf_s("%d", &n);

	switch (n)
	{
	case 20: printf("\n 20 рокiв\n"); break;
	case 21: printf("\n 21 рiк\n"); break;
	case 22: printf("\n 22 роки\n"); break;
	case 23: printf("\n 23 роки\n"); break;
	case 24: printf("\n 24 роки\n"); break;
	case 25: printf("\n 25 рокiв\n"); break;
	case 26: printf("\n 26 рокiв\n"); break;
	case 27: printf("\n 27 рокiв\n"); break;
	case 28: printf("\n 28 рокiв\n"); break;
	case 29: printf("\n 29 рокiв\n"); break;
	case 30: printf("\n 30 рокiв\n"); break;
	case 31: printf("\n 31 рiк\n"); break;
	case 32: printf("\n 32 роки\n"); break;
	case 33: printf("\n 33 роки\n"); break;
	case 34: printf("\n 34 роки\n"); break;
	case 35: printf("\n 35 рокiв\n"); break;
	case 36: printf("\n 36 рокiв\n"); break;
	case 37: printf("\n 37 рокiв\n"); break;
	case 38: printf("\n 38 рокiв\n"); break;
	case 39: printf("\n 39 рокiв\n"); break;
	case 40: printf("\n 40 рокiв\n"); break;
	case 41: printf("\n 41 рiк\n"); break;
	case 42: printf("\n 42 роки\n"); break;
	case 43: printf("\n 43 роки\n"); break;
	case 44: printf("\n 44 роки\n"); break;
	case 45: printf("\n 45 рокiв\n"); break;
	case 46: printf("\n 46 рокiв\n"); break;
	case 47: printf("\n 47 рокiв\n"); break;
	case 48: printf("\n 48 рокiв\n"); break;
	case 49: printf("\n 49 рокiв\n"); break;
	case 50: printf("\n 50 рокiв\n"); break;
	case 51: printf("\n 51 рiк\n"); break;
	case 52: printf("\n 52 роки\n"); break;
	case 53: printf("\n 53 роки\n"); break;
	case 54: printf("\n 54 роки\n"); break;
	case 55: printf("\n 55 рокiв\n"); break;
	case 56: printf("\n 56 рокiв\n"); break;
	case 57: printf("\n 57 рокiв\n"); break;
	case 58: printf("\n 58 рокiв\n"); break;
	case 59: printf("\n 59 рокiв\n"); break;
	case 60: printf("\n 60 рокiв\n"); break;
	case 61: printf("\n 61 рiк\n"); break;
	case 62: printf("\n 62 роки\n"); break;
	case 63: printf("\n 63 роки\n"); break;
	case 64: printf("\n 64 роки\n"); break;
	case 65: printf("\n 65 рокiв\n"); break;
	case 66: printf("\n 66 рокiв\n"); break;
	case 67: printf("\n 67 рокiв\n"); break;
	case 68: printf("\n 68 рокiв\n"); break;
	case 69: printf("\n 69 рокiв\n"); break;
	default: printf("\n Year not registered\n");
		break;

	}
	return 0;
}