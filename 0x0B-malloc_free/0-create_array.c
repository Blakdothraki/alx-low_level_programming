/* *
 * create_array - char type function
 * @size: unsigned int data type for first arg
 * @c: char c, second param
 *
 * Descritption: creates an array of chars and initializes with a specific char 
 * Return: to the array or NULL if it fails
 */
#include "main.h"
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	unsigned int = i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return(NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);	
}
