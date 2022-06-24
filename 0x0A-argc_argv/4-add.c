#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function called
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: a function that adds positive numbers
 * Return: set to 0 or 1 otherwise
 */
int main (int argc, char *argv[])
{
	int add = 0;
	int i;

	if (atoi(*argv))
	{
		for (i = 0; i < argc; i++)
		{
			if (argc > 1)
			{
				add += atoi(argv[i]);
			}
			else
				printf("0\n");
		}
		printf("%d\n", add);
	}
	else
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
}
