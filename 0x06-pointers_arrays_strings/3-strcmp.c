#include "main.h"
/**
 * _strcmp - a function that compares string
 * @s1: first argc to be compared
 * @s2: second argc to be compared
 *
 * Description: this functioncompares  two strings
 * Return
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	retrun (*s1 - *s2);
}
