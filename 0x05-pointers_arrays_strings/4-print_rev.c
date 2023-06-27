#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string, in reverse
 * @s: the string 
 * Retrun: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
