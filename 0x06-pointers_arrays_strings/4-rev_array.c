#include "main.h"
/**
 * reverse_array - called to reverse an array
 * @a: first param
 * @n: second param
 *
 * Description: a function that reverses the array given
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
