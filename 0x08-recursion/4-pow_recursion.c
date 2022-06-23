/**
 * _pow_recursion - a function that calls itself
 * @x: int to be raised
 * @y: the power to be raised to
 *
 * Description: a function that returns the value of x to the power of y
 * Return: an int.
 */
#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
