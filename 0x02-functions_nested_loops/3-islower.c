#include "main.h"
/**
 * _islower - A function that checks if a character is in lower
 * @c: single parameter
 *
 * Description: it checks if the parameter is between a to z
 * inclusive and returns 1 or 0
 *
 * Return: 1 if alpha and 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
