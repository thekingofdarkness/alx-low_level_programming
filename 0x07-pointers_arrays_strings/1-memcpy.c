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
	return memcpy(dest, src, n);
}
