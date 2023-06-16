#include <stdio.h>
/**
 * main - This is the entry point
 * Description:
 * it is the axe of thhis thing
 * Retrun: 0 is exited prperly
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		if (chars == 'e' || chars == 'q')
		{
			continue;
		}
		putchar(chars);
	}
	return (0);
}
