#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: The number of _ character to be printed
 */
void print_line(int n)
{
	int lin;

	if (n > 0)
	{
		for (lin =0; lin < n; lin++)
			putchar('_');
	}
	putchar('\n');
}
