#include "main.h"
/**
 *Header file created by blakdothraki
 * A function that checks if a character is in lower case
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
