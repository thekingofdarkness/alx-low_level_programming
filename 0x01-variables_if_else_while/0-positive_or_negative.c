#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* 
 * main - is the start point of the program
 * Return: 0 if exited properly
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%d is positive \n", n);
	}else if (n < 0) {
		printf("%d is negative \n",n);
	}else {
		printf("%d is zero\n",n)
	}
	return (0);
}
