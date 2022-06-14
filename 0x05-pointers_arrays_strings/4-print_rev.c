#include "main.h"
/**
 * print_rev - reverses the string
 * @s: string as param
 *
 * Description: a function that reverses the string and prints to stdout
 * Return: not set,
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

