#include <stdio.h>
/* header library for standard IO */

/**
 * main - goes there
 *  main - function is called
 *  Return: function  your code goes there
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z';  alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

