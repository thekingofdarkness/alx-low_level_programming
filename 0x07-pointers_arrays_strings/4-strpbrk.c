#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string to seatrch
 * @accept: string to search for
 * Return: pointer to the matching byte or null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++) 
	{
		for (j = 0; *accept != '\0'; j++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
