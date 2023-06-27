#include <stdio.h>
/**
 * _strlen - retruns the length of s
 * @s: the variable we want to check its length
 * Return: 0 if exited properly
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
