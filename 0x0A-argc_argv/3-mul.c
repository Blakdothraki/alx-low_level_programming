#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function called
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: a function that multiplies two numbers and prints result
 * Return: set to 0 if successfull and 1 otherwise
 */
int main (int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mul);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
