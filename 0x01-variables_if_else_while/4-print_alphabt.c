#include <stdio.h>
/**
 * main - This is the entry point
 * Description:
 * it is the axe of thhis thing
 * Return:
 * if 0 is then the program has been exited prperly
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
	putchar('\n');
	return (0);
}
