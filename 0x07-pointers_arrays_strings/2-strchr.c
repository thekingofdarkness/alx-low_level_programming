#include "main.h"
#include <stdio.h>

/**
 * *_strchr -  locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: pointer to c if found else return null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
		s++;
	}
	return (NULL);
}
