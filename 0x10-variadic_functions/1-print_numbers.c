#include "variadic_function.h"
#include <stdio.h>
/**
 * print_numbers - variadic functions to be called
 * @separator: string to be passed between numbers
 * @n: is the number of integers passed to the function
 *
 * Description: a function that prints numbers followed by a new line
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			printf("%d", va_arg(ap, int));

			if (i != n && separator != NULL)
			{
				printf("%s", separator);
			}
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}


