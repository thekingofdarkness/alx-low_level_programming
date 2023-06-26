#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if exited prperly
 */
void reset_to_98(int *n) 
{
	*n = 98;	
}
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
