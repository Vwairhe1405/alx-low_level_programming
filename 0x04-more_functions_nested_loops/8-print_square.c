#include <stdio.h>
#include "main.h"

/**
 * print_square -  prints a square, followed by a new line
 * @size: The size of the square
 *
 */
void print_square(int size)
{
	int lent, wid;

	if (size > 0)
	{
		for (lent = 0; lent < size; lent++)
		{
			for (wid = 0; wid < size; wid++)
				putchar('#');
			if (lent == size - 1)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
