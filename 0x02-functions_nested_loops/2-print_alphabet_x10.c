/**
 * File: 2-print_alphabet_x10.c created by blakdothraki
 * Auth: Blakdothraki
 */

#include "main.h"
/**
 * print_alphabet_x10: a function that prints alphabet x10
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
