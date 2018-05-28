#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main() {
	double x, f;
	printf("x = ");
	scanf("%f", &x);
	f = ((4 - x ^ 2) / 2);
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%f", &x);
	f = ((4 - x ^ 2) / 2);
	printf("f(x) = %f \n", f);

	_getch();
	return 0;
}