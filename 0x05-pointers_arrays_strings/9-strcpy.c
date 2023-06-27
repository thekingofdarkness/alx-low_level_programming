#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; // Append the terminating null byte

    return dest_start;
}

