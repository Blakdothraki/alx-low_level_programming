/**
 * _memset - a function call that returns pointer to memory of it's char
 * @s: a pointer arg
 * @b: an unsigned char
 * @n: an unsigned int
 *
 * Description: a function that fills the first n byte of the s address wit
 * b.
 * Return: pointer to the memory of s if successful and 0 if error
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr_s = s;

	for (i = 0; i < n; i++)
	{
		ptr_s[i] = b;
	}
	return (ptr_s);
}
