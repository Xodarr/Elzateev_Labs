#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern float x, f;

int main() {

	printf("x = ");
	scanf("%f", &x);
	fun();
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%f", &x);
	fun();
	printf("f(x) = %f \n", f);

	_getch();
	return 0;
}