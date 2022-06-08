/**
 * File: 1-alphabet.c created by blakdothraki
 * Auth: Blakdothraki
 */

#include "main.h"

/**
 * print_alphabet - prints alphabets a-z in small letters
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
