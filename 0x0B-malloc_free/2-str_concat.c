/**
 * str_concat - a function call
 * @s1: first param
 * @s2: second param
 *
 * Description: a function that concat two strings
 * Return: a pointer to a newly allocated spacein mem containing s1 n s2
 * or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int a = 0, b = 0, c = 0, d = 0;

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	c = a + b;

	ptr = malloc((sizeof(char) * c) + 1);
	
	if (ptr == NULL)
		return (NULL);

	while (d < c)
	{
		if (d <= a)
			ptr[d] = s1[d];

		if (d >= a)
		{
			ptr[d] = s2[b];
			b++;
		}

		d++;
	}
	ptr[d] = '\0';

	return (0);
}
