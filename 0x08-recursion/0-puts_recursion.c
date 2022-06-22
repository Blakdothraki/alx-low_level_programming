/**
 * _puts_recursion - a function that recursively calls itself until a condition
 * is met
 * @s: the string to be printed
 *
 * Description: this function uses putchar to print a string followed by a new
 * line
 * Return: Not set
 */

#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
