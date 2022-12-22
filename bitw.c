#include <stdio.h>

int main(void)
{
	int var = 3;
	int a = 4, b = 5;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("After XOR, a = %d and b = %d\n", a, b);

	printf("%d\n", var << 1);
	printf("%d\n", var >> 2);
	return (0);
}
