/**
 * _print_rev_recursion - a function that recursively calls itself
 * @s: string to be printed
 *
 * Description: A function that prints a string in reverse
 * Return: Not set
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
