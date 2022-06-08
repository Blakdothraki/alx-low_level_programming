#include "main.h"
/**
 * print_sign - A function that prints sign of a number
 * @n: the parameter which should be a number.
 *
 * Description: the if statements gives the condition to print
 * the sign based on wheter it is below 0 or above it
 * Return: returns 1 or 0 or -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
