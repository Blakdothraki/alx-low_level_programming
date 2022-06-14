#include "main.h"
/**
 * _strlen(char *s) - returns length of a string taken as param
 * @s: string
 *
 * Description: a function that returns length of a string.
 * Return: length of the string
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
