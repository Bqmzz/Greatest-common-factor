#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int x, y, i, j;
	i = 2;
	j = 1;
	printf("Enter first number : ");
	scanf_s("%d", &x);
	printf("Enter second number : ");
	scanf_s("%d", &y);

	while ((i < x) && (i < y)) {
		if ((x % i == 0) && (y % i == 0)) {
			x = x / i;
			y = y / i;
			j = j * i;
		}
		else i++;
	}
	printf("Greatest common divisor = %d\n", j);
	return 0;
}
