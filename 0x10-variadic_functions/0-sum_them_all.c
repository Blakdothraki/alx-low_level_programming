#include <stdio.h>
#include "variadic_function.h"
/**
 * sum_them_all - function called
 * @n: number of integers passed
 *
 * Description: a function that returns the sum of all its param
 * Returns: an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0, i = 0;

	if (n != 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
	else
		return (0);
	return (0);
}


