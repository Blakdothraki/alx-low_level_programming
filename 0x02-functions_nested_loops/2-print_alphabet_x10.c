#include "main.h"
/**
 * Header file created by blakdothraki
 * A function that prints alphabets in lower case
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
	return;
}
