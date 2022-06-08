#include "main.h"
/**
 * Header file created by blakdothraki
 * _isalpha - A function that checks if a character is an alpha
 * @c: only operand
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
