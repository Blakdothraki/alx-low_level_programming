/**
 * factorial - a function that calls itself
 * @n: number to be used as the parameter
 *
 * Description: a function that returns the factorial of n
 * Return: the factorial
 */
#include "main.h"

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
