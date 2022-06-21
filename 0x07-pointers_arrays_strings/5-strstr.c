/**
 * _strstr - a function that emulates strstr
 * @haystack: where to find
 * @needle: what to find
 *
 * Description: for more, visit man strstr
 * Return: a pointer to the beginning of the located substring or NULL
 */

#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (*haystack == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (haystack);
}