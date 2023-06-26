#include <stdio.h>
/**
 * swap_int - swapes two variable by adress
 * @a: the adress of the first var
 * @b: the adress of the second var
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int holder = *a;
	*a = b;
	*b = holder;
}
