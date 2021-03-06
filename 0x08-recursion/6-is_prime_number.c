#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - a function that calls itself
 * @n: number to be checked
 *
 * Description: same as below
 * Return: int value
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - a second function that calls itself
 * @n: second param for second function
 * @i: same
 *
 * Description: a function that returns 1 if n is prime number
 * Return: Returns 1 if true and 0 otherwise
 */

int prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / 1) < i)
		return (1);

	return (prime(n, i + 1));
}
