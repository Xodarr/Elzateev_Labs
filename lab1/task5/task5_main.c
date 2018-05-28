#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fun(double x);

int main() {
	double x, f;
	printf("x = ");
	scanf("%f", &x);
	f = fun(x);
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%f", &x);
	f = fun(x);
	printf("f(x) = %f \n", f);

	_getch();
	return 0;
}