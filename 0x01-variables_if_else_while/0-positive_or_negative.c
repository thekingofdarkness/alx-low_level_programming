#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Is the start point of the program
 * Description :
 * this function is used as an entry point to the program
 * Return: 0 if exited properly
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
