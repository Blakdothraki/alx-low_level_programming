/**
 * _strdup - function that returns a pointer to its duplicate
 * @str: the string
 *
 * Description: function that returns a pointer to a new string which is a
 * duplicate of the string
 * Return: NULL if string is NULL
 */
#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *ptr;
	int a = 0, i = 1;
	
	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	ptr = malloc((sizeof(char) * i) + 1);

	if (ptr == NULL)
		return (NULL);

	while (a < i)
	{
		ptr[a] = str[a];
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}	
