#include <stdio.h>
/**
*main - prints size of types 
*Return: 0 if works properly
*/
int main(void) 
{
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long: %lu byte(s)\n", sizeof(long));
    printf("Size of long long: %lu byte(s)\n", sizeof(long long));
    printf("Size of short: %lu byte(s)\n", sizeof(short));
    printf("Size of unsigned int: %lu byte(s)\n", sizeof(unsigned int));
    printf("Size of unsigned char: %lu byte(s)\n", sizeof(unsigned char));

    return 0;
}
