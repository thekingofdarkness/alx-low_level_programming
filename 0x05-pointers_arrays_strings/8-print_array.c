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

	if (a == NULL)
        	return;


	i = 0;
	while (i <= n - 1)
	{
		printf(" %d", a[i]);
		if (i != n-1)
			printf(",");
		i++;
	}
}
