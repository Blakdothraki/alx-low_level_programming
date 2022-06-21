/* *
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix integers
 * @a: pointer to an array of number
 * @size: size of the square matrix in integers
 * 
 * Description: same as above
 * Return: not set
 */
#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf ("%d, %d\n", sum1, sum2);
}
