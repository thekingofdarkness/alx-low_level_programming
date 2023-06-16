#include <stdio.h>
/**
 * main - The entry point for the program
 * Description:
 * this function is the entry point of this program
 * Return: 0 if exited properly
 */
int main() 
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar("\n");
	return 0;
}
