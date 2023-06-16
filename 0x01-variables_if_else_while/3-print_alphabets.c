#include <stdio.h>
/**
 * main - the entry point
 * Description:
 * this the entry point to app
 * Return: 0 if exited properly
 */
int main (void)
{
	char lowerc;
	char upperc;

	for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
	{
		putchar(lowerc);
	}
	for (upperc = 'A'; upperc <= 'Z'; upperc++)
	{
		putchar(upperc);
	}
	putchar('\n');
	return (0);
}
