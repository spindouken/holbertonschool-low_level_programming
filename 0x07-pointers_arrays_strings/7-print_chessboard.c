#include "main.h"

/**
 * print_chessboard - form array to print chessboard
 * @a: array as chessboard template
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (j = 0; j < 8; j++);
		{
		_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
