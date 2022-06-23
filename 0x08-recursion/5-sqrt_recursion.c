/**
 * _sqrt_recursion - function that calls itself
 * @n: integer to be square rooted
 * _sqrt - a function inside the function
 * @i: the second param of the second function
 *
 * Description: a function that returns the natural square root of a number
 * Return: the square root, if no square root, returns -1
 */
#include "main.h"

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	
	return (_sqrt(n, i + 1));
}
