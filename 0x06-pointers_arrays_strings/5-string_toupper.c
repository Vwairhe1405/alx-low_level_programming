#include "main.h"
#include <string.h>

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase.
 * @y: String
 *
 * Return: String
 *
 */
char *string_toupper(char *y)
{
	int i = 0;

	while (y[i])
	{
		if (y[i] >= 97 && y[i] <= 122)
			y[i] = y[i] - 32;
		i++;
	}
	return (y);
}
