#include "main.h"
/**
 * rev_string(char *s) - reverses a string
 * @s: string to be reversed
 *
 * Description: a function that reverses a string
 * Return: not set
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index --)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
