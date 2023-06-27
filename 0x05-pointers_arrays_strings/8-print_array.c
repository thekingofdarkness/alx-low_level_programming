#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 *               followed by a new line.
 * @a: The input array
 * @n: The number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;
	i = 0;
	while (i <= n)
	{
		printf("%d, ", a[i]);
	}
}
