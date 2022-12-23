#include <stdio.h>

int fun1(void)
{
	printf("%s", "Hello");
	return (1);
}
int fun2(void)
{
	printf("%s\n", "Dear");
	return (1);
}

int main(void)
{
	int a = fun1() + fun2();
	int b = 10, c = 20, d = 30, e = 40;

	if (b <= c == e > d)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	printf("%d\n", a);
	return (0);
}
