#include "main.h"
#include <stdio.h>

/**
 * main - function called
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints the number of arguments followed by a new line
 * Return: set to 0
 */
int main (int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
