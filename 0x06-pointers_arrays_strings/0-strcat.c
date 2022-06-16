#include "main.h"
/**
 * _strcat - a function that appends strings
 * @dest: destination string
 * @src: source string
 * 
 * Description: a function concatenates two strings
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
