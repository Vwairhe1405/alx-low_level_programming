#include "main.h"

/**
 * print_chessboard - function that prints te chessboard
 * @a: The chessboard to be printed
 *
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; a[b][7]; a++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}
