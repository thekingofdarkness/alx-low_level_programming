#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: argument
 * Retrun: void
 */
void rev_string(char *s)
{
	int end = strlen(s) - 1;
	int start = 0;
	char t;

	while (start < end)
	{
		t = s[start];
		s[start] = s[end];
		s[end] = t;
		start++;
		end--;
	}
}
