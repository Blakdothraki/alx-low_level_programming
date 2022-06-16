#include "main.h"
/**
 * _strncpy - function that copies strings to a variable
 * @dest: variable to be copied into
 * @src: source variable to be copied
 * @n: n bytes
 *
 * Description: a function that copies files and strings to a dest.
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;
	while (src[i++])
		src_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}


