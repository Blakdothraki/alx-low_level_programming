#include "main.h"
/**
 * swap_int - function with two args to be swap
 * @a: first args
 * @b: second args
 *
 * Description: a function that swaps the value of its args.
 * Return: not set.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
