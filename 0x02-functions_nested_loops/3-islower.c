#include "main.h"
/**
 * Header file created by blakdothraki
 * _islower - A function that checks if a character is in lower
 * @c: single parameter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
