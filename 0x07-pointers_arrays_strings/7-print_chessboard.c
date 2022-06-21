/* *
 * print_chessboard - a function that prints chessboard
 * @a: pointer array containing 8 char
 * 
 * Description: same as above
 * Return: not set
 */
#include "main.h"

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
