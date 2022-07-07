#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of times the character ' \' is to be printed
 *
 */
void print_diagonal(int n)
{
	int lin, space;

	if (n < 0)
	{
		for (lin = 0; lin < n; lin++)
		{
			for (space = 0; space < lin; space++)
				putchar(' ');
			putchar('\\');

			if (lin == n -1)
				continue;

			putchar('\n');
		}
	}
	putchar('\n');
}
