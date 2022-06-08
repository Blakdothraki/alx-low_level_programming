#include "main.h"
/**
 * _isalpha - A function that checks if a character is an alpha
 * @c: only operand
 *
 * Description: the or operator checks whether the parameter is
 * a lower or upper case.
 * Return: 1 if alpha and 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
