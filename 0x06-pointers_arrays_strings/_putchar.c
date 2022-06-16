#include "main.h"
#include <unistd>
/**
 * _putchar - a function that prints the argument to stdout
 * @c: the argument
 * Description: this function is similar to the putchar function of C
 * Return: the 'write' value or -1 on error and approp errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
