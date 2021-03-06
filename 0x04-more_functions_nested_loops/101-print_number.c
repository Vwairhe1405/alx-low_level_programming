#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	else
	{
		num = n;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
}
