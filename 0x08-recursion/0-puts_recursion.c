#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: given string
 * Return: String
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		return;
	else
		putchar(*s);
		_puts_recursion(s++);
}
