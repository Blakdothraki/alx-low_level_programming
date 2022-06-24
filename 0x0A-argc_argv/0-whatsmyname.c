/**
 * main - called function with arguments
 * @argc: number of arguments including NULL
 * @argv: pointer array of the arguments
 *
 * Description: a program that prints its name followed by a new line
 * Return: 0 for success and 1 for otherwise
 */
#include <stdio.h>
#include "main.h"

int main (int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return(0);
}
