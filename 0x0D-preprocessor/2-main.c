 #include <stdio.h>
#include "main.h"
/**
 * main - function called
 *
 * Descritption: ...
 * Return: ...
 */
int main(void)
{
	unsigned long n = strlen(__FILE__);
	int i;

	for (i = 0; i < n; i++)
		_putchar(__FILE__);
	return(0);
}
