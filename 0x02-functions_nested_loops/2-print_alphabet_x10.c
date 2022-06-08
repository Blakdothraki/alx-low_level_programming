#include "main.h"
/**
 * print_alphabet_x10 - a function that prints alphabet x10
 *
 * Description: it counts the whole alpha ten times
 * and does so with a new line each time
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		count++;
	}
}
