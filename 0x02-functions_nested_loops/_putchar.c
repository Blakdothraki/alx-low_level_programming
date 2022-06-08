#include "main.h"
#include <unistd.h>

/**
 * file name is _putchar.c and it prints out char to std output
 * Return: 1 for a succesfull function
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
