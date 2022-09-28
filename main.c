#include <stdio.h>

int	plus(int a, int b)
{
	printf("1\n");
	return (a + b);
}

int	minus(int a, int b)
{
	return (a - 2 * b);
}

int	main(void)
{
	int	a = 3;
	int	b = 1;

	printf("plus : %d\n", plus(a, b));
	printf("minus : %d\n", minus(a, b));
}
