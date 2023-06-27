#include <stdio.h>

/**
 * print_every_other_char - Prints every other character of a string
 * @str: The input string
 * Return: nothing
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
