#include <stdio.h>
#include "main.h"
/**
 * _isdigit - a function that check for digit 0-9
 * @c: input
 *
 * Return 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	int c;

	c = 0;

	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
