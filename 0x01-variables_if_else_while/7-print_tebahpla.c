#include <stdio.h>
/**
 * main - The entry point for the program
 * Description:
 * this function is the entry point of this program
 * Return: 0 if exited properly
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
