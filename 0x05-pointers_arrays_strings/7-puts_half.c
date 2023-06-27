#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the arg
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len;
	len = 0;
	while (str[len] != '\n')
	{
		len++;
	}
	int start;
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else if (len % 2)
	{
	start = (len - 1) / 2;
	}
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}
	putchar('\n');
}
