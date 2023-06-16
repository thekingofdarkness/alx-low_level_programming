#include <stdio.h>
/**
 * main - The entry point for the program
 * Description:
 * this function is the entry point of this program
 * Return: 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
