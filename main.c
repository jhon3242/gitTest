#include <stdio.h>

int	plus(int a, int b)
{
	return (a + b);
}

int	minus(int a, int b)
{
	return (2 * a - b);
}

int	main(void)
{
	int	a = 3;
	int	b = 1;

	printf("plus : %d\n", plus(a, b));
	printf("minus : %d\n", minus(a, b));
}
