/**
 * _putchar - a function that emulates putchar
 * @c: Takes a character c
 * 
 * Description: This functions uses the <unistd.h> header and returns the 
 * write()
 * Return: write()
 */

#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
