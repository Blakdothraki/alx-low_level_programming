/**
 * _strchr - function that emulates strchr
 * @s: string to be searched
 * @c: character being searched
 *
 * Description: for more description, run man strchr
 * Return: returns a pointer to the first occurence of the character or nullifno
 * found
 */
#include "main.h"

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
}
