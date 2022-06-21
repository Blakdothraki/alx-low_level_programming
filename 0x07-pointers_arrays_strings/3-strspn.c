/**
 * _strspn - emulates strspn
 * @s: string whose initial segment of bytes is checked
 * @accept: bytes from this is compared to s
 *
 * Description: check man strspn for more
 * Return: the number of bytes in unsigned format
 */
#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
