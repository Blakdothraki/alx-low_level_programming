#include "main.h"
/**
 * print_array(int *a, int *n)
 * @a: first args
 * @n: second args
 *
 * Description: a function that prints n elements of arrays followed by newline
 * Return: not set
 */

void print_array(int *a, int *n)
{
	int a[], i;

	for (i = 0; i <= n; i++)
	{
		_putchar(a[i]);
		_putchar(',');
	}

	_putchar('\n');
}
