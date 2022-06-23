/**
 * _strlen_recursion - a function that is recursive
 * @s: string as parameter
 *
 * Description: a function that returns the length of a string
 * Return: The length of a string
 */

#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
