/**
 * _strpbrk - function that locates the first occurrence in s of any bytes in
 * accept
 * @s: string checked
 * @accept: occurrence to be looked for
 *
 * Description: for more description, check man strpbrk
 * Return: a pointer to the byte in s that matches one of the bytes in accept or
 * nullif no such byte exist
 */
#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
