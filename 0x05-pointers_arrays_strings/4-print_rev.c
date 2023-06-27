#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 * @s: the string 
 * Retrun: void
 */
void print_rev(char *s)
{
	len = strlen(s);
	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
