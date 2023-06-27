#include <stdio.h>

/**
 * print_every_other_char - Prints every other character of a string
 * @str: The input string
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
