#include "main.h"
/**
 * char *_strcpy - copies strings
 * @dest: destination
 * @src: origin
 *
 * Description: a function that copies string pointed to by src including
 * terminating null byte to the buffer pointed to by dest.
 * Return: value to the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
