#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of interger,
 * followed by a newline.
 * @a: Arrays of integer
 * @n: Number of element to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;

			printf(",");
	}
	printf("\n");
}
