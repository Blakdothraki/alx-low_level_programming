#include "main.h"
/**
 * _strncat - a function that appends a string to another string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * 
 * Description: this function concat two strings and uses n bytes from the src
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
