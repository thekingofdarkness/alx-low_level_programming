#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - is the start point of the program
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
sh: 1: q: not found
	else 
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
