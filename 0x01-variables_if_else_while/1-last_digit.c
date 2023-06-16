#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - ENtry point to the program
 * Description:
 * This serves as an entry point to this program
 * Return: 0 if exited properly
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;
	if (lastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	}
	else if (lastD < 6 && lastD != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastD);
	}
	return (0);
}
