#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - a function inside the function
 * @n: the second param of the second function
 *
 * Description: a function that returns the natural square root of a n
 * Return: the square root, if no square root, returns -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function that calls itself
 * @n: integer to be square rooted
 * @i: the second param of the second function
 *
 * Description: a function that returns the natural square root of a num
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
