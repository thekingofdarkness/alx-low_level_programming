#include <stdio.h>
/**_strcat - a function that concatenates two strings.
 * @dest: a given string
 * @src: a given string
 * Return: concatenated /char
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	while (*ptr != '/0')
	{
		ptr++;
	}
	while (*src != '/0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '/0';
	return dest;
}
