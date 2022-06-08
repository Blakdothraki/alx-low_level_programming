/**
 *Header file created by blakdothraki
 * A function that prints alphabets in lower case
 */

#include "main.h"
/**
 * Header file created by blakdothraki
 * A function that prints alphabets in lower case
 */
void print_alphabet(void)
/**
 * void print_alphabet(void)
 * prints alphabet
 */{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
