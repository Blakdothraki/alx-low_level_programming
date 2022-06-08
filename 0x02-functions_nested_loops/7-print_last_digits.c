#include "main.h"
/**
 * Header file created by blakdothraki
 * A function that prints the last digits of a number
 */

int print_last_digit(int n)
{
	int digit = n % 10;
	if (digit < 0)
	{
		digit *= -1;
	}
	return (digit);
}
