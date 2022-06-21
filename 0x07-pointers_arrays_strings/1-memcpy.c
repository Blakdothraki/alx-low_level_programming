/**
 * _memcpy - emulates memcpy()
 * @dest: destination
 * @src: source
 * @n: an unsigned int as the bytes value
 *
 * Description: a function that copies n bytes from memory area of src
 * to memory area of dest
 * Return: a pointer to dest if successful
 */
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
    const unsigned char *source = src;
	unsigned char *destination = dest;
	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
	return (dest);
}
