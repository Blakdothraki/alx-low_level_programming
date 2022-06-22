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

void _puts_recursive(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursive(s +1);
	}
	else
	{
		_putchar('\n');
	}
}
