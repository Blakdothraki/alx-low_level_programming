#include "main.h"
/**
 * main - begins the program
 * Program is to print the sum of all the multiples of 3
 * or 5 below 1024
 * Return: no return value as it is void.
 */
int main(void)
{
	int num;
	int multiple = 0;

	for (num = 0; num <= 1023; num++)
	{
		if (num % 5 == 0 || num % 3 == 0)
		{
			multiple += n;
		}
	}
	_putchar(multiple);
	_putchar('\n');
}
