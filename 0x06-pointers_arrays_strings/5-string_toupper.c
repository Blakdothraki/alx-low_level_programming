#include "main.h"
/**
 * string_toupper - changes string to upper case
 * @str: string to be changed
 *
 * Description: a functions that capitalize strings
 * Return: pointer of the char type to the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
