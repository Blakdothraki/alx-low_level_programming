#include "variadic_function.h"
#include <stdio.h>
/**
 * print_strings - function
 * @separator: string to be printed btw the strings
 * @n: number of strings passed to the function
 *
 * Description: a function that prints string followed by a new line
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (separator != NULL)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			char *string;
			string = va_arg(ap, char *);

			(string == NULL) ? (printf("%s", "(nil)")) : (printf("%s", string));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}

