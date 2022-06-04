#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - goes there
 *  main - function is called
 *  Return: function  your code goes there
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	if (n > 0)
	{
		printf(" is positive\n");
	}
	else if (n == 0)
	{
		printf(" is zero\n");
	}
	else
	{
		printf(" is negative\n");
	}
	/* your code goes there */
	return (0);
}
