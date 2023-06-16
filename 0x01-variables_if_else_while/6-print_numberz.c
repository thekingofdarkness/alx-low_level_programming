#include <stdio.h>
/**
 * main - Is the entry point for the program
 * Return: 0 if exited properly
 */
int main(void)
{
	int n;
	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
