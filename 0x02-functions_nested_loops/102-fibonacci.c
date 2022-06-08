#include "main.h"
/**
 * main - function called with a void parameter
 * Return: always set to zero 
 */

int main(void)
{
	int num;
	int seq1 = o, seq2 = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = seq1 + seq2;
		_putchar(sum);
		_putchar(',);

		seq1 = seq2;
		seq2 = sum;

		if (num == 49)
			_putchar('\n');
	}
	return (0);
}
