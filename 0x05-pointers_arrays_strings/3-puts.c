#include "main.h"
/**
 * _puts - function of the void type that prints to stdout
 * @str: args of the function
 *
 * Description: a function that prints to stdout followed by a new line
 * Return: not set, void type
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
