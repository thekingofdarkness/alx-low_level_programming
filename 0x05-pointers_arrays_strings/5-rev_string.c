#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * Retrun: void
 */
void rev_string(char *s)
{
	int end = strlen(s) - 1;
	int start = 0;
	while (start < end)
	{
		s[start] = s[end];
		start++;
		end--;
	}
}
