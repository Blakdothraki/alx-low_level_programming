#include "main.h"
#include <stdio.h>

/**
 * main - function called
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: a function that prints all the arguments it receives
 * Return: set to 0
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
