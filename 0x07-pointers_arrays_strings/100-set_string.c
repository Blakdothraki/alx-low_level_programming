/**
 * set _string - a function that sets the value of a pointer to a char
 * @s: a pointer to a pointer
 * @to: a pointer pointed to by a pointer
 *
 * Description: same as above
 * Return: not set
 */
#include "main.h"

void set_string(char **s, char *to)
{
	*s = to;
}
