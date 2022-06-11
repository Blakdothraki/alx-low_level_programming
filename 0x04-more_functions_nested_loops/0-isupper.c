#include "main.h"
/**
 * _isupper(int c) - int _isupper(int c) function returns 1 if c is uppercase
 * @c: int c
 *
 * Returen: 1 or 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
