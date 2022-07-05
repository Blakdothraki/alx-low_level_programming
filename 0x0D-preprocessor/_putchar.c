#include <unistd.h>
#include "main.h"
/**
 * _putchar - a function that writes to stdout
 * @c: first and only argument
 *
 * Return: 1 if  success and -1 if err or other number depending on the errno
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
