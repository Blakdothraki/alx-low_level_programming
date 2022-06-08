#include "main.h"
/**
 *Header file created by blakdothraki
 * A function that prints sign of a number
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
		return(0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
