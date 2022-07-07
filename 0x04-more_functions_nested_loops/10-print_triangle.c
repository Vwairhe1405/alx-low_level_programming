#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 *
 */
void print_triangle(int size)
{
	int hash, star;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (star = size - hash; star > 0; star--)
				putchar(' ');
			for (star = 0; star < hash; star++)
				putchar('#');
			if (star == size)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
