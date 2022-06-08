#include "main.h"
/**
 * print_last_digit - A function that prints the last digits of
 * @n: a parameter which can be any number, pos or neg.
 *
 * Description: the % operator is used to give the last digit
 * when used against 10
 * Return: the digit.
 */

int print_last_digit(int n)
{
	int digit;
	int digit = n % 10;

	if (digit < 0)
	{
		digit *= -1;
	}
	return (digit);
}
