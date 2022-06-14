#include "main.h"
/**
 * puts_half(char *str) - code to print half of a string
 * @str: string to be printed
 *
 * Description: a function that prints half of a string
 * Return: not set
 */

void puts_half(char *str)
{
	int len = 0, index = 0, n;

	while (s[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}

