#include "main.h"
/**
 * print_to_98 - A function that print alnatural number from n
 * to 98
 * @n: the beginning number
 *
 * Description: its important to note that the number can actually
 * be higher ..
 * ..or lower than 98
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			n++;
			_putchar('n');
		}
		_putchar('n');
		_putchar('\n');
	}
	else
	{
		while (n < 98)
		{
			n--;
			_putchar('n');
		}
		_putchar('n');
		_putchar('\n');
	}
}
