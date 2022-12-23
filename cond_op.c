#include <stdio.h>

int main(void)
{
	int var = 75;
	int var2 = 56;
	int num, a = (3, 5, 7);
	int var3, num2;

	num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;
	printf("%d\n", num);
	printf("The final value of a is: %d\n", a);
	num2 = (var3 = 15, var3 + 35);
	printf("The value of num2 is %d\n", num2);
	return (0);
}
