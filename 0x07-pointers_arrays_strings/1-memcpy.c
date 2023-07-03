#include "main.h"
/**
 * *_memcpy -  copies memory area.
 * @n: number of bytes to be copied
 * @src: source of mem area
 * @dest: destination mem area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
