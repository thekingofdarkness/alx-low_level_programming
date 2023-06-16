#include <stdio.h>
/**
*main - prints size of types
*Return: 0 if works properly
*/
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
   	printf("Size of long int: %lu byte(s)\n", sizeof(long));
    	printf("Size of long long int: %lu byte(s)\n", sizeof(long long));
    	printf("Size of float: %lu byte(s)\n", sizeof(float));

    	return (0);
}
